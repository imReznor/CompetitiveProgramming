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

  void solve() {

    int n,a,b,c; 
    cin >> n >> a >> b >> c;

    vector<int> dp(n + 1, -1);
    dp[0] = 0;  

    for(int i=1; i <= n; i++){
        if(i - a >= 0 && dp[i - a] != -1) dp[i] = max(dp[i], dp[i - a] + 1);
        if(i - b >= 0 && dp[i - b] != -1) dp[i] = max(dp[i], dp[i - b] + 1);
        if(i - c >= 0 && dp[i - c] != -1) dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << "\n";
    
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