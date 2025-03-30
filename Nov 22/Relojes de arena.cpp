#include <bits/stdc++.h>
using namespace std;

int main() {
    int matrix[6][6];
    for (auto &i: matrix) {
        for (auto &j: i) {
            cin >> j;
        }
    }
    int maxi = 0;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            int aux = matrix[i][j] + matrix[i][j + 1]     + matrix[i][j + 2]
                                   + matrix[i + 1][j + 1] +
                      matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2];
            maxi = max(maxi, aux);
        }
    }
    cout << maxi << endl;
    return 0;
}
