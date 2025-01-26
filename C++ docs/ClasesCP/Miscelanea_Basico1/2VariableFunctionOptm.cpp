#include <iostream>

using namespace std;

    const int MXN = 1e6 + 3;

    void solve() {

      long long ans = 1e18 + 100;
      long long n; cin >> n;
      for(int a = 0; a < MXN; a++){
       
        int low = 0;
        int high = 1e6 + 2;

        while(low < high){
          int mid = (low + high) / 2;
          long long f = 1LL *(a + mid) * 
            (1LL * a * a + 1LL * mid * mid);

          if(f >= n) high = mid;
          else low = mid + 1;
          
      }
        int b = low;
        
        long long x = 1LL * (a + b) * (1LL * a * a + 1LL * b * b);
        ans = min(ans, x);
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
