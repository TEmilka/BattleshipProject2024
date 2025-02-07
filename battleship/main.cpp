#include "pch.h"
#include "Form1.h"

using namespace System;


int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew CppCLRWinFormsProject::Form1(args));
    return 0;
}
