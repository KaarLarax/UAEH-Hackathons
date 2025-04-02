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
    int n;
    cin >> n;
    string str, str2;
    cin >> str;
    str2 = str;
    for (int j = 1; j <= n - 1; j++) {
        if (j & 1) {
            bool band = false;
            for (int i = 0; i < size(str2) - 1; ++i) {
                if (str2[i] == '^' || str2[i + 1] == '^') {
                    continue;
                }
                if (str2[i] == '1' || str2[i + 1] == '1') {
                    str2.insert(str2.begin() + (i + 1), '^');
                    band = true;
                    break;
                }
            }
            if (!band) {
                for (int i = 0; i < size(str2) - 1; ++i) {
                    if (str2[i] == '^' || str2[i + 1] == '^') {
                        continue;
                    }
                    str2.insert(str2.begin() + (i + 1), '^');
                    break;
                }
            }
        } else {
            bool band = false;
            for (int i = 0; i < size(str2) - 1; ++i) {
                if (str2[i] == '^' || str2[i + 1] == '^') {
                    continue;
                }
                if ((str2[i] == '0' && str2[i + 1] == '1') || (str2[i] == '1' && str2[i + 1] == '0')) {
                    str2.erase(str2.begin() + i, str2.begin() + i + 2);
                    str2.insert(str2.begin() + i, '0');
                    band = true;
                    break;
                }
            }
            if (!band) {
                for (int i = 0; i < size(str2) - 1; ++i) {
                    if (str2[i] == '^' || str2[i + 1] == '^') {
                        continue;
                    }
                    string temp = to_string(((str2[i] - '0') & (str2[i + 1] - '0')));
                    str2.erase(str2.begin() + i, str2.begin() + i + 2);
                    str2.insert(str2.begin() + i, temp[0]);
                    break;
                }
            }
        }
    }
    for (int i = 0; i < ceil((float) (n - 1) / 2.00); ++i) {
        for (int i = 1; i < size(str2) - 1; ++i) {
            if (str2[i] == '^') {
                string temp = to_string(((str2[i - 1] - '0') | (str2[i + 1] - '0')));
                str2.erase(str2.begin() + i - 1, str2.begin() + i + 2);
                str2.insert(str2.begin() + i - 1, temp[0]);
                break;
            }
        }
    }

    cout << (str2[0] == '1'? "Maullin": "Benito") << edl;
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