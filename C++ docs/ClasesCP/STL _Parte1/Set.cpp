#include <iostream>
#include <set>
using namespace std;

  void solve() {

    set<int> st;
    st.insert(2);
    st.insert(2);
    st.insert(2);


    cout << st.size() << "\n";


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
