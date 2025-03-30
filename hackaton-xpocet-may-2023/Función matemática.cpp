#include <iostream>

using namespace std;

int conjetura_collatz(int x) {
    int contador = 0;
    bool band = x != 1;
    while (x != 1) {
        x = x % 2 == 0 ? x / 2 : 3 * x + 1;
        contador++;
    }
    return (band ? contador : 3);
}

int main() {
    int n;
    cin >> n;
    cout << conjetura_collatz(n) << endl;
    return 0;
}
