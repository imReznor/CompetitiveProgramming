#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

#define all(a) (a).begin(), (a).end()

const int MAXN=100100;

using namespace std;

const long long MOD = 1e8 + 7;

  void solve() {

    int n; cin >> n;
    vector<int> v(n);
    for(auto &el: v) cin >> el;
    sort(all(v));
    
    int q; cin >> q; 
    while(q--){
        int y; cin >> y;
        auto r = upper_bound(all(v),y);
        int ans = r - v.begin();
        cout << ans << "\n";
    }    
    
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
