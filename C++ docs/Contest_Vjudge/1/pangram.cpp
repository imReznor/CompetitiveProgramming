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
    string s; cin >> s;

    set<char> letras;

    for(char c : s){
         if(isalpha(c)){
              letras.insert(tolower(c));
          }
     }

    if(letras.size() == 26){
              cout << "YES" << "\n";
         }else{
              cout << "NO"<< "\n";
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
