#include <windows.h>
#include <conio.h>
#include "player.h"
#include "game.h"



void* player(void* arg) {

    while (running) {
        if (_kbhit()) {
            char c = _getch();
            if (c == 'z' && px > 0) px--;
            if (c == 'x' && px < W-1) px++;
        }
        Sleep(200);
    }
    return nullptr;
}
