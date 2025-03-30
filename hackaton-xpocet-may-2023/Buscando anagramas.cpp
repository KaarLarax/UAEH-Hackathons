#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string exp, patron;
    cin >> exp >> patron;
    sort(patron.begin(), patron.end());
    for (int i = 0; i < exp.size() - (patron.size() - 1); i++) {
        string compare = exp.substr(i, patron.size());
        sort(compare.begin(), compare.end());
        if (patron == compare) {
            cout << "Encontrado en: " << i << endl;
        }
    }

    return 0;
}