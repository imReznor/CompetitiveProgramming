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

     int n, k; cin >> n >> k;
     vector<int> v(n);
     forr(i,0,n) cin >> v[i];

     auto check = [&] (ll limit){
          ll sum = 0;
          int part = 0;
          forr(i,0,n){
               if(v[i] > limit) return false;
               if(sum + v[i] <= limit){
                    sum += v[i];
               }else{
                    part++;
                    sum = v[i];
               }
          }
          part++;
          if(part <= k) return true;
          else return false;

     };

     ll low = 0; ll high = 1e15;
     while(low < high){
          ll mid = (low + high)/2;
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
