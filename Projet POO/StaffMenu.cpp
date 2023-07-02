#include "StaffMenu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall MainStaffMenu()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    return 0;
}
