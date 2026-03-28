#include <iostream>
#include <cstdlib>
#include <ctime>
#define CROCE 0
#define TESTA 1
using namespace std;
int my_abs (int n) {
    if (n<0) {
        return -n;
    }
    return n;
}
int main() {
    const int N=100;
    int croce=0;
    int testa=0;
    float percentuale_scarto;
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        int lancio=rand()%2;
        if (lancio==TESTA) {
            testa++;
        }else{
            croce++;
        }
    }
    cout<<"testa: "<<testa<<"\n";
    cout<<"croce: "<<croce<<"\n";
    cout<<"la differenza e': "<<my_abs(testa-croce)<<"\n";

    percentuale_scarto=(abs(testa-croce)*100)/(float)N;
    cout<<"la percentuale di scarto e': "<<percentuale_scarto<<"%";


}