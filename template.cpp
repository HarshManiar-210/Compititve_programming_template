#include <bits/stdc++.h>
using namespace std;

// -----------------------------
//       MACROS & TYPEDEFS
// -----------------------------
#define int long long
#define endl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define fastio() ios::sync_with_stdio(false); cin.tie(nullptr)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;

// -----------------------------
//       VECTOR I/O MACROS
// -----------------------------
#define vin(v) for (auto &x : v) cin >> x
#define vout(v) for (size_t i = 0; i < v.size(); i++) cout << v[i] << (i + 1 == v.size() ? "" : " "); cout << endl

// Or, alternatively, operator overloads (cleaner!):
template<typename T>
istream& operator>>(istream& in, vector<T>& v) {
    for (auto &x : v) in >> x;
    return in;
}
template<typename T>
ostream& operator<<(ostream& out, const vector<T>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        out << v[i] << (i + 1 == v.size() ? "" : " ");
    }
    return out;
}

// -----------------------------
//       DEBUGGING UTILS
// -----------------------------
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " = " << (x) << endl
#else
#define debug(x)
#endif

// -----------------------------
//       CONSTANTS
// -----------------------------
const int INF = 1e18;
const int MOD = 1e9 + 7;

// -----------------------------
//       SOLVE FUNCTION
// -----------------------------
void solve() {
    int n;
    cin >> n;
    vi vec(n);
    cin >> vec;            // ✅ works directly
    sort(all(vec));
    cout << vec << endl;   // ✅ prints with spaces
}

// -----------------------------
//       MAIN FUNCTION
// -----------------------------
int32_t main() {
    fastio();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
