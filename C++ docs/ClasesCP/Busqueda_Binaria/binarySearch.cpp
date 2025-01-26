
#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

const int MAXN=100100;

using namespace std;
const long long MOD = 1e8 + 7;

int binary_search(const vector<int> v, int x){
     
     if(v.empty()) return -1;
     int low = 0; int high = sz(v) - 1;

     while(low <= high){
          int mid = (low + high)/2;
          if(v[mid] == x) return mid;
          else if(x < v[mid]) high = mid - 1;
          else low = mid + 1;
     }

     return -1;

}

//Implementación para elementos repetidos


int binary_search_first(const vector<int> v, int x){

     int low = 0, high = sz(v) - 1, result = -1;

     while(low <= high){
          int mid = (low + high)/2;
          if(v[mid] == x){
               result = mid;
               high = mid - 1;
          }else if(x < v[mid]){
              high = mid - 1;
          }else {
               low = mid + 1;
          }
     }
     return result;

}

int binary_search_last(vector<int> v, int x){
     int low = 0, high= sz(v) - 1, result = -1;

     while(low <= high){
          int mid = (low + high)/2;
          if(v[mid] == x){
               result = mid;
               low = mid + 1;
          }else if(x < v[mid]){
               high = mid - 1;
          }else{
               low = mid + 1;
          }
     }

     return result;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;

    while (t--) {
     vector<int> v = {1, 2, 2, 3, 6, 7, 7, 7, 7, 8, 9, 11, 14,                      16, 19, 23, 27, 34};
        cout << "La posición es: " << binary_search_last
             (v, 7);        
    }
    return 0;    

}
