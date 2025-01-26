#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

const int MAXN=100100;

using namespace std;
const long long MOD = 1e8 + 7;

void solve() {
    ll n; cin >> n;
    vector<ll> v(n);

    for(ll &x : v) cin >> x;

    ll maxCurrent = v[0];
    ll maxGlobal = v[0];

    forr(i,1,n){
         maxCurrent = max(v[i],v[i]+maxCurrent);

         if (maxCurrent > maxGlobal){
              maxGlobal = maxCurrent;
         }
    }

    cout << maxGlobal << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
