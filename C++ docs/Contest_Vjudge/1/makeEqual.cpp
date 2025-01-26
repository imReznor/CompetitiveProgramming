#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

#ifdef LOCAL
#include "../debug/debug.cpp"
#else
#define dbg(...)
#endif

const int MAXN=100100;

using namespace std;
const long long MOD = 1e8 + 7;

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    ll sumaT = 0;

    forr(i,0,n){
         cin >> v[i];
         sumaT += v[i];
    }

    if(sumaT % n != 0){
         cout << "NO" << "\n";
         return;
    }

    ll sumaEsp = sumaT/n;

    ll excess = 0;

    forr(i,0,n){
         if(v[i] > sumaEsp){
              excess += (v[i] - sumaEsp);
         }else if(v[i] < sumaEsp){
              if(excess < (sumaEsp - v[i])){
                   cout << "NO" << "\n";
                   return;
              }                   
              excess -= (sumaEsp - v[i]);
              
         }
    }

    cout << "YES" << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
