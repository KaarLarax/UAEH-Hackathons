// #pragma GCC optimize("Ofast,unroll-loops,no-stack-protector")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using ii = pair<int, int>;
using vii = vector<ii>;
using vvll = vector<vll>;

#define sz(x) int(x.size())
#define fi first
#define se second
#define pb emplace_back
#define edl '\n'
#define vsCode cout << flush, system("Pause")

constexpr long long LLINF = 2e18;
constexpr int INF = 2e9;
constexpr int MOD = 1e9 + 7;
constexpr int MxN = 1e3 + 5;
constexpr int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

struct pas {
    int fi, se, i;
    bool operator<(const pas& b) const {
        if (fi != b.fi) {
            return fi < b.fi;
        }

        if (se != b.se) {
            return se < b.se;
        }

        return i < b.i;
    }
};

void solve() {

    int n, m;
    cin >> n >> m;

    vector<pas> pass(n);
    vector<vi> bus(m, vector(4, -1));

    for (int i = 0; i < n; i++) {
        cin >> pass[i].fi >> pass[i].se;
        pass[i].i = i;
    }

    sort(pass.begin(), pass.end());

    vii ans(n);

    for (int i = 1; i <= 100; i++) {
        for (int j = 0; j < n; j++) {
            if (pass[j].se == i) {
                for (int k = 0; k < m; k++) {
                    if (bus[k][0] == j && bus[k][1] != -1) {
                        bus[k][0] = bus[k][1];
                        bus[k][1] = -1;
                    } else if (bus[k][3] == j && bus[k][2] != -1) {
                        bus[k][3] = bus[k][2];
                        bus[k][2] = -1;
                    } else {
                        for (int i = 0; i < 4; i++) {
                            if (bus[k][i] == j) {
                                bus[k][i] = -1;
                                break;
                            }
                        }
                    }
                }
            } else if (pass[j].fi == i) {
                ii pos = {-1, -1};
                for (int k = 0; k < m; k++) {
                    if (bus[k][0] == -1) {
                        bus[k][0] = j;
                        pos = {k, 0};
                        break;
                    } else if (bus[k][3] == -1) {
                        bus[k][3] = j;
                        pos = {k, 3};
                        break;
                    } else if (bus[k][1] == -1) {
                        bus[k][1] = j;
                        pos = {k, 1};
                        break;
                    } else if (bus[k][2] == -1) {
                        pos = {k, 2};
                        bus[k][2] = j;
                        break;
                    }
                }
                pos.fi++;
                pos.se++;
                ans[pass[j].i] = pos;
            }
        }
    }

    for (auto [i, j] : ans) {
        if (i == 0) {
            cout << -1 << edl;
        } else {
            cout << i << ' ' << j << edl;
        }
    }

}

int main() {
    // freopen("text.in", "r", stdin);
    // freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(nullptr); // Fast I/O Setup
    int q = 1;
    // cin >> q;
    while (q--) {
        solve();
    }
    // vsCode;
    return 0;
}
// By KaarLarax