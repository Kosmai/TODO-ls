#include "mainFrame.h"

MyFrame::MyFrame(wxWindowID id,const wxString& name) : id(id), name(name){
	wxFrame(NULL, id, name);
}