#include <bits/stdc++.h>
#define all(a) (a).begin(), (a).end()


using namespace std;

  void solve() {

    vector<int> v((istream_iterator<int>(cin)), istream_iterator<int>());
    sort(all(v));

    int cant = v.size();
    int last = v[cant - 1];
    int ans = last - cant;

    cout << ans;
    
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