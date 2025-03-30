#include <iostream>
#include <algorithm>

using namespace std;

bool correct_pass(string);

int main() {
    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; ++i) {
        string password;
        getline(cin, password);
        cout << password << ": " << (correct_pass(password) ? "Valida" : "Invalida") << endl;
    }
    return 0;
}
bool correct_pass(string password) {
    bool band = false;
    if (!isalpha(password[0]))
        return false;
    if (!(6 <= password.size() && password.size() <= 12))
        return false;
    for (int i = 1; i < password.size(); ++i) {
        if (!(isdigit(password[i]) || isalpha(password[i]))) {
            return false;
        } else if (isdigit(password[i])){
            band = true;
        }
    }
    return band;
}