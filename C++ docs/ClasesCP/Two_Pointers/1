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
    
     int n; cin >> n;
     vector<int> v(n);
     forr(i,0,n){
          cin >> v[i];
     }
     int target; cin >> target;

     int left = 0;
     int right = n - 1;

     while(left < right){
          int sum = v[left] + v[right];

          if(sum == target){
               cout << left + 1 << " " << right + 1 << "\n";
               return;
          }if(sum > target){
               right--;
          }else{
               left++;
          }

     }

     cout << "-1 -1" << "\n";

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
