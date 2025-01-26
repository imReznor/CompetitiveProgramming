#include <bits/stdc++.h>

using namespace std;

  void solve() {

    string s; cin >> s;
    string::iterator inicio = s.begin();
    string ::iterator fin = s.end()-1;

    if(s.size() > 10){
        int cant = 0;
        for(int i = 1; i < s.size()-1; i++){
            cant++;
        }

    cout << *inicio << cant << *fin << "\n";
    }else{
        cout << s << "\n";
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
