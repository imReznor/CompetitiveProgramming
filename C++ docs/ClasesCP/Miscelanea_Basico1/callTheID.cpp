#include <iostream>
#include <vector>
using namespace std;

  void solve() {
    int n; cin >> n;
    vector<int>a(n + 1);
    
    for (int i = 1; i <= n; i++) cin >> a[i];
    vector<bool>called(n + 1, false);


    for(int i = 1; i <= n; i++){
      if(called[i])continue;
      called[a[i]] = true;
    }

    vector<int>ans;
    for(int i = 1; i <= n; i++){
      if(called[i] == false){
        ans.push_back(i);
      }
    }

    cout << (int) ans.size() << "\n";
    for(int x : ans) cout << x << " ";

    
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
