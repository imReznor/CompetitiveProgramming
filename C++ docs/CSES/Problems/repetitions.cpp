#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve(){

        string s; cin >> s;

        long long maxLength = 1;
        long long currentLength = 1;

        for (size_t i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1]){
                currentLength++;
            }else{
                maxLength = max(maxLength,currentLength);
                currentLength=1;
            }
            
        }

        maxLength=max(maxLength,currentLength);
        
        cout << maxLength << endl;
    
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
