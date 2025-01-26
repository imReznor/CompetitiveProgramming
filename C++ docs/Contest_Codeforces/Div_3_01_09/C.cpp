#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

const int MAXN=100100;

#ifdef LOCAL
#include "../debug/debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
const long long MOD = 1e8 + 7;

void solve() {
    
     int l,r; cin >> l >> r;
     vector<int> v;
     
     int current = l;
     int diff= 1;

     while (current + diff <= r){
          v.pb(current);
          current += diff;
          diff++;
     }

     v.pb(r);

     cout << sz(v) << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
