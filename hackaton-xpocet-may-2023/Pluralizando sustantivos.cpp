#include <iostream>

using namespace std;

int consonante(char c) {
    if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        return 1;

    return 0;
}

int main() {
    string str;
    cin >> str;
    if (str.back() == 'y' && consonante(str[str.size() - 2])) {
        str.pop_back();
        str += "ies";
    } else if (str.back() == 's' || str.substr(str.size() - 2) == "ch" || str.substr(str.size() - 2) == "sh")
        str += "es";
    else
        str += 's';

    cout << str << endl;
    return 0;
}
