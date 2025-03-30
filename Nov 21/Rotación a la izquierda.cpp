#include <iostream>

using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int arr[n];
    for (int i = n - d; i < n; ++i) {
        cin >> arr[i];
    }
    for (int i = 0; i <  n - d; ++i) {
        cin >> arr[i];
    }
    for (int &digit: arr) {
        cout << digit << " ";
    }
    cout << endl;
    return 0;
}