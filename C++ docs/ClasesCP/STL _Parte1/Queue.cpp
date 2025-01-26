#include <iostream>
#include <queue>

using namespace std;

void solve() {
  queue<int> q;

  cout << q.size() << "\n";
  for(int i = 0; i < 10; i++){
    q.push(i);
  }

  cout<< q.front() << "\n";
  cout<< q.back() << "\n";

  q.pop(); //ELIMINA EL PRIMER ELEMENTO

  cout<< "============"<<"\n";

  cout<< q.front() << "\n";
  cout<< q.back() << "\n";

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
