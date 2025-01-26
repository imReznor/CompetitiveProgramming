#include <bits/stdc++.h>

using namespace std;

  void solve() {

    int n; cin >> n;
    int ans = 0;

    n = abs(n);

    while(n > 0){
        ans += n % 10;
        n = n/10;
    }   

    cout << ans << "\n";
 
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