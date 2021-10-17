#include "mainFrame.h"

enum{
    mainPanelID = 99,
    inputBoxID,
    addButtonID,
    todoListID
};

MyFrame::MyFrame(wxWindowID id, const wxString &name, wxPoint point, wxSize size) : wxFrame(NULL, id, name, point, size){

    //Menu
    menuBar  = new wxMenuBar;

    fileMenu = new wxMenu;
    helpMenu = new wxMenu;

    fileMenu->Append(wxID_NEW);
    fileMenu->Append(wxID_OPEN);
    fileMenu->Append(wxID_SAVE);
    fileMenu->Append(wxID_SAVEAS);
    fileMenu->AppendSeparator();
    fileMenu->Append(wxID_EXIT);

    helpMenu->Append(wxID_HELP);
    helpMenu->Append(wxID_ABOUT);

    menuBar->Append(fileMenu, _("&File"));
    menuBar->Append(helpMenu, _("&Help"));

    SetMenuBar(menuBar);

    //Main Panel
    mainPanel = new wxPanel(this, mainPanelID);

    //Main Textbox
    inputBox = new wxTextCtrl(mainPanel, inputBoxID, "", wxPoint(10,10), wxSize(200,30));
    inputBox->SetMaxLength(20);

    //Add Button
    addButton = new wxButton(mainPanel, addButtonID, L"Add", wxPoint(80,60), wxSize(40,30));

    //Main List
    todoList = new wxListBox(mainPanel, todoListID, wxPoint(10,120), wxSize(200,300));

    //Event handles: 

    //Event handle binds for the menu
    Connect(wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame::OnOpen));
    Connect(wxID_EXIT, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame::OnQuit));
    //Event handle binds for the buttons
    Connect(addButtonID, wxEVT_BUTTON, wxCommandEventHandler(MyFrame::OnAddButtonClick));
}

void MyFrame::OnOpen(wxCommandEvent& event){

    wxFileDialog *openFileDialog = new wxFileDialog(this, wxString("Chose a file"), wxString(""), wxString(""), wxString("*.todols"));

    openFileDialog->ShowModal();
    wxString fileName = openFileDialog->GetPath();

    wxPrintf("\"%s\" opened!\n", fileName);
}

void MyFrame::OnQuit(wxCommandEvent& event){
   Close(TRUE);
}

void MyFrame::OnAddButtonClick(wxCommandEvent& event){
    wxString contents = this->inputBox->GetLineText(0);
    this->todoList->Append(contents);
}