#include <iostream>
#include <string.h>
#include <arpa/inet.h> // inet_addr()
#include <netdb.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h> // bzero()
#include <sys/socket.h>
#include <unistd.h> // read(), write(), close()
#define MAX 80
#define PORT 8181
#define SA struct sockaddr

using namespace std;

const int DIM = 10;
const int NSHIPS = 5;
int your_hit = 0;
int your_opponent_hit = 0;
unsigned short int field_1[DIM][DIM];
unsigned short int field_2[DIM][DIM];
int sockfd, connfd;
struct sockaddr_in servaddr, cli;
string client_server;
char server_ip[16];

void server_creation()
{
    sockfd = socket(AF_INET, SOCK_STREAM, 0); 
    if (sockfd == -1) { 
        printf("socket creation failed...\n"); 
        exit(0); 
    } 
    else
        printf("Socket successfully created..\n"); 
    bzero(&servaddr, sizeof(servaddr)); 
  
    // assign IP, PORT 
    servaddr.sin_family = AF_INET; 
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY); 
    servaddr.sin_port = htons(PORT); 
  
    // Binding newly created socket to given IP and verification 
    if ((bind(sockfd, (SA*)&servaddr, sizeof(servaddr))) != 0) { 
        printf("socket bind failed...\n"); 
        exit(0); 
    } 
    else
        printf("Socket successfully binded..\n"); 
  
    if ((listen(sockfd, 5)) != 0) { 
        printf("Listen failed...\n"); 
        exit(0); 
    } 
    else
        printf("Server listening..\n"); 
    socklen_t len = sizeof(cli); 
  
    // Accept the data packet from client and verification 
    connfd = accept(sockfd, (SA*)&cli, &len); 
    if (connfd < 0) { 
        printf("server accept failed...\n"); 
        exit(0); 
    } 
    else
        printf("server accept the client...\n"); 

}

void client_connection()
{
    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        printf("socket creation failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully created..\n");
    bzero(&servaddr, sizeof(servaddr));

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr(server_ip);
    servaddr.sin_port = htons(PORT);

    if (connect(sockfd, (SA*)&servaddr, sizeof(servaddr))
        != 0) {
        printf("connection with the server failed...\n");
        exit(0);
    }
    else
        printf("connected to the server..\n");
}


void receive_shoot(char* x, char* y) 
{ 
    char buff[2]; 
    bzero(buff, sizeof(buff)); 
    read(client_server=="c"?sockfd:connfd, buff, sizeof(buff)); 
    *x = buff[0];
    *y = buff[1];
    bzero(buff, sizeof(buff)); 
    *x = *x - 97;
    *y = *y - 48;
    if(field_1[(int)*y][(int)*x]==1)
    {
        cout<<"3) x "<<(int)*x<<" y "<<(int)*y<<endl;
        field_1[(int)*y][(int)*x] = 2;
        buff[0]='y';
    }
    else
    {
        buff[0]='n';
    }
    write(client_server=="c"?sockfd:connfd, buff, sizeof(buff)); 
} 


bool send_shoot(char x, char y)
{
    char buff[2];
    bzero(buff, sizeof(buff));
    buff[0] = x;
    buff[1] = y;
    write(client_server=="c"?sockfd:connfd, buff, sizeof(buff));
    bzero(buff, sizeof(buff));
    read(client_server=="c"?sockfd:connfd, buff, sizeof(buff));
    if(buff[0]=='y')
    {
        return true;
    } 
    else
    {
        return false;
    }
}

void print(unsigned short field[DIM][DIM])
{
    
    cout<<"      A    B    C    D    E    F    G    H    I    J"<<endl;
    for(int i = 0; i < DIM; i++)
    {
        cout<<i<<"   ";
        for(int j = 0; j < DIM; j++)
        {
            if(field[i][j]==0)
            {
                cout<<"     ";
            }
            else if(field[i][j]==1)
            {
                cout<<"  *  ";
            }
            else
            {
                cout<<"  x  ";
            }
        }
        cout<<endl<<endl;
    }
    cout<<endl<<endl<<endl;
}

void generate_field()
{
    int ships = 0;
    while(ships < NSHIPS)
    {
        int x = rand()%DIM;
        int y = rand()%DIM;
        if(field_1[x][y] == 0)
        {
            field_1[x][y] = 1;
            ships++;
        }
        
    }
}

void generate_opponent_field()
{
    for(int i = 0; i < DIM; i++)
    {
        for(int j = 0; j < DIM; j++)
        {
            field_2[i][j] = 0;
        }      
    }
}

void your_shoot()
{
    string sx;
    string sy;
    char x;
    char y;
    bool hit;
    cout<<"YOUR x (A-J):";
    cin>>sx;
    cout<<"YOUR y (0-9):";
    cin>>sy;  
    x = sx[0];
    y = sy[0];
    hit = send_shoot(x,y);
    if(hit==true)
    {
        x = tolower(x)-97;
        y = y - 48;
        cout<<"1) x "<<(int)x<<" y "<<(int)y<<endl;
        field_2[(int)y][(int)x]=2;
        your_hit++;
    }  
}



void your_opponent_shoot()
{
    char x, y;
    receive_shoot(&x, &y);
    if(field_1[y][x]==1)
    {
        cout<<"2) x "<<(int)x<<" y "<<(int)y<<endl;
        field_1[(int)y][(int)x]=2;
        your_opponent_hit++;
    }  
}

bool is_over()
{
    if(your_hit == NSHIPS)
    {
        cout<<"You Won!!!"<<endl;
        return true;
    }
    else if(your_opponent_hit == NSHIPS){
        cout<<"You Lost!!!"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
int main()    
{
    srand(time(NULL));

    cout<<"Premi s per fare da server c per connetterti ad un server esistente:";
    cin>>client_server;
    if(client_server=="s")
    {
        server_creation();
    }
    else
    {
        cout<<"inserisci l'ip del server:";
        scanf("%s",server_ip);
        client_connection();
    }

    generate_field();
    generate_opponent_field();
    print(field_1);
    print(field_2);
    
    
    while(true){
        if(client_server=="c")
        {
            your_shoot();
            print(field_1);
            print(field_2);
            if(is_over())
            {
                break;
            }
            your_opponent_shoot();
            print(field_1);
            print(field_2);
            if(is_over())
            {
                break;
            }
        }
        else
        {
            your_opponent_shoot();
            print(field_1);
            print(field_2);
            if(is_over())
            {
                break;
            }
            your_shoot();
            print(field_1);
            print(field_2);
            if(is_over())
            {
                break;
            }
        }
    }
    close(sockfd);

}
