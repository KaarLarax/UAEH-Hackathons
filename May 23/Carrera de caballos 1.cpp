#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 0, aux1, aux2;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> aux1 >> aux2;
        a += aux1;
        b += aux2;
        if (i == n) {
            cout << "Finalmente termina la carrera";
            if (a > b) {
                cout << " y gana el caballo A" << endl;
            } else if (a == b) {
                cout << " con un empate" << endl;
            } else {
                cout << " y gana el caballo B" << endl;
            }
        } else {
            cout << "Al minuto " << i;
            if (a > b) {
                cout << " el caballo A va ganando la carrera" << endl;
            } else if (a == b) {
                cout << " los caballos van empatados" << endl;
            } else {
                cout << " el caballo B va ganando la carrera" << endl;
            }
        }

    }

    return 0;
}