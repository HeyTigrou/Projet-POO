#include "StockMenu.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int __clrcall MainStockMenu()
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    return 0;
}
