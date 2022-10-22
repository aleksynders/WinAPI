#include <Windows.h>
#include <stdio.h>

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR pCmdLine, int nCmdShow) {
	const int result = MessageBox(NULL, L"Нажми любую кнопку", L"Кликай", MB_YESNOCANCEL);

	if (result == IDYES)
		MessageBox(NULL, L"Прожата кнопка Да", L"", NULL);
	else if (result == IDNO)
		MessageBox(NULL, L"Прожата кнопка Нет", L"", NULL);
	else if (result == IDCANCEL)
		MessageBox(NULL, L"Прожата кнопка Отмена", L"", NULL);
	return 0;
}