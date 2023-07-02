//MyForm.cpp
#include "MyForm.h"
#include "pch.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int __clrcall WinMain() 
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Exercices::MyForm monFormulaire;
    Application::Run(% monFormulaire);
}