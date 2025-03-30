#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    string ifs = str.substr(0, str.find('?'));
    string str1 = str.substr(str.find('?') + 1, str.find(':') - 1 - str.find('?'));
    string str2 = str.substr(str.find(':') + 1, str.find(';') - 1 - str.find(':'));
    printf("if(%s)\n", ifs.c_str());
    printf("     %s;\n", str1.c_str());
    cout << "else" << endl;
    printf("     %s;\n", str2.c_str());
    return 0;
}