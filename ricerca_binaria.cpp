#include <iostream>
#include <cstring>

using namespace std;

bool binary_search(string book[], int dim, string elem)
{
    int low = 0;
    int high = dim;
    int mid;
    int contatore = 0;
    while(low <= high)
    {
        contatore++;
        mid = low + (high - low) / 2;
        if(elem.compare(book[mid])==0)
        {
            cout<<"numero passi: "<<contatore<<endl;
            return true;
        }
        if(elem.compare(book[mid])<0)
        {
            cout<<elem<< " minore " <<book[mid]<<endl;
            high = mid -1;
        }
        else
        {
            cout<<elem<< " maggiore " <<book[mid]<<endl;
            low = mid + 1;
        }
    }
    cout<<"numero passi: "<<contatore<<endl;
    return false;   
}

void print_array(string book[], int dim)
{
    for(int i = 0; i < dim; i++)
    {
        cout<<book[i]<<endl;
    }
}

std::string my_to_string(int n, int width = 8)
{   // this version will truncate any digits past the width
    std::string s(width, '0');
    for (int i = width; i--; n /= 10) s[i] = char('0' + n % 10);
    return s;
}

int main(){
    const int DIM = 10000;
    string book[DIM];
    for(int i = 0; i < DIM; i++)
    {
        book[i] = my_to_string(i, 10);
    }
    //print_array(book, DIM);
    string elem = "5";
    bool found = binary_search(book, DIM, my_to_string(5,10));
    if(found == true)
    {
        cout<<elem<<" trovato!!!";
    }
    else
    {
        cout<<elem<<" non trovato!!!";
    }


}