#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

const int NROW = 10, NCOL = 10;
int my_x = 0, my_y = 0;
int my_dir=KEY_RIGHT;
int field[NROW][NCOL] = {0};

void print_field(int field[NROW][NCOL])
{
    char lettera = 97;
    system("cls");
    for(int i = 0; i < NROW; i++)
    {
        cout << lettera << "  ";
        lettera ++;
        for(int j = 0; j < NCOL; j++)
        {
            if(my_x==j && my_y==i)
            {
                cout <<"* ";
            }
            else
            {
                cout <<"  ";
            }
            
        }
        cout << endl;
    }
    cout <<"   ";
    for(int i = 0; i < NCOL; i++)
    {
        cout << i + 1 << " "; 
    }
    cout << endl;
}

void *keyboard_thread(void *vargp) 
{  
    int c = 0;
    while(true)
    {
        c = 0;

        switch((c=getch())) {
        case KEY_UP:
            my_dir=KEY_UP;
            break;
        case KEY_DOWN:
            my_dir=KEY_DOWN;
            break;
        case KEY_LEFT:
            my_dir=KEY_LEFT;
            break;
        case KEY_RIGHT:
            my_dir=KEY_RIGHT;
            break;
        default:
            break;
        }
    }
}

void *move_thread(void *vargp) 
{  
    while(true)
    {
        if(my_dir == KEY_LEFT)
        {
            if(my_x>0)
            {
                my_x--;
            }
        }
        if(my_dir == KEY_RIGHT)
        {
            if(my_x<NCOL-1)
            {
                my_x++;
            }
        }
        if(my_dir == KEY_DOWN)
        {
            if(my_y<NROW-1)
            {
                my_y++;
            }
        }
        if(my_dir == KEY_UP)
        {
            if(my_y>0)
            {
                my_y--;
            }
        }
        print_field(field);
        this_thread::sleep_for(chrono::milliseconds(1000));
    } 
}

int main()
{
    pthread_t thread_id; 
    pthread_t thread_id_2; 
    pthread_create(&thread_id, NULL, move_thread, NULL); 
    pthread_create(&thread_id_2, NULL, keyboard_thread, NULL); 
    pthread_join(thread_id, NULL); 
    //pthread_join(thread_id_2, NULL); 
    cout<<"********************************************************";
    this_thread::sleep_for(chrono::milliseconds(5000));

    return 0;
}