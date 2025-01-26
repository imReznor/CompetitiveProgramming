#include <iostream>

using namespace std;

   void solve() {
     
     int n, k; cin >> n >> k;

     if (k == (4 * n) - 2) cout << 2 * n << "\n";
     else if (k == (4 * n) - 3) cout << (2 * n) - 1 << "\n";
     else cout << (k + 1) / 2 << "\n";
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

