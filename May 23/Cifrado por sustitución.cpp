#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
string clave;

string cifrar(string);

string descifrar(string);

int main() {
    int n;
    cin >> n;
    set<char> abc;
    string expression;
    cin >> clave;
    cin.ignore();
    getline(cin, expression);
    for (char c = 'a'; c <= 'z'; c++) {
        abc.insert(c);
    }
    for (char c: clave) {
        abc.erase(c);
    }
    for (char c: abc) {
        clave += c;
    }
    cout << (n == 1 ? cifrar(expression) : descifrar(expression));
    return 0;
}

string cifrar(string exp) {
    for (char &i: exp) {
        if (isalpha(i)) {
            i = clave[i - 'a'];
        }
    }
    return exp;
}

string descifrar(string exp) {
    for (char &i: exp) {
        if (isalpha(i)) {
            i = (clave.find(i) + 'a');
        }
    }
    return exp;
}
