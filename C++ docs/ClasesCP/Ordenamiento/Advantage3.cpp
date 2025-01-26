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
     vector<int> a(n);

     for(int& x : a) cin >> x;

     multiset<int> ms;
     for(int x : a) ms.insert(x);

     forr(i,0,n){
          int ans = a[i];
          ms.erase(ms.find(a[i]));

          int mx = *ms.rbegin();
          ans -= mx;

          cout << ans << ' ';

          ms.insert(a[i]);
     }

     cout << "\n";
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
