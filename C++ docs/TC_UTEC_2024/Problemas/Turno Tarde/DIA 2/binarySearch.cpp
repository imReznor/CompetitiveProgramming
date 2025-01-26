#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

const int MAXN=100100;

using namespace std;

const long long MOD = 1e8 + 7;

  int bs(vector<int> v, int x){
    int n = v.size();
    int a = -1;
    int b = n;

    while(b - a > 1){
        int c = (a + b);
        if(v[c] >= x){
            b = c;
        }else{
            a = c;
        }
    }

    if(b < n && v[b] == x) return b;
    else return -1;
  }


  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int n; cin >> n;
      int t; cin >> t;
      
      vector<int> v(n);
      for(auto &el:v) cin >> el;

      while (t--) {
        int x; cin >> x;
        cout << bs(v,x) << "\n"; 
      }
      return 0;
  }