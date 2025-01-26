#include <bits/stdc++.h>

using namespace std;

  void solve() {

    string s; cin >> s;

    string ans;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'c')ans.push_back('g');
        else if(s[i] == 'g')ans.push_back('c');
        else if(s[i] == 'a')ans.push_back('t');
        else if(s[i] == 't')ans.push_back('a');
    }

    cout << ans << "\n";
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
