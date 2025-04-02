#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b, c;
    int ac;
    cin >> a >> b;
    cin >> ac;
    c = a + b;
    string anterior = a;
    string actual = b;
    for (int i = 3; i <= ac; i++) {
        c = anterior + actual;

        anterior = actual;

        actual = c;
    }
    if (ac == 1) {
        cout << a << endl;
    } else if (ac == 2) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }
    return 0;
}