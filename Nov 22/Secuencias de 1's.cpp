#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int bit, count = 0, max_count = 0;
    for (int i = 0; i < 10; ++i) {
        cin >> bit;
        if (bit == 1) {
            count++;
            max_count = max(max_count, count);
        } else {
            count = 0;
        }
    }
    cout << max_count << endl;
    return 0;
}