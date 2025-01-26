#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

typedef long long ll;

const int MAXN=100100;

using namespace std;

const long long MOD = 1e8 + 7;


  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);

      int n; cin >> n;
      vector<int> v(n);

      for(auto &el : v) cin >> el;

      int t; cin >> t;

      while (t--) {
        int x,y; cin >> x >> y;

        int sum = 0;

        for(int i = x; i <= y; i++){
            sum += v[i];
        }

        if(x != y) cout << sum << "\n";
        else cout << v[x]<< "\n";
        
      }
      return 0;
  }
