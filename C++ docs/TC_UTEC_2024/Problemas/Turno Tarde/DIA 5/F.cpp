#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

#ifdef LOCAL
#include "../../../debug/debug.cpp"
#else
#define dbg(...)
#endif

typedef long long ll;

const int MAXN=100100;

using namespace std;

const long long MOD = 1e8 + 7;

//  void cambio(string &s, int pos, char x){
//     if(pos >= 0 && pos < s.size()){
//       s[pos] = x;
//     }
// }


  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      string s; cin >> s;
      int t; cin >> t;


      while (t--) {
        int c; cin >> c;

        if(c == 1){

          int v1;
          char v2; 
          cin >> v1 >> v2;

          if(v1 - 1 >= 0 && v1 - 1 < s.size()){
            s[v1 - 1] = v2;
          }
    
      
        }else if(c == 2){

          int v1,v3; cin >> v1 >> v3;
          set<char> st;


          forr(i,v1 - 1,v3){
            if(i >= 0 && i < s.size()){
              st.insert(s[i]);
            }
          } 
        cout << st.size() << "\n";
        st.clear();
        }
  }
  return 0;


  }