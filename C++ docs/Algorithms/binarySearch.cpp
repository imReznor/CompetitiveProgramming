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
     int x; cin >> x;
     vector<int> v(n);

     forr(i,0,n) cin >> v[i];

     int inicio = 0;
     int final = sz(v) - 1;
 

     while(inicio <= final){
          int half = (inicio + final)/2;
          if(v[half] == x) {
               cout << "Posición: " << half << "\n";
               return;
          } 
          else if (v[half] < x) inicio = half + 1;
          else final = half - 1;

     }

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
