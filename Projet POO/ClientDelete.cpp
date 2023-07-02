#include "ClientDelete.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall MainClientDelete()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    return 0;
}
