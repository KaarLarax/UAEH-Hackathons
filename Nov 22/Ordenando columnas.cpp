#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int x, y;
    cin >> x >> y;
    int matrix[x][y];
    for (auto &n :matrix) {
        for (auto &m: n) {
            cin >> m;
        }
    }

    int aux;
    for (int k = 0; k < y; ++k) {
        for (int i = 0; i < x - 1; i++) {
            for (int j = i + 1; j < x; j++) {
                if (matrix[i][k] > matrix[j][k]) {
                    aux = matrix[i][k];
                    matrix[i][k] = matrix[j][k];
                    matrix[j][k] = aux;
                }
            }
        }
    }

    for (auto &n :matrix) {
        for (auto &m: n) {
            cout << m << ' ';
        }
        cout << endl;
    }
    return 0;
}