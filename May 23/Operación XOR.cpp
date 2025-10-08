#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b;
    int max_base2 = (int) max(a.size(), b.size());
    auto *menor = &(b.size() < a.size() ? b : a);
    while (menor->size() != max_base2) {
        menor->insert(menor->begin(), '0');
    }
    for (int i = 0; i < max_base2; ++i) {
        c += (a[i] != b[i] ? '1' : '0');
    }
    cout << c << endl;
    return 0;
}