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
    int x,y,k; cin >> x >> y >> k;

    int ans = 0;
    int cx = 0;
    int cy = 0;

    while (cx < x || cy < y){
         if(ans % 2 == 0){
              int sx = min(k, x - cx);
              cx += sx;
         }else{
              int sy = min(k, y - cy);
              cy += sy;
         }
         ans++;
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
