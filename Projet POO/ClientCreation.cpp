#include "ClientCreation.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall MainClientCreation()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}
