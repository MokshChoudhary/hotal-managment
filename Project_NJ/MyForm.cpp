#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute()]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew ProjectNJ::MyForm());

	return 0;
}