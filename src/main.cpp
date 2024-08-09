#include <wx/wx.h>
#include <iostream>

class TestApp : public wxApp {
    public:
    bool OnInit() override;
};

class MainFrame : public wxFrame {
    public:
    MainFrame();
};

bool TestApp::OnInit() {
    MainFrame * mainFrame = new MainFrame();
    mainFrame->Show();
    return true;
}

MainFrame::MainFrame()
    : wxFrame(nullptr, wxID_ANY, "Hello World!") {
        wxBoxSizer *topsizer = new wxBoxSizer(wxVERTICAL);
        topsizer->Add(new wxStaticText(this, wxID_ANY, "Hello World!"));
        topsizer->Add(new wxButton(this, wxID_ANY, "Quit"));
        this->SetSizerAndFit(topsizer);
}

wxIMPLEMENT_APP(TestApp);
