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
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    int maxL = 0;
    int currentL = 0;

    forr(i,0,n){
    
         if(v[i] == 0){
              currentL++;
         }else{
              maxL = max(currentL, maxL);
              currentL = 0;
         }

     }

     maxL = max(currentL, maxL);
     cout << maxL<< "\n";

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
