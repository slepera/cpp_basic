#include <iostream>
using namespace std;


int main(){



    float carburante;  //carburante nel serbatoio in litri.
    int distanza_viaggio; //distanza da percorrere.
    float consumo; // consumo medio in km/l.
    char rifornimenti_aperti;

    cout<<"inserisci la distanza del viaggio:";
    cin>>distanza_viaggio;

    cout<<"inserisci la quantità di carburante nel serbatoio:";
    cin>>carburante;
    
    cout<<"inserisci il consumo media dell'auto:";
    cin>>consumo;
    
    cout<<"i rifornimenti sono aperti?(s/n): ";
    cin>>rifornimenti_aperti;
    

    if(rifornimenti_aperti=='s')
    {
        
        cout<<"OK...i distrubutori sono aperti!!! Buon Viaggio!!!";
    }
    else
    {
        int distanza_percorribile;
        distanza_percorribile = consumo * carburante;
        
        if(rifornimenti_aperti || distanza_percorribile>distanza_viaggio)
        {
            cout<<"parti serena!!!";
        }
    }
}