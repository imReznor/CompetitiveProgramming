#include <bits/stdc++.h>

using namespace std;

void solve1(){

    int n; cin>>n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin>>a[i];

    int maxSum = -100000;
    for (int L = 1; L < n; L++) {
        for (int R = L; R < n; R++) {
              int suma = 0;
              for (int i = L; i <= R; i++){
                suma += a[i];
              }
              if(suma > maxSum) maxSum = suma;
              
        }
    }   
    cout << maxSum << "\n";
}

void solve2(){
    
    int n; cin>>n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) cin>>a[i];

    int maxSum = -100000;
    for (int L = 0; L < n; L++) {
         int suma = 0;
        for (int R = L; R < n; R++) {
             suma += a[R];
             maxSum = max (maxSum, suma);
        }
    }   
    cout << maxSum << "\n";
}

void solve3(){
    int n; cin>>n;
    vector<long long> a(n);

    for (long long i = 0; i < n; i++) cin>>a[i];
    
    long long t = a[0];
    long long ans = a[0];

    for(long long i = 1; i < n; i++){
      t = max(a[i], t + a[i]);
       if(t > ans){
        ans = t;

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
     solve1();
    }
    return 0;
}
