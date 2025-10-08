#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(const string &);

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        string expression;
        cin >> expression;
        cout << (isBalanced(expression) ? "SI" : "NO") << endl;
    }
    return 0;
}

bool isBalanced(const string &expression) {
    stack<char> s;
    for (char c: expression) {
        if (c == '(' || c == '[' || c == '{') {
            s.push(c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (s.empty() ||
                (c == ')' && s.top() != '(') ||
                (c == ']' && s.top() != '[') ||
                (c == '}' && s.top() != '{')) {
                return false;
            }
            s.pop();
        }
    }
    return s.empty();
}