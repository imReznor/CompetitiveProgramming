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
    int p = 0;
    int u = n - 1;

    while(p <= u){
        int m = (p + u)/2;

        if(v[m] < x){
            p = m + 1;
        }else if(v[m] == x){
            return m;
        }else{
            u = m - 1;
        }
    } 

    if(p > u) return -1;
    
    }


  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int n,t; cin >> n >> t;
      vector<int> v(n);
      for(auto &el : v) cin >> el;

      while (t--) {
          int x; cin >> x;
          cout << bs(v,x) << "\n";
      }
      return 0;
  }