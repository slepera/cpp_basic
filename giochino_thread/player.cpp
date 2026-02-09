#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <pthread.h>
#include "game.h"



void* player(void* arg) {

    while (running) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 'w' && py > 0) py--;
            if (c == 's' && py < H-1) py++;
        }
        Sleep(200);
    }
    return 0;
}
