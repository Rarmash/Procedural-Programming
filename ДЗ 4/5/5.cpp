#include <Windows.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
int main(void)
{
    char* str = "0000FF";
    int r, g, b;
    sscanf(str, "%02x%02x%02x", &r, &g, &b);
    HWND hWnd = GetConsoleWindow();
    HDC hDC = GetDC(hWnd);
    HPEN Pen = CreatePen(PS_SOLID, 2, RGB(255, 255, 255));
    SelectObject(hDC, Pen);
    MoveToEx(hDC, 0, 200, NULL);
    LineTo(hDC, 1000, 200);
    MoveToEx(hDC, 500, 0, NULL);
    LineTo(hDC, 500, 400);
    for (float x = -74.0f; x <= 75.0f; x += 0.01f) //начало и конец графика
    {
        MoveToEx(hDC, 10 * x + 250, -10 * sin(x) + 200, NULL); //начало отсчёта графика/растяжение по вертикали/координата по y
        LineTo(hDC, 10 * x + 250, -10 * sin(x) + 200);
    }
    ReleaseDC(hWnd, hDC);
    while (true) {
        Sleep(0);
    }
}