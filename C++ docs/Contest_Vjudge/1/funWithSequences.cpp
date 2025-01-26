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
    
     int n; cin >> n;
     vector<int> v1(n);
     forr(i,0,n) cin >> v1[i];

     int m; cin >> m;
     vector<int> v2(m);
     forr(i,0,m) cin >> v2[i];


     vector<int> ans;
     for(int i = 0; i < n; i++){
          for(int j = 0; j < m; j++){
               if(v2[j] == v1[i]){
                    ans.pb(v2[j]);
               }
          }
     }

     forr(i,0,sz(ans)) cout << ans[i] << " ";

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
