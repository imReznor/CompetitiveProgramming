#include <iostream>
#include <deque>

using namespace std;

  void solve() {
    deque<int> dq;

    for(int i = 1; i <= 10; i++){
      dq.push_back(i);
    }

    for(int element : dq){
      cout << element << "\n";
    }

    cout << "=======================" << "\n";

    dq.push_front(34);
    dq.push_front(21);
    dq.push_front(76);
        
    for(int element : dq){
      cout << element << "\n";
    }

    dq.pop_front();
    dq.pop_back();
    
    cout << "=======================" << "\n";

    for(int element : dq){
      cout << element << "\n";
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
