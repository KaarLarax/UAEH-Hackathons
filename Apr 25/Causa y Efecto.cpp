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
    int t, k;
    cin >> t >> k;
    for (int i = 1; i <= 5; ++i) {
        cout << "Iniciando prueba " << i << " en modo " << (t % 2 == 0? "par" : "impar") << edl;
        cout << "Tiempo actual " << t << " minutos" << edl;
        if (t > 50) {
            cout << "Advertencia: tiempo inestable" << edl;
            cout << "Ejecutando formula de recorte" << edl;
            t -= 10;
        } else {
            cout << "Rango de tiempo moderado" << edl;
            cout << "Ejecutando formula de regresion" << edl;
            t += 15;
        }
        cout << "Nuevo tiempo " << t << " minutos" << edl;
        cout << edl;
        if (t == k) {
            cout << "Prueba exitosa" << edl;
            return;
        }
    }
    cout << "Prueba fallida" << edl;
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