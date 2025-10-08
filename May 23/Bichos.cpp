#include <iostream>

using namespace std;
int d;

int daysbugs(int actual_day, int a, int b, int c) {
    if (actual_day == d)
        return a + b + c;
    int b2 = 3 * a + 2 * b;
    int a2 = c + a;
    int c2 = a + 2 * b + 4 * c;
    return daysbugs(actual_day + 1, a + a2, b + b2, c + c2);
}

int main() {
    int a;
    cin >> a >> d;
    cout << daysbugs(0, a, 0, 0) << endl;
    return 0;
}