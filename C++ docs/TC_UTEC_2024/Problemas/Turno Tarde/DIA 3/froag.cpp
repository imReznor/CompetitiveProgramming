    #include <bits/stdc++.h>

    typedef long long ll;
    #define sz(c) ((int)c.size())
    #define pb push_back
    #define fst first
    #define snd second
    #define forr(i,a,b) for(int i=(a); i<(b); i++)

    typedef long long ll;

    const int MAXN=100100;

    using namespace std;

    const long long MOD = 1e8 + 7;

    void solve() {

        int n; cin>>n;
        vector<int> h (n + 1);
        vector<int> dp(n + 1, INT_MAX);

        for(int i = 1; i <= n; i++) cin >> h[i];

        dp[1] = 0;

        if(n > 1) dp[2] = abs(h[2] - h[1]);

        for(int i = 3; i <= n; i++){
            
            dp[i] = min(dp[i - 1] + abs(h[i] - h [i - 1]), 
                        dp[i - 2] + abs(h[i] - h [i - 2]));
            
        }
        std::cout << dp[n] << "\n";
     
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