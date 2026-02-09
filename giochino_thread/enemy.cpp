#include <windows.h>
#include <ctime>
#include "enemy.h"
#include "game.h"


void* enemy(void* arg) {
    srand(time(NULL));
    while (running) {
        ey++;
        if (ey >= 20) {
            ey = 0;
            ex = rand()%W;
        }
        Sleep(200);
    }
    return nullptr;
}
