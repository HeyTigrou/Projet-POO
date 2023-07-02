#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Prototypenumber1::MyForm formulaire;
	Application::Run(% formulaire);
	return 0;
}