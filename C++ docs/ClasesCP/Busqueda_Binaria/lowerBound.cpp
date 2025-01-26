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

pair <string,int> binary_search(vector<int> v, int x){
     int low = 0, high = sz(v) - 1, ans = -1;
     while(low <= high){
          int mid = (low + high)/2;
          if(v[mid] == x) {
               ans = mid;
               return {"Yes", mid + 1};              
          } 
          else if(x < v[mid]) high = mid - 1;
          else{
               low = mid + 1;
               ans = mid;
          } 
     }
          if(ans != -1){
               return {"No", ans + 1};
          }else{
               return {"No", -1};
     }
     
     
}


void solve() {
    int n; cin >> n;
    vector<int> v(n);
    forr(i, 0, n) cin >> v[i];

    int q; cin >> q;

    while (q--) {
        int x; cin >> x;

        auto result = binary_search(v, x);
        if (result.second != -1) {
            cout << result.first << " "<< result.second << "\n";
        }
        else {
             cout << "No\n";
        }
    }
}  



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}
