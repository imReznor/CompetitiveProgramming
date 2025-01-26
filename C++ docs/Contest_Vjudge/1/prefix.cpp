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
    string s,t; cin >> s >> t;
    
    if(s > t){
         cout << "No\n";
    }

    else if(s == t){
         cout << "Yes\n";
    }

    else{
         bool ans = true;

         forr(i,0,sz(s)){
              if(t[i] != s[i]){
              ans = false;
         }
    }

    cout << (ans ? "Yes\n" : "No\n");

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
