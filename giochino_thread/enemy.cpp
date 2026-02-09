#include <windows.h>
#include <stdlib.h>
#include "enemy.h"
#include "game.h"


void* enemy(void* arg) {
    while (running) {
        ex--;
        if (ex <= 1) ex = 20;
        Sleep(200);
    }
    return NULL;
}
