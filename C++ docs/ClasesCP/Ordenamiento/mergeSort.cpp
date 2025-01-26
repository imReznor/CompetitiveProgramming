#include <bits/stdc++.h>

#define all(a) (a).begin(), (a).end()

using namespace std;

void solve(){

    vector<int> a = {4, 5, 3, 7, 1, 2, 6, 3, 8, 5};

    //Colocar los pares al inicio y los impares al final

    //Ordenar pares e impares

    //Pares ascendente, impares descendente


    sort(all(a), [&](int prev, int next){
        if(prev % 2 == 0) {
            if(next % 2 == 0) return (prev < next);
            return true;
        }
        if(next % 2 == 0) return false;
        return prev > next;


            

    });

    for(int x : a) cout << x << ' ';

    
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





