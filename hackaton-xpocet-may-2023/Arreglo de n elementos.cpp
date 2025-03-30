#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> v(n, m);
    for (int i = 1; i < v.size(); ++i) {
        v[i] += i;
    }
    cout << "[";
    for (auto &c: v) {
        if (c != v[v.size() - 1]) {
            cout << c << ',';
        } else {
            cout << c << ']' << endl;
        }
    }
    return 0;
}
