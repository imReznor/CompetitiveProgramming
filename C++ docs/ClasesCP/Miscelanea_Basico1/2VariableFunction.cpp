#include <iostream>

    using namespace std;

    const int MXN = 10;

    void solve() {

      int ans = 1e9;
      int n; cin >> n;
      for(int a = 0; a < MXN; a++){
        int opt = -1;
        for(int b = 0; b < MXN; b++){
          int val = (a + b) * (a * a + b * b);
          if(val >= n){
            opt = b;
            break;
          }
        }

        int x = (a + opt) * ( a * a + opt * opt);
        ans = min(ans,x);
      }

      cout << ans << "\n";

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
