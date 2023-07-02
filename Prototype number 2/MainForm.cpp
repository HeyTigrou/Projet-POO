#include "MainForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Prototypenumber2::MainForm form;
	Application::Run(% form);
	return 0;
}
