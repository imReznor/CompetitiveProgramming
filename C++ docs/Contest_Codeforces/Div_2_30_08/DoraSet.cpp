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

void solve() {
    
     int l, r; cin >> l >> r;
     int n = r - l + 1;
     int ans = n/4;

     for(int i = l + ans * 4; i <= r - 2; i++){
          if(gcd(i,i+1) == 1 && gcd(i+1,i+2) == 1 
                    && gcd(i,i+2)==1){
               ans++;
               break;
          }
     }

     cout << ans << "\n";

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
