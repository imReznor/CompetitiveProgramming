#include <bits/stdc++.h>

using namespace std;

  void solve() {

    int n; cin >> n;

    map<string,int> mp;

    for(int i = 0; i < n; i++){
        string user; cin >> user;

        if(mp.count(user) == 0) cout << "OK\n";
        else {
            cout << user << mp[user] << '\n';
        }
        mp[user]++;
    }
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