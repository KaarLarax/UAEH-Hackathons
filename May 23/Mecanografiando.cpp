#include <iostream>

using namespace std;

int main() {
    string str, gastada;
    getline(cin, str);
    cin >> gastada;
    for (auto &c: str) {
        for (auto &s: gastada) {
            if (s == c) {
                c = ' ';
            }
        }
    }
    cout << str << endl;
    return 0;
}
