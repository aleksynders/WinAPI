#include <Windows.h>
#include <stdio.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow) {
	const int result = MessageBox(NULL, L"����� ����� ������", L"������", MB_YESNOCANCEL);

	if (result == IDYES)
		MessageBox(NULL, L"������� ������ ��", L"", NULL);
	else if (result == IDNO)
		MessageBox(NULL, L"������� ������ ���", L"", NULL);
	else if (result == IDCANCEL)
		MessageBox(NULL, L"������� ������ ������", L"", NULL);
	return 0;
}