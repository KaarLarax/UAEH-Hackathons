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

void solve() {
    int n;
    cin >> n;
    string arr[10], ans[n];
    arr[0] = {'a', 'b', 'c', 'd', 'e', 'f'};
    arr[1] = {'b', 'c'};
    arr[2] = {'a', 'b', 'g', 'd', 'e'};
    arr[3] = {'a', 'b', 'g', 'c', 'd'};
    arr[4] = {'f', 'g', 'b', 'c'};
    arr[5] = {'a', 'f', 'g', 'c', 'd'};
    arr[6] = {'a', 'c', 'd', 'e', 'f', 'g'};
    arr[7] = {'a', 'b', 'c'};
    arr[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    arr[9] = {'a', 'b', 'c', 'd', 'f', 'g'};
    int targets[n];
    for (int i = 0; i < n; ++i) {
        cin >> targets[i];
    }
    string values;
    for (int i = 0; i < n; ++i) {
        cin >> values;
        for (int j = 0; j < sz(values); ++j) {
            ans[i]+=values[j];
        }
    }
    for (int i = 0; i < n; ++i) {
        std::sort(ans[i].begin(), ans[i].end());
        std::sort(arr[targets[i]].begin(), arr[targets[i]].end());
        if (ans[i] == arr[targets[i]]) {
            cout << "BIEN" << edl;
        } else {
            cout << "MAL" << edl;
        }
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