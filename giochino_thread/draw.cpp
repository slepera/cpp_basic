#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <pthread.h>
#include "game.h"

void* draw(void* arg) {
    while (running) {
        system("cls");
        for (int y = 0; y < H; y++) {
            for (int x = 0; x < W; x++) {
                if (x == px && y == py) putchar('@');
                else if (x == ex && y == ey) putchar('X');
                else putchar(' ');
            }
            putchar('\n');
        }
        Sleep(200);
    }
    return nullptr;
}