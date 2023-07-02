#include "pch.h"
#include "MyFormCommande.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    POORattrapage::MyFormCommande form;
    Application::Run(% form);
}
