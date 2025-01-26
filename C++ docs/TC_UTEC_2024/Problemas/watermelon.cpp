#include <bits/stdc++.h>

using namespace std;

  void solve() {
    
    int w; cin >> w;

    int a = w - 2;
    if(w > 2 && a % 2 == 0) cout << "YES";
    else {
        cout << "NO";
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
