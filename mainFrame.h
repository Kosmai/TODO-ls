#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>
#include <iostream>

class MyFrame : public wxFrame
{
public:
	MyFrame(wxWindowID id,const wxString& name, wxPoint, wxSize);
private:
    void OnOpen(wxCommandEvent& event);
    void OnQuit(wxCommandEvent& event);
	void OnAddButtonClick(wxCommandEvent& event);


	wxWindowID id;
	wxString name;
    wxSize size;
    wxPoint point;

    wxMenuBar* menuBar;
    wxMenu* fileMenu;
    wxMenu* helpMenu;
    wxPanel* mainPanel;
    wxTextCtrl* inputBox;
    wxButton* addButton;
    wxListBox* todoList;
};

#endif