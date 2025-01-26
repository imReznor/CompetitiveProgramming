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
     int ans = 0; 

     while(n--){

     vector<int> v(3);

     forr(i,0,3) cin >> v[i];

     int rep = count(v.begin(), v.end(), 1);
        
          
      if(rep >= 2){
          ans++;
     }
     

     }
    
    cout << ans << "\n";
 
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=1;
    //cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
