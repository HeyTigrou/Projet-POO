#include "ClientShow.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall MainClientShow()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}
