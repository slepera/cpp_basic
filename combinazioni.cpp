#include<iostream> 
#include<cmath> 
using namespace std; 

 

int main() 
{ 
    int low = 'A';
    int high = 'Z';
    int N = 3;
    int dim = (int)pow((high-low)+1,N);
    string book[dim];
    book[0] = "AAA";
    for(int i = 1; i < dim; i++)
    {
        string tmp = book[i-1];
        for(int j = N-1; j >= 0; j--)
        {
            if(tmp[j]=='Z')
            {
                tmp[j]='A';
                continue;
            }
            if(tmp[j]<'Z')
            {
                tmp[j]=tmp[j]+1;
                break;
            }
        }
        book[i] = tmp;
    }

    for(int i = 0; i < dim; i++)
    {
        cout<<book[i] + " ";
    }
    


} 