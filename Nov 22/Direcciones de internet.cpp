#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string str;
        getline(cin, str);
        for (char &j: str) {
            if (j == ' ') {
                j = '_';
            }
        }
        cout << str << endl;
    }
    return 0;
}