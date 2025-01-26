#include <bits/stdc++.h>

using namespace std;

  void solve() {
    
    long long n; cin >> n;

    if(0 < n && n < 1199){
        cout << "Plomo\n";
    }else if (1200 <= n && n < 1499){
        cout << "Verde\n";
    }else if (1500 <= n && n < 1899){
        cout << "Azul\n";
    }else if (1900 <= n && n < 2199){
        cout << "Amarillo\n";
    }else if (2200 <= n){
        cout << "Rojo\n";
    }
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
