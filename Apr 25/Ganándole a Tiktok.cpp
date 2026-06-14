#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<ll>;

#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 2e5 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

string suma(string a, string b) {
    string nueva(sz(a), '0');

    string porsi = "0";
    for (int i = sz(a) - 1; i >= 0; --i) {
        int paso = 0;
        int as = a[i] - '0';
        int bs = b[i] - '0';
        int temp = nueva[i] - '0';
        if ((as + bs + temp) / 10 > 0) {
            paso = (as + bs + temp) / 10;
        }
        int value = (as + bs + temp) % 10;
        nueva[i] = value + '0';
        if (i == 0 && paso > 0) {
            porsi[0] = paso + '0';
            porsi += nueva;
        } else if (i == 0) {
            porsi = nueva;
        } else if (paso > 0){
            nueva[i - 1] = paso + '0';
        }
    }
    return porsi;
}
bool isPal(string s) {
    string temp = s;
    std::reverse(s.begin(), s.end());
    return s == temp;
}

vector<int> ans = {196, 295, 394, 493, 592, 689, 691, 788, 790, 879, 887, 978,
                   986, 1495, 1497, 1585, 1587, 1675, 1677, 1765, 1767, 1855,
                      1857, 1945, 1947, 1997};
void solve() {
    string str;
    cin >> str;

    if (stoi(str) - *lower_bound(ans.begin(), ans.end(), stoi(str)) == 0) {
        cout << -1 << edl;
        return;
    }

    while(str.size() <= 5000) {
        if (isPal(str)) {
            cout << str << edl;
            return;
        }
        string str2 = str;
        reverse(str2.begin(), str2.end());
        str = suma(str, str2);
    }

}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    // Fast I/O Setup
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int q = 1;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
// By KaarLarax