#include <vector>
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &c: v) {
        cin >> c;
    }
    int pos = 0;
    int count1 = 0;
    int count2 = 0;
    while (pos < n / 2) {
        count1 += v[pos];
        pos++;
    }
    while (pos < v.size()) {
        count2 += v[pos];
        pos++;
    }
    bool band = (count2 == count1);
    cout << (band ? count2 : count1 + count2) << ' ' << band << endl;
    return 0;
}
