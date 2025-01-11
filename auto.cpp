#include <iostream>
#include <cstdlib>
using namespace std;
const int N=100;
int number_of_vehicles=0;
int last_id = 1;
struct car
{
    int id;
    string brand;
    string model; 
    int year;
    int price;
};
car vehicles[N];
bool filter_array[N];

void create();
void add();
void filter();
void print();
void delete_car();
void reset_filter();

int main ()
{
    create();
    reset_filter();
    char choice;
    do{
        cout<<"insert a to add a new car;"<<endl;
        cout<<"insert d to delete an existing car;"<<endl;
        cout<<"insert f to filter the results;"<<endl;
        cout<<"insert p to print available cars;"<<endl;
        cout<<"insert r to reset filters;"<<endl;
        cout<<"make your choice: "<<endl;
        cin>>choice;
        system("cls");
        switch(choice)
        {
            case 'a':
                add();
                break;
            case 'd':
                delete_car();
                break;
            case 'f':
                filter();
                break;
            case 'p':
                print();
                break;
            case 'r':
                reset_filter();
                break;
        }
    }while(true);
    
}

void create ()
{
    for(int i=0; i< 5; i++)
    {
        vehicles[i].id=last_id;
        vehicles[i].brand="Toyota";
        vehicles[i].model="Supra";
        vehicles[i].year=rand()%47+1978;
        vehicles[i].price=rand()%90001+10000;
        number_of_vehicles++;
        last_id++;
    }
}
void add()  
{
    int year;
    vehicles[number_of_vehicles].id=last_id;
    vehicles[number_of_vehicles].brand="Toyota";
    vehicles[number_of_vehicles].model="Supra";
    cout<<"Insert the year: ";
    cin>>year;
    vehicles[number_of_vehicles].year = year;
    cout<<"Insert the price: ";
    cin>>vehicles[number_of_vehicles].price;
    number_of_vehicles++;
    last_id++;
    
}

void filter ()
{
    char choice;
    int initial_year, final_year, initial_price, final_price;
    cout<<"insert y to filter by year;"<<endl;
    cout<<"insert p to filter by price;"<<endl;
    cout<<"make your choice: "<<endl;
    cin>>choice;
    system("cls");
    switch(choice)
    {
        case 'y': 
            cout<<"Insert the initial year: ";
            cin>>initial_year;
             
            cout<<"Insert the final year: ";
            cin>>final_year;
            for(int i=0; i< number_of_vehicles; i++)
            {
                if(vehicles[i].year>=initial_year && vehicles[i].year<=final_year && filter_array[i]==true)
                {
                    filter_array[i]=true; 
                }
                else
                {
                    filter_array[i]=false; 
                }
            }
            break;
        case 'p':
            cout<<"Insert the initial price: ";
            cin>>initial_price;
             
            cout<<"Insert the final price: ";
            cin>>final_price;
            for(int i=0; i< number_of_vehicles; i++)
            {
                if(vehicles[i].price>=initial_price && vehicles[i].price<=final_price && filter_array[i]==true)
                {
                    filter_array[i]=true; 
                }
                else
                {
                    filter_array[i]=false; 
                }
            }
            break;
    }
}


void reset_filter()
{
    for(int i = 0; i < N; i++)
    {
        filter_array[i] = true;
    }
}

void print ()
{
    for(int i=0; i< number_of_vehicles; i++)
    {
        if(filter_array[i]==false)
        {
            continue;
        }
        cout<<vehicles[i].id<<") ";
        cout<<vehicles[i].brand<<" ";
        cout<<vehicles[i].model<<" ";
        cout<<vehicles[i].year<<" ";
        cout<<vehicles[i].price<<" ";
        cout<<endl; 
    }
}

void delete_car(){
    int id;
    bool found = false;
    cout<<"insert the ID to delete: ";
    cin>>id;
    for(int i = 0; i<number_of_vehicles; i++){
        if(vehicles[i].id == id)
        {
            found = true;
        }
        if(/*vehicles[i].id != id &&*/ !found)
        {
            continue;
        }
        if(i+1<number_of_vehicles)
        {
            vehicles[i]=vehicles[i+1];
        }
    }
    if(found)
    {
        number_of_vehicles--;
    }
}
