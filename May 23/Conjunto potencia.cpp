#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> elements(n);
    for (int i = 0; i < n; i++) {
        cin >> elements[i];
    }

    int num_subsets = pow(2, n);
    for (int i = 0; i < num_subsets; i++) {
        vector<string> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset.push_back(elements[j]);
            }
        }
        cout << "{ ";
        for (const auto &j : subset) {
            cout << j << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}