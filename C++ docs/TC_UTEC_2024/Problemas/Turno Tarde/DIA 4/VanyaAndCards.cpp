#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;

#ifdef LOCAL
#include "../../../debug/debug.cpp"
#else
#define dbg(...)
#endif

const int MAXN=100100;

using namespace std;

const long long MOD = 1e8 + 7;



  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t; cin >> t;

      while (t--) {
          int a,b; 
          multimap<int,int> mp;
          while(cin >> a >> b){
            mp.insert({a,b});
          }

          dbg(mp);
      }
      return 0;
  }