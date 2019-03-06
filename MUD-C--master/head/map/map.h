#ifndef MAP_H
#define MAP_H

#include <bits/stdc++.h>
#include <time.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
using namespace std;


class Map
{
public:
	virtual pair<int, int> operate() = 0;
	virtual void ini() = 0;
	virtual void show() = 0;
};


void cls()
{
    int x = 0, y = 0;
    COORD pos;
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    putchar(' ');
    puts(" ");
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hOut, pos);
}

void HideCursor()
{
    CONSOLE_CURSOR_INFO cursor_info = { 1, 0 };
    SetConsoleCursorInfo( GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info );
}

#endif //MAP_H
