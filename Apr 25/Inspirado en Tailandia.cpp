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
int matrix[10][10];
int p, k;

bool completo(vector<vector<bool>> recorrido) {
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < k; ++j) {
            if (!recorrido[i][j]) {
                return false;
            }
        }
    }
    return true;
}

pair<int, bool> dfs(int n, int m, int anterior, vector<vector<bool>> recorrido) {
    if (n < 0 || n >= p || m < 0 || m >= k) {
        return {-1, false};
    }
    recorrido[n][m] = true;
    anterior <<= 1;
    if (matrix[n][m]) {
        anterior += 1;
    }
    int maxi = 0;
    int boolmaxi = completo(recorrido);
    if (completo(recorrido)) {
        maxi = max(anterior, maxi);
    }
    for (int i = 0; i < 4; ++i) {
        int n1 = n + dx[i];
        int m1 = m + dy[i];
        if (n1 < 0 || n1 >= p || m1 < 0 || m1 >= k) {
            continue;
        }
        if (!recorrido[n1][m1]) {
            pair<int, bool> temp = dfs(n1, m1, anterior, recorrido);
            if (temp.se) {
                if (temp.first > maxi) {
                    maxi = max(temp.fi, maxi);
                    boolmaxi = temp.second;
                }
            }
        }
    }
    return {maxi, boolmaxi};
}

void solve() {
    cin >> p >> k;
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < k; ++j) {
            cin >> matrix[i][j];
        }
    }
    vector<vector<bool>> recorrido(p, vector<bool>(k, false));
    int maxi = 0;
    for (int i = 0; i < p; ++i) {
        for (int j = 0; j < k; ++j) {
            maxi = max(dfs(i, j, 0, recorrido).first, maxi);
        }
    }
    cout << maxi << edl;
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