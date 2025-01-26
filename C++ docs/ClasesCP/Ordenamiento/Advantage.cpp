#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define all(a) (a).begin(), (a).end()
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

#ifdef LOCAL
#include "../debug/debug.cpp"
#else
#define dbg(...)
#endif

const int MAXN=100100;

using namespace std;
const long long MOD = 1e8 + 7;

void solve() {

     int n; cin >> n;
     vector<pair<int,int>> a(n);
     forr(i,0,n){
          cin >> a[i].first;
          a[i].second = i;
     }

     sort(all(a));
     
     vector<int> ans(n);
     
     forr(i,0,n - 1){
          int pos = a[i].second;
          int val = a[i].first;

          ans[pos] = val - a.back().first;
     }

     int pos = a.back().second;
     ans[pos] = a.back().first - a[n - 2].first;

     forr(i,0,n){
          cout << ans[i] << " \n"[i == n - 1];
     } 

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
