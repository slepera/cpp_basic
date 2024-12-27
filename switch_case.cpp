
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    
    cout<<"Inserisci un giorno tra 1 e 7: ";
    int giorno;
    cin >> giorno;
    switch (giorno+1) {
        case 1:
            cout << "Lun";
            break;
        case 2:
            cout << "Mar";
            break;
        case 3:
            cout << "Mer";
            break;
        case 4:
            cout << "Gio";
            break;
        case 5:
            cout << "Ven";
            break;
        case 6:
            cout << "Sab";
            break;
        case 7:
            cout << "Dom";
            break;
        default:
            cout << "Errore";
    }
    return 0;

}
