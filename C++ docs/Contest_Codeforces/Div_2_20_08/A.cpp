#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

using namespace std;
const long long MOD = 1e8 + 7;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &el : v) cin >> el;

     if (sz(v) == 1) {
        cout << 0 << endl;
        return;
      }

     unordered_map<int, int> freq;
     for(int el : v) freq[el]++;

     int max_freq = 0;
     for(const auto &pair : freq){
          max_freq=max(max_freq, pair.second);
     }

     int min_op = sz(v) - max_freq;
     cout << min_op << "\n";

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

