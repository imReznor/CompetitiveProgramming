#include <iostream>
#include <vector>

using namespace std;

void solve(){
    
        size_t n; cin>>n;
        vector <int> a(n);
        
        for (size_t i = 0; i < n; i++)cin>>a[i];

        long long ans = 0;
        for (size_t i = 1; i < n; i++){
            
            if(a[i] < a[i-1]){
                ans = ans + (a[i-1]-a[i]);
                a[i]=a[i-1];
            }

        }

        cout<<ans<<endl;
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
