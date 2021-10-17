#include "mainFrame.h"

MyFrame::MyFrame(wxWindowID id, const wxString &name, wxPoint point, wxSize size) : id(id), name(name),
                                                                                    wxFrame(NULL, id, name, point,
                                                                                            size) {
    wxMenuBar *menuBar = new wxMenuBar();

    wxMenu *fileMenu = new wxMenu();
    wxMenu *helpMenu = new wxMenu();

    fileMenu->Append(wxID_NEW);
    fileMenu->Append(wxID_OPEN);
    fileMenu->Append(wxID_SAVE);
    fileMenu->Append(wxID_SAVEAS);

    helpMenu->Append(wxID_HELP);
    helpMenu->Append(wxID_ABOUT);

    menuBar->Append(fileMenu, _("&File"));
    menuBar->Append(helpMenu, _("&Help"));

    SetMenuBar(menuBar);

    Connect(wxID_OPEN, wxEVT_COMMAND_MENU_SELECTED, wxCommandEventHandler(MyFrame::OnOpen));
}

void MyFrame::OnOpen(wxCommandEvent &event) {

    wxFileDialog *openFileDialog = new wxFileDialog(this, wxString("Chose a file"), wxString(""), wxString(""), wxString("*.todols"));

    openFileDialog->ShowModal();
    wxString fileName = openFileDialog->GetPath();

    wxPrintf("\"%s\" opened!\n", fileName);
}
