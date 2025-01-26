#include <bits/stdc++.h>

using namespace std;

  void solve() {

    long long n,m,a; cin >> n >> m >> a;

    long long x = (n%a != 0 ? ((n/a)+1) : (n/a));
    long long y = (m%a != 0 ? ((m/a)+1) : (m/a));
    
    long long ans = x*y;

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