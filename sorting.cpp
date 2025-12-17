#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int n;
string* my_string_array;

std::string gen_random_string(const int len) {
    static const char alphanum[] =
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    
    return tmp_s;
}


void generate_array()
{
    srand(time(NULL));
    cout<<"Inserisci la dimensione dell'array: ";
    cin>>n;
    my_string_array = new string[n];
    for(int i = 0; i < n; i++)
    {
        my_string_array[i] = gen_random_string(5);
    }
}

void print_array()
{
    for(int i = 0; i < n; i++)
    {
        cout<<my_string_array[i]<<endl;
    }
}

void bubble_sort()
{
    bool scambio;
    string tmp;
    do
    {
        scambio = false;
        for(int j = 0; j < n-1; j++)
        {
            if(my_string_array[j] > my_string_array[j+1])
            {
                tmp = my_string_array[j];
                my_string_array[j] = my_string_array[j+1];
                my_string_array[j+1] = tmp;   
                scambio = true;
            }
        }  
    }while(scambio == true);
}

void selection_sort()
{
    for(int i=0;i<n-1;i++)
    {
        string min=my_string_array[i];
        int min_idx=i;
        for(int j=i+1;j<n;j++)
        {
            if(my_string_array[j]<min)
            {
                min=my_string_array[j];
                min_idx=j;
            }
        }
        if(min_idx!=i)
        {
            my_string_array[min_idx]=my_string_array[i];
            my_string_array[i]=min;
        }
    }
}

int main()
{
    int choice;

    


    do{
        cout<<"1) per inserire l'array:"<<endl;
        cout<<"2) per ordinare tramite selection_sort:"<<endl;
        cout<<"3) per ordinare tramite bubble_sort:"<<endl;
        cout<<"4) per stampare l'array:"<<endl;
        cout<<"fai la tua scelta: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            generate_array();
            break;
        case 2:
            selection_sort();
            break;
        case 3:
            bubble_sort();
            break;
        case 4:
            print_array();
            break;        
        default:
            break;
        }
    }while(true);
}