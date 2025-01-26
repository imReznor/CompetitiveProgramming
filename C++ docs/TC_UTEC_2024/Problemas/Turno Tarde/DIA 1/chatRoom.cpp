#include <bits/stdc++.h>

using namespace std;

  void solve() {

    string s; cin >> s;
    string base = "hello";
    int j = 0;

    for(char c : s){
        if(j < s.size() && c ==base[j]){
            j++;
        }
    }
    string ans = (j == base.size() ? "YES" : "NO");
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