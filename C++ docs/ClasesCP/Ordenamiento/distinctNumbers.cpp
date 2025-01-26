#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n; cin >> n;
    vector<int> numbers(n);

    for(int& x : numbers) cin >> x;
    sort(numbers.begin(), numbers.end());

   int ans = 1;

    for(int i = 0; i + 1 < n; i++){
        if(numbers[i] != numbers[i + 1]){
            ans++;
        }
    }
    cout << ans << "\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin>>t;

    while(t--){
        solve();
    }
    return 0;
}