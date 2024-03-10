#include <windows.h>

int main()
{
    int x = GetSystemMetrics(SM_CXSCREEN);
    // int y = GetSystemMetrics(SM_CYSCREEN);
    while (1)
    {
        HDC hdc = GetDC(0);
        HDC desk = GetDC(NULL);
        BitBlt(desk, rand() % 1000, rand() % 1000, x, rand() % 1000, hdc, 0, 0, 0x79ce991c7);
        PatBlt(desk, rand() % 1000, rand() % 1000, rand() % 1000, rand() % 1000, WHITE_BRUSH);
        ReleaseDC(0, hdc);
        Sleep(10);
    }
}