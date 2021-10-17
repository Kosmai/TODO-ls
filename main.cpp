#include "main.h"

wxIMPLEMENT_APP(MainApp);

bool MainApp::OnInit() {
    MyFrame *frame = new MyFrame(wxID_ANY, "TODO-ls", wxPoint(10, 10), wxSize(300, 300));
    frame->Show(true);

    return true;
}