#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <pthread.h>
#include "enemy.h"
#include "player.h"
#include "draw.h"



int main() {
    pthread_t tenemy;
    pthread_create(&tenemy, NULL, enemy, NULL);
    pthread_t tplayer;
    pthread_create(&tplayer, NULL, draw, NULL);
    pthread_t tdraw;
    pthread_create(&tdraw, NULL, player, NULL);

    pthread_join(tenemy, NULL);
    pthread_join(tplayer, NULL);
    pthread_join(tdraw, NULL);

    printf("GAME OVER\n");
    return 0;
}
