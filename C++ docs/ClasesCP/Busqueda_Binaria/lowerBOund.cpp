#include <algorithm>
#include <bits/stdc++.h>
#include <filesystem>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
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

void bs_last() {
    int n; cin >> n;
    vector<int> v(n);
    forr(i,0,n) cin >> v[i];

    int q; cin >> q;
    while(q--){
         int x; cin >> x;
         int low = 0, high = n - 1;
         while(low < high){
              int mid = (low + high + 1)/2;
              dbg(low,mid,high);
              if(v[mid] <= x) low = mid;

              else high = mid - 1;
         }

         cout << (v[low] == x ? "Yes" : "No") << " " << low + 1 << "\n";
    }
}

void solve(){
     int n; cin >> n;
     vector<int> v(n);
     forr(i,0,n) cin >> v[i];

     int q; cin >> q;

     while(q--){
          int x; cin >> x;
          int low = 0, high = n - 1;
          while(low < high){
               int mid = (low + high)/2;
               dbg(low,mid,high);
               if(v[mid] >= x) high = mid;
               else low = mid + 1;
          }

          cout << (v[low] == x ? "Yes" : "No") << " " << low + 1 << "\n";

     }
}

void solve2(){
     int n; cin >> n;
     vector<int> v(n);
     forr(i,0,n) cin >> v[i];

     int q; cin >> q;

     while(q--){

          int x; cin >> x;
          auto it = lower_bound(v.begin(),v.end(),x);
          cout << (*it == x ? "Yes" : "No") << " " << 
               it-v.begin() + 1 << "\n"; 


     }

}



int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;

    while (t--) {
        solve2();
    }
    return 0;
}
