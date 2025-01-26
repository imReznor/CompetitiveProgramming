#include <iostream>
#include <stack>

using namespace std;

void solve() {
  stack<int> s;

  if(s.empty()) cout << "Vacio" << "\n";

  for(int i = 1; i <=10; i++){
    s.push(i);
  }

  cout << s.top() << "\n";

  s.pop();
  cout << "================" << "\n";

  cout << s.top() << "\n";

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
