#include "SignIn.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	bankSystem::SignIn form;
	Application::Run(% form);
}