#include "main.h"


bool MainApp::OnInit() {
    MyFrame *frame = new MyFrame(1, "...");
    frame->Show(true);

    return true;
}