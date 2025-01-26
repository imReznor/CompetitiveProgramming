#include <iostream>
#include <set>
    using namespace std;

    void solve() {
      
      int n; cin >> n;
      string s; cin >> s;

      int x = 0; int y = 0;
      set<pair<int,int>> coord;

      coord.insert({0, 0});

      for(char c : s){
        if(c == 'R') x++;
        if(c == 'L') x--;
        if(c == 'U') y++;
        if(c == 'D') y--;

        if(coord.count({x, y})){
          cout << "Yes";
          return;

        }
        coord.insert({x, y});
      }
      cout<<"No";

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
