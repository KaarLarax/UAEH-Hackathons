#include <iostream>
#include <set>

using namespace std;

int main() {
    set<int> set1;
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = 0; i < n1 + n2; i++) {
        int aux;
        cin >> aux;
        set1.insert(aux);
    }
    for (int v:set1) {
        cout << v << ' ';
    }
    cout << endl;
    return 0;
}