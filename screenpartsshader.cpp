#include <windows.h>

int main()
{
    int x = GetSystemMetrics(SM_CXSCREEN);
    int y = GetSystemMetrics(SM_CYSCREEN);
    while (1)
    {
        HDC hdc = GetDC(0);
        HDC desk = GetDC(NULL);
        StretchBlt(desk, rand() % 1200, rand() % 1200, rand() % 1200, rand() % 100 + 200, hdc, rand() % 200, rand() % 1200, rand() % 1200, rand() % 200 + 999 - 87, SRCCOPY);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}