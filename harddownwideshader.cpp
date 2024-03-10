#include <windows.h>

int main()
{
    int x = GetSystemMetrics(SM_CXSCREEN);
    int y = GetSystemMetrics(SM_CYSCREEN);
    while (1)
    {
        HDC hdc = GetDC(0);
        HDC desk = GetDC(NULL);
        BitBlt(hdc, 0, 99, x, y, hdc, 0, 0, SRCCOPY);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}