// #include <sys/time.h>
// #include<iostream>
// #include <cstring>

// using namespace std;

// int main()
// {
//     time_t now = time(0);
//     char* dt = ctime(&now);
//     cout << "The local date and time is: " << dt << endl;
//     char year[5];
//     cout<<strlen(dt)<<endl;
//     year[0]=dt[strlen(dt)-5];
//     year[1]=dt[strlen(dt)-4];
//     year[2]=dt[strlen(dt)-3];
//     year[3]=dt[strlen(dt)-2];
//     year[4]='\0';
//     cout<<year<<endl;
//     int num_year = atoi(year);
//     cout<<num_year;
// }

// 

#include <sys/time.h>
#include<iostream>
#include <cstring>

using namespace std;

int main()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "The local date and time is: " << dt << endl;
    char* year;
    cout<<strlen(dt)<<endl;
    year = dt + strlen(dt)-5;
    cout<<year<<endl;
    int num_year = atoi(year);
    cout<<num_year;
}
