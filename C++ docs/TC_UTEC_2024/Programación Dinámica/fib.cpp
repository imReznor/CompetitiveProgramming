#include <bits/stdc++.h>

using namespace std;

  int fib[100];
  int calcFib(int n){
    if(fib[n] != -1){
        return fib[n];
    }else{
        fib[n] = calcFib(n-2)+ calcFib(n - 1);
        return fib[n];
    }
  }

  void solve() {
    int fibans;

    for (int i = 0; i < 100; i++){

        fib[i] = -1;
        fib[0] = 0;
        fib[1] = 1;

        int fibans = calcFib(10);
        
    }

    cout << fibans;
    
    
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