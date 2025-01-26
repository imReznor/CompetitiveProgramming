#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
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
    
     int n, w; cin >> n >> w;
     vector<int> v(n);
     forr(i,0,n) cin >> v[i];
     int maxEl = *max_element(v.begin(), v.end());

     while(w--){
          char s;
          int l,r; 
          cin >> s >> l >> r;          
               if(l <= maxEl && maxEl <= r){
                    if(s == '+'){
                         maxEl++;     
                    }else{
                         maxEl--;
                    } 
               }

               cout << maxEl << " "; 
               
     }
     
     cout<<'\n';

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
