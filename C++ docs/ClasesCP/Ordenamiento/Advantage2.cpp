#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define all(a) (a).begin(), (a).end()
#define forr(i,a,b) for(int i=(a); i<(b); i++)

const int MAXN=100100;

#ifdef LOCAL
#include "../debug/debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
const long long MOD = 1e8 + 7;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<int> idx(n);

    iota(all(idx), 0);

    sort(all(idx), [&] (int i, int j){
              return a[i] < a[j];
              });

     //dbg(idx);

     vector<int> ans(n);
     forr(i,0,n - 1){
          int pos = idx[i];
          ans[pos] = a[pos] - a[idx.back()];
     }

     int pos = idx.back();
     ans[pos] = a[pos] - a[idx[n - 2]];

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
