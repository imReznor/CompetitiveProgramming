#include <iostream>
#include <vector>

using namespace std;

void solve(){

        long long n; cin>> n;
        
        vector<long long> secuencia(n-1);
        for (size_t i = 0; i < n-1; i++) cin>>secuencia[i];


        long long suma_total = (n*(n+1))/2;
        long long suma_dada = 0;

        for (int i = 0; i < secuencia.size(); i++)
        {
            suma_dada += secuencia[i];
        }

        cout<<suma_total - suma_dada;

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
