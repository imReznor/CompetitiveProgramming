#include <bits/stdc++.h>

using namespace std;

  void solve() {

    map <int,int> mp;

    mp[1]=2;
    mp[2]=4;
    mp[3]=6;

    cout << mp.size() << "\n";

    for(pair<int,int> p : mp){
        cout << "Clave: " << p.first << ", Valor: " << p.second << "\n";
    }

    cout << "======RECORRIDO POR ITERADOR=======" << "\n";

    for(map<int,int>::iterator it = mp.begin(); it != mp.end(); ++it){
        cout << "Clave: " << it->first << ", Valor: " << it->second << "\n";
    }

    cout << "=================" << "\n";

    cout << mp[1] << "\n";
    map<int,int>::iterator it = mp.find(2);
    if(it != mp.end()) cout << it->first << " " << it->second << "\n";
    else cout << "Valor no existe";

    cout << "==================" << "\n";

    map<int,int>::iterator inicio = mp.begin();
    cout << inicio->first << " " << inicio->second << "\n";
    
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