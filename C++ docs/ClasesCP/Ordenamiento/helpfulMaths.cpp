#include <bits/stdc++.h>

using namespace std;

  void solve() {

    string s; cin >> s;
    vector<int> freq(4);

    for(int i = 0; i < s.size(); i += 2){
        freq[s[i] - '0']++; 
        
        //EJM: Si s[i] es '1' tomará su valor en el código ASCII que es 49, le restamos '0' cuyo valor es 48, dando como resultado un 1 en valores enteros, no como char.
    }
    string ans = "";
    for(int val = 1; val <= 3; val++){ //Iterar desde la frecuencia 1 hasta la 3
      for(int i = 0; i  < freq[val]; i++){ //Iterar sobre cuantas veces se repite un mismo número
          ans += char(val + '0'); //Ejm: val = 1, entonces sería 1 + 48 ('0') = 49 = '1'
          ans += '+';
      }
    }
    ans.pop_back();

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