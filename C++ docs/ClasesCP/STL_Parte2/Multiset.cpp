#include <bits/stdc++.h>

using namespace std;

  void solve() {

    //MULTISET: Árbol que acepta valores repetidos

    multiset<int> ms;
    ms.insert(102);
    ms.insert(32);
    ms.insert(659);
    ms.insert(659);

    cout << ms.size()<< "\n";
    cout << ms.count(659) << "\n";

    //ms.erase(659);
    //Elimina todos los elementos 659 al todos tener la misma clave

    //Eliminación por iterador
    
    ms.erase(ms.find(659));

    cout << ms.size() << "\n";

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