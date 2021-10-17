#ifndef MAINFRAME_H
#define MAINFRAME_H

#include <wx/wx.h>

class MyFrame : public wxFrame
{
public:
	MyFrame(wxWindowID id,const wxString& name);
private:
	wxWindowID id;
	wxString name;
};

#endif