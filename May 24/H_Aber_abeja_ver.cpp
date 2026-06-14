// BY LARA 1424

#include <bits/stdc++.h>
#define pb emplace_back
#define sz(x) int(x.size())
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define trace(x) cerr << #x << " = " << x << '\n'
#define edl '\n'

using namespace std;
using ll = long long;

const array dx{1, 0, -1, 0};
const array dy{0, 1, 0, -1};
template<class T> bool chmax(T& A, T&& B) { return B > A? A = B, true : false; }
template<class T> bool chmin(T& A, T&& B) { return B < A? A = B, true : false; }

const int64_t DESPACITO = 2e18;
const int INF = 2e9, MOD = 1e9+7;
const int MxN = 2e5 + 5;
int cubeta[1000004];
int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int n;
    cin >> n;
    char arr[n+1][n+1];
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cin >> arr[i][j];
        }
    }
    bool band = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == j || i + j == n + 1) {
                band = arr[i][j] == arr[1][1];
                if (!band) {
                    cout << "NO" << edl;
                    return 0;
                }
            }
        }
    }
    cout << "YES" << edl;
    return 0;
}