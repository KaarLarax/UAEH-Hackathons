#include <iostream>

void tablas(int x);

using namespace std;

int main() {
    int input, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> input;
        tablas(input);
    }
    return 0;
}

void tablas(int x) {
    for (int i = 1; i <= 10; i++) {

        cout << x << "x" << i << "=" << x * i << endl;

    }
    cout << "**********" << endl;
}