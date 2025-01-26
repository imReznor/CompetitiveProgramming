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
const long long N = 5e5+5;

int a[N];

  int main() {
	  	
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      a[0] = a[1] = 1;
      for(int i = 2; i < N; i++) a[i] = (a[i - 1] + a[i - 2]) % MOD;

      int t; cin >> t;
      while (t--) {
          int n; cin >> n;
          cout << a[n - 1] << "\n";
      }
      return 0;
  }
