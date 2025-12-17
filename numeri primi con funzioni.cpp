#include <iostream>
using namespace std;
bool divisible(int n, int d)
{
    if(n%d==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_prime(int n)
{
    for (int d = 2; d < n; d++)
    {
        if(divisible(n, d)==true)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int number;
    char scelta;
    bool prime;
    do
    {
        cout<<"Inserisci un numero intero: ";
        cin>>number;
        prime = is_prime (number);
        if(prime==true)
        {
            cout<<"Il numero "<<number<<" è primo!"<<endl;
        }
        else
        {
            cout<<"Il numero "<<number<<" non è primo!"<<endl;
        }
        cout<<"Premi \"t\" per terminare il programma, o qualsiasi altro tasto per riprovare7:";
        cin>>scelta;
    } while (scelta!='t');
}