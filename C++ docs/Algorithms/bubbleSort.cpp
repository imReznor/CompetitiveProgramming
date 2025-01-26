#include <bits/stdc++.h>
#include <fstream>

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
    vector<int> v(n);

    forr(i,0,n) cin >> v[i];
    
    for(int i = 0; i < n - 1; i++){ //Se recorren las pasadas
                                    //Se trata de llevar el elemento 
                                    //más grande al final del arreglo
         for(int j = 0; j < n - i - 1; j++){ //Se recorren los pares
              if(v[j] > v[j + 1]){
                   swap(v[j], v[j + 1]); //Swap() -> O(1);
              }
         }
    }

    for(auto &x : v){
         cout << x <<  " ";
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
