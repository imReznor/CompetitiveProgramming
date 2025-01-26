
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
    vector<string> cadenas(n);
    forr(i,0,n) cin >> cadenas[i];

    for(int i = n - 1; i >= 0; i--){
         forr(j,0,4){
              if(cadenas[i][j] == '#'){
                   cout << j + 1 << " ";
                   break;
              }
         }
         
    }
    cout << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
