#include "ClientSearchAffichage.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall MainClientSearchShow()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	return 0;
}