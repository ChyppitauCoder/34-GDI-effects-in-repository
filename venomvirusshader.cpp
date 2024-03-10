#include <windows.h>

int main()
{
    int x = GetSystemMetrics(SM_CXSCREEN);
    int y = GetSystemMetrics(SM_CYSCREEN);
    while (1)
    {
        HDC hdc = GetDC(0);
        HDC desk = GetDC(NULL);
        PatBlt(desk, 10, 10, 10, 10, PATCOPY);
        BitBlt(desk, rand() % 1200, rand() % 1200, x, y, hdc, rand() % 1200, rand() % 1200, rand() % 0x100000);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}