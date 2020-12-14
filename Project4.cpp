#include <iostream>
#include <windows.h>

int main(int argc, char** argv)
{   
	STARTUPINFO si = {};
	PROCESS_INFORMATION pi = {};
	wchar_t args[] = L"somepath C:\\tmp\\Project3\\file.txt";
	Sleep(5000);
	if (!CreateProcess(L"C:\\tmp\\Project3\\Debug\\Project3.exe",
		args,
		NULL,
		NULL,
		FALSE,
		0,
		NULL,
		NULL,
		&si,
		&pi)
		)
	{
	printf("CreateProcess failed (%d).\n",
		GetLastError());
		return 0;
	}	
	return 0;
}