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



int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int a, b;
    cin >> a;
    int arr[a];
    for (int i = 0; i < a; ++i) {
        cin >> arr[i];
    }
    cin >> b;
    for (int i = 0; i < a; ++i) {
        if (arr[i] >= b - 3 && arr[i] <= b+3) {
            cout << arr[i] << ' ';
        }
    }
    return 0;
}