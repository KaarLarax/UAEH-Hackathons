#include <bits/stdc++.h>
using namespace std;
bool ispal(const string& );

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string str;
    for (int i = 0; i < n; ++i) {
        getline(cin, str);
        cout << (ispal(str)? "SI" : "NO") << '\n';
    }
    return 0;
}

bool ispal(const string& x) {
    stack<char> p;
    queue<char> c;
    bool band = true;
    for (const char i: x)
        if (isalpha(i)) {
            p.push((char) tolower(i));
            c.push((char) tolower(i));
        }
    int z = (int) c.size();
    for (int i = 0; i < z; ++i) {
        if (c.front() == p.top()) {
            c.pop();
            p.pop();
        } else {
            band = false;
            break;
        }
    }
    return band;
}