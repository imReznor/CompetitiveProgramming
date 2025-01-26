  #include <iostream>
  #include <vector>
  #include <set>
    using namespace std;

    void solve() {

      int n; cin >> n;
      vector<int> a(n);
      for(int&x : a) cin >> x;

      int ans = 0;

      set<int> st;
      for(int i = n - 1; i >= 0; i--){
        if(st.count(a[i])) {
          ans = i + 1;
          break;
        }
        st.insert(a[i]);
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
