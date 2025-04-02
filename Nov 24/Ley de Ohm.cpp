#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b;
    double result;
    char c;
    cin >> c;
    cin >> a;
    cin >> b;
    if (c == 'V') {
        result = a * b;
    } else if (c == 'I') {
        result = a / b;
    } else {
        result = a / b;
    }

    cout << fixed << setprecision(4) << result << endl;
    return 0;
}