#include <bits/stdc++.h>

using namespace std;

  void solve() {

    string s; cin >> s;
    string::iterator inicio = s.begin();
    
    string rs = s.substr(1);
    string comb = rs + *inicio + "secret";
    comb[0] = toupper(comb[0]);
    for(int i = 1; i < comb.size(); i++) comb[i]=tolower(comb[i]);

    cout << comb << "\n";
    
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