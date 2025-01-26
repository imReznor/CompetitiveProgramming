#include <bits/stdc++.h>

using namespace std;

  void solve() {

    int n; cin >> n;
    int sum; cin >> sum;

    vector<int> values(n);
    for(int& x : values) cin >> x;

    map<int,int> mp;

    for (int i = 0; i < n; i++){
         int need = sum - values[i];
         if(mp.count(need)){
            cout << mp[need] + 1 << ' ' << i + 1 << '\n';
            
            return;
         }
         mp[values[i]] = i;
        
    }
    

    cout << "IMPOSSIBLE";
    
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
