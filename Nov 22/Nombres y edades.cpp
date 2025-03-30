#include <iostream>
#include <algorithm>

using namespace std;

struct person {
    string name;
    int age{};
};
int main() {
    int n, d;
    cin >> n >> d;
    person personas[n];
    for (person &p: personas) {
        cin >> p.name;
        cin >> p.age;
    }
    if (d == 1) {
        for (int j = 0; j < n; j ++) {
            for (int i = 0; i < n - 1; ++i) {
                if (personas[i].name > personas[i + 1].name) {
                    swap(personas[i], personas[i + 1]);
                }
            }
        }
    } else {
        for (int j = 0; j < n; j ++) {
            for (int i = 0; i < n - 1; ++i) {
                if (personas[i].age > personas[i + 1].age) {
                    swap(personas[i], personas[i + 1]);
                }
            }
        }
    }
    for (person &x: personas) {
        cout << x.name << ' ' << x.age << endl;
    }
    return 0;
}