
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int litri = 30, kml = 15, distanza = 450;
    bool rifornimenti_aperti;
    bool benzina_sufficiente;
    char s_n;
    cout << "i rifornimenti sono aperti? (inserisci s o n): ";
    cin >> s_n;
    if (litri * kml > distanza *1.1){
        benzina_sufficiente= true;
    }else {
        benzina_sufficiente= false;
    }
    if(s_n== 's'){
        rifornimenti_aperti= true;
    }else{
        rifornimenti_aperti= false;
    }
    if(benzina_sufficiente==true || rifornimenti_aperti== true){
        cout<<"buon viaggio!";
    }else{
        cout<<"rimanda il viaggio";
    }
}
