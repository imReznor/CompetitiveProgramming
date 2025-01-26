#include <iostream>
#include <stack>

using namespace std;

  void solve() {
  
    string s; cin >> s;
    stack<char>pila;

    for(int i = 0; i < s.size(); i++){
      if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
        pila.push(s[i]);
      }else{
        if(pila.empty()){
          cout << "NO\n"; return;
        }
        if(s[i] == ')' && pila.top() == '('){
          pila.pop();
        }else if(s[i] == ']' && pila.top() == '['){
          pila.pop();
        }else if (s[i] == '}' && pila.top() == '{'){
          pila.pop();
        }else{
          cout << "NO\n"; return;
        }
      } 
    }

    if(pila.empty()){
      cout << "YES\n";
    }else{
      cout << "NO\n";
    }
    

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
