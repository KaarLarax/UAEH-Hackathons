#include <iostream>

using namespace std;

int euclideanAlgorithm(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    double x;
    cin >> x;
    int xx = static_cast<int>(x * 10000);
    int mxc = euclideanAlgorithm(xx, 10000);
    xx = xx / mxc;
    cout << xx << "/" << 10000 / mxc << endl;
    return 0;
}