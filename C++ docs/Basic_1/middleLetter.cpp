#include <iostream>
#include <string>
 
#define init(a) (a).begin();
#define end(a) (a).end();

using namespace std;

void solve(){
    
    string s; cin >> s;
    int n = s.size();
    if(n % 2 == 0){
    
        cout << "NO";
    }else{
        
        int centro = n / 2;

    cout << s[centro] << endl;
    }
    
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