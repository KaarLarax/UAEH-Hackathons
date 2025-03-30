#include <iostream>

using namespace std;

int main() {
    int r, s, b;
    cin >> r >> s >> b;
    if (b <=  r * s) {
        cout << b << " " << 0 << endl;
    } else {
        cout <<  r * s << " " << b - r * s << endl;
    }
    return 0;
}
