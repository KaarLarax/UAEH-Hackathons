#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rotar_filas();

void rotar_columnas();

vector<vector<int>> matriz(5, vector<int>(5));
vector<int> rotaciones(5);

int main() {
    for (auto &i: matriz) {
        for (auto &j: i) {
            cin >> j;
        }
    }
    for (auto &f: rotaciones) {
        cin >> f;
    }
    rotar_filas();
    rotar_columnas();
    for (auto &i: matriz) {
        for (auto &j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

void rotar_filas() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < rotaciones[i]; ++j) {
            int aux = matriz[i][0];
            for (int k = 0; k < 4; ++k) {
                matriz[i][k] = matriz[i][k + 1];
            }
            matriz[i][4] = aux;
        }
    }
}

void rotar_columnas() {
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < rotaciones[i]; ++j) {
            int aux = matriz[0][i];
            for (int k = 0; k < 4; ++k) {
                matriz[k][i] = matriz[k + 1][i];
            }
            matriz[4][i] = aux;
        }
    }
}
