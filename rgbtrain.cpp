#include <windows.h>

int main() {
    int w = GetSystemMetrics(0);
    int h = GetSystemMetrics(1);
    while (1) {
        HDC hdc = GetDC(0);
    	HBRUSH brush = CreateSolidBrush(RGB(rand() % 255, rand() % 255, rand() % 255));
		SelectObject(hdc, brush);
        BitBlt(hdc, 0, 0, w, h, hdc, -30, 0, 0x1900ac010e);
        BitBlt(hdc, 0, 0, w, h, hdc, w - 30, 0, 0x1900ac010e);
        //BitBlt(hdc, 0, 0, w, h, hdc, 0, -30, 0x1900ac010e);
        //BitBlt(hdc, 0, 0, w, h, hdc, 0, h - 30, 0x1900ac010e);
    	DeleteObject(brush);
        ReleaseDC(0, hdc);
        //Sleep(rand() % 100);
    }
}