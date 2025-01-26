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

  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      int n; cin >> n;
      vector<int>v(n);

      forr(i,0,n) cin >> v[i];
     
      int t; cin >> t;

      while (t--) {
          int op; cin >> op;

          if(op == 1){
            int l,r; cin >> l >> r;
            int sum =0;

            forr(i,l - 1, r){
                sum += v[i];
            }

            cout << sum << "\n";
            sum = 0;


          }else if(op == 2){

            int x; cin >> x;
            v.insert(v.begin(),x); 
          }
      }
      return 0;
  }