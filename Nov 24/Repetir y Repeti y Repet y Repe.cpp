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
constexpr int MxN = 1e6 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void solve() {
    string s;
    int q;
    cin >> s >> q;
    while (q--) {
        ull x;
        cin >> x;
        ull l = 1, r = sz(s);
        if (x <= r) {
            cout << s[x - 1] << edl;
            continue;
        }
        ull anterior = 1;
        while(!(x >= l && x <= r)) {
            l = l ^ r;
            r = l ^ r;
            l = l ^ r;
            r = l + sz(s) - anterior;
            l++;
            anterior++;
        }
        ull ans = x - l;
        cout << s[ans] << edl;
    }
}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    // Fast I/O Setup
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}

// By KaarLarax