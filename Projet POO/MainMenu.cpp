#include "MainMenu.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall Main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ProjetPOO::MainMenuForm form;
	Application::Run(% form);
	return 0;
}