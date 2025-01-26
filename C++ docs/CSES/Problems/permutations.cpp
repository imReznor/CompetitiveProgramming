#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){

    int n; cin >> n;    
    vector<int>numbers;
 
    if(n == 1){
        cout << "1" << endl;
    }
    else if (n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
    }
    else{
        for(int i = 2; i <= n; i+=2){
            numbers.push_back(i);
        }
        for(int i = 1; i <= n; i+=2){
            numbers.push_back(i);
        }
    }
 
    for(int n : numbers){
        cout << n << " ";
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