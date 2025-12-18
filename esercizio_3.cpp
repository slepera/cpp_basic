
#include <iostream>
using namespace std;

int main(){
    const int NUMBERS_TO_SUM = 3;
    long long
    int sum = 0;
    int input_number;

    cout<<sizeof(sum)<<endl;

    for (int i = 0;i<NUMBERS_TO_SUM;i = i + 1) {
        cout<<"Inserisci un numero: ";
        cin>>input_number;
        sum = sum + input_number;
    }
    cout<<"la somma e': "<<sum;
}