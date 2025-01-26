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
    int A = 0;
    int B = 0;

    forr(i,0,sz(s)){
         if(s[i] == 'A'){
              A++;
         }else{
              B++;
         }
    }

    if(A > B){
         cout << 'A' << "\n";
    }else{
         cout << 'B' << "\n";
    }
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
