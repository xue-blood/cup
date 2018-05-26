//
// Custom URL Protocol access tool
// (convert url to command)
//
// by doolb 2018.5.26
//
#include <stdio.h>
#include <string.h>
#include <windows.h>

int WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nShowCmd)
{
	if (lpCmdLine == NULL)
		return -1;
	char *start = strstr(lpCmdLine, ":");
	if (start == NULL)
		return -1;
	*start = ' ';

	STARTUPINFO si = {0};
	PROCESS_INFORMATION pi = {0};
	si.cb = sizeof(si);

	CreateProcessA(NULL, lpCmdLine, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi);

	return 0;
}