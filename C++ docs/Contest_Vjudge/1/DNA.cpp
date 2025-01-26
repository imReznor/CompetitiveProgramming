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
    string s; cin >> s;
    int maxL = 1;
    int currentL = 1; 
    

    forr(i,0,sz(s)){
         if(s[i] == s[i - 1]){
              currentL++;
         }else{
              maxL = max(currentL,maxL);
              currentL = 1;
         }
    }

    maxL = max(maxL,currentL);

    cout << maxL << "\n";
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
