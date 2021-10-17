#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>
#include <iostream>

class MyFrame : public wxFrame
{
public:
	MyFrame(wxWindowID id,const wxString& name, wxPoint, wxSize);
    void OnOpen(wxCommandEvent& event);
private:
	wxWindowID id;
	wxString name;
    wxSize size;
    wxPoint point;
};

#endif