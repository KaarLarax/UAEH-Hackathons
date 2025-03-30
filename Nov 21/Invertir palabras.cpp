#include <iostream>
#include <sstream>
#include <stack>
using namespace std;

int main() {
    string prase;
    getline(cin, prase);
    string word;
    stringstream ss(prase);
    stack<string> invert_prase;
    while (ss >> word) {
        invert_prase.push(word);
    }
    while (!invert_prase.empty()) {
        cout << invert_prase.top() << ' ';
        invert_prase.pop();
    }
    cout << endl;
    return 0;
}