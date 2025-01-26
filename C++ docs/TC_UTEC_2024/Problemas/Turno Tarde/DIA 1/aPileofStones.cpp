#include <bits/stdc++.h>

using namespace std;

  void solve() {

    int n; cin >> n;
    string s; cin >> s;
    int ans= 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+') ans++;
        else if(s[i] == '-') ans = max(ans-1,0);
    }
    cout << ans;
    
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