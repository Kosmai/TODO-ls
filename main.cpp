#include "main.h"

wxIMPLEMENT_APP(MainApp);

bool MainApp::OnInit() {
    MyFrame *frame = new MyFrame(wxID_ANY, wxString("TODO-ls"), wxPoint(100, 100), wxSize(500, 500));
    frame->Show(true);
    SetTopWindow(frame);

    return true;
}