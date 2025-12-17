#include <iostream>
#include <cmath>
using namespace std;
//a = 1, b = -3, c = 2 eq. secondo grado con due soluzioni distinte.
//a = 1, b = 2, c = 1 eq. secondo grado con due soluzioni coincidenti.
//a = 1, b = 2, c = 5 eq. secondo grado con nessuna soluzione.
//a = 0, b = 2, c = 5 eq. primo grado con una soluzione.
int main() {
    double a, b, c;
    double delta, x1, x2;

    cout << "Inserisci a, b, c:" << endl;
    cin >> a >> b >> c;

    if (a == 0) {
        if (b != 0) {
            x1 = -c / b;
            cout << "E' un'equazione di primo grado. La soluzione e': " << x1 << endl;
        } else {
            cout << "Equazione non valida (a e b sono zero)." << endl;
        }
        return 0;
    }

    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        cout << "L'equazione non ha soluzioni reali." << endl;
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        cout << "L'equazione ha una soluzione doppia: x = " << x1 << endl;
    } else {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Le soluzioni dell'equazione sono: " << x1 << " e " << x2 << endl;
    }

    return 0;
}
