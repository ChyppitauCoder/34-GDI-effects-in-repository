#include <windows.h>

int main(void)
{
	HDC hdc = GetDC(0);
	int x = GetSystemMetrics(0);
	int y = GetSystemMetrics(1);

	while(1)
	{
		hdc = GetDC(0);
		PatBlt(hdc, 0, 0, x, y, PATINVERT);
		Sleep(100);
	        ReleaseDC(0, hdc);
	}
}