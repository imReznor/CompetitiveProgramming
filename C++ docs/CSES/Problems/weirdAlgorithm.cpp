#include <iostream>
#include <vector>
 
using namespace std;
 
void solve(){

        long long n; cin>> n;
        
        vector<long long> secuencia;
        secuencia.push_back(n);
        while(n != 1){
             if(n % 2 == 0) n = n/2;
             else{ 
                n = (3*n) + 1;  
                } 
            secuencia.push_back(n);
        }
       
       for (int elemento : secuencia)
       {
        cout<<elemento<<' ';
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