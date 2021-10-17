#include "main.h"

wxIMPLEMENT_APP(MainApp);

bool MainApp::OnInit() {
    MyFrame *frame = new MyFrame(wxID_ANY, "TODO-ls");
    frame->Show(true);

    return true;
}