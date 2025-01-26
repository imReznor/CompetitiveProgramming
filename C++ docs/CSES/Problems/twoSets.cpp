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
    ll n; cin >> n;
    ll sum = (n*(n+1))/2;

    if(sum % 2 != 0){
         cout << "NO" << "\n";
         return;
    }



    vector<ll> a,b;
    ll sumEsp = sum/2;

    for(ll i = n; i > 0; i--){
         if(sumEsp >= i){
              a.pb(i);
              sumEsp -= i;
         }else{
              b.pb(i);
         }
    }


ll sza = a.size();
ll szb = b.size();
cout << "YES" << "\n";
cout << sza << "\n";
forr(i,0,sza) cout << a[i] << " ";
cout << "\n";

cout << szb << "\n";
forr(i,0,szb) cout << b[i] << " ";
cout << "\n";


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
