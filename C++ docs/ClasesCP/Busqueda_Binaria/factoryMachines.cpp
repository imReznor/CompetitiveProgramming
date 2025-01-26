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
     
     int n; cin >> n; 
     ll t; cin >> t;

     vector<int>v(n);
     forr(i,0,n) cin >> v[i];

     auto check = [&](ll total_time){
          ll cnt = 0;
          forr(i,0,n){
               cnt += (total_time/v[i]);
               if (cnt >= t) return true;
          }

          return false;     
     };

     ll low = 0; ll high = 1e18 + 100;
     
     while (low < high) {
          ll mid = (high - low)/2 + low;
          if(check(mid)) high = mid;
          else low = mid + 1;
     }

     cout << low << "\n";
     

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
