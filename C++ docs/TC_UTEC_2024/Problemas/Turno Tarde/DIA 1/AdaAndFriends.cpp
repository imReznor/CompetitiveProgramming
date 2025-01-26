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

  int binary_search(vector<int> v, int x){
    int n = v.size();
    int a = -1;
    int b = n;

    while(b - a > 1){
        int c = (a + b);
        if(v[c] >= x){
            b = c;
        }else{
            a = c;
        }

    }

    if(b < n && v[b] == x) return b;
    else return -1;
  }

  void solve() {

    // int q,k; cin >> q >> k;
    // map <string, int> mp;

    // for(int i = 0; i <q; i++){
    //     string s; cin >> s;
    //     int n; cin >> n;

    //     mp[s] += n;
    // }

    cout << binary_search({3,5,7,12,22,22,37,40},7);

    
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