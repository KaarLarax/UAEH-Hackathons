#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++) {
        vector<int> a, b;
        for (int j = 0; j < y / 2; j++) {
            int num;
            cin >> num;
            a.push_back(num);

        }
        for (int j = 0; j < y / 2; j++) {
            int num;
            cin >> num;
            b.push_back(num);
        }

        for (int j = 0; j < y / 2; j++) {
            if (a[j] != b[j]) {
                cout << 0 << endl;
                return 0;
            }
        }
    }
    cout << 1 << endl;
}