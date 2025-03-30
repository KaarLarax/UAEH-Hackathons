#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 1, a = 1, band = 1; a <= n; (band ? ++i : --i), ++a) {
        cout << i << " ";
        if (i == m)
            band = false;
        else if (i == 1)
            band = true;
    }

    return 0;
}