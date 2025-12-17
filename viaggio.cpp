#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int distanza_in_km = 200;
    float carburante_in_l = 19.5;
    float consumo_km_l = 10;
    char rifornimenti_aperti;

    cout<<"i rifornimenti sono aperti?(s/n):";
    cin>>rifornimenti_aperti;
    
    if('s'==rifornimenti_aperti)
    {
        cout<<"non preoccuparti del carburante perche' i rifornimenti sono aperti"<<endl;
        return 0;
    }

    int distanza_percorrebile = carburante_in_l * consumo_km_l;
    float percentuale = (distanza_percorrebile/(float)distanza_in_km)*100;
    if(distanza_percorrebile>distanza_in_km*1.1){
        cout<<"parti tranquillo!!!...La distanza percorribile e' il "<<percentuale<<"%";
        return 0;
    }
    if((distanza_percorrebile>=distanza_in_km*0.9)&&(distanza_percorrebile<=distanza_in_km*1.1))
    {
        cout<<"parti ma con cautela!!!...La distanza percorribile e' il "<<percentuale<<"%";
        return 0;
    }
    cout<<"ti consiglio di non partire!!!...La distanza percorribile e' il "<<percentuale<<"%";
    return 0;
    
}
    



