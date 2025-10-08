#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> a(n), b(m);
    vector<string> v;
    for (auto &str: a) {
        cin >> str;
    }
    for (auto &str1: b) {
        cin >> str1;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(v));
    if (!v.empty()) {
        for (auto &c: v) {
            cout << c << " ";
        }
        cout << endl;
    } else {
        cout << "vacio" << endl;
    }
    return 0;
}