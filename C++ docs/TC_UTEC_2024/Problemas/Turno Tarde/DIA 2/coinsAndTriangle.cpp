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

  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t;cin >> t;

      while (t--) {
          int N; cin >> N;
          int k = 0;

          while(N >= k){
            N -=k;
            k++;
          }

          cout << (k - 1) << "\n";  
      }

      return 0;
  }
