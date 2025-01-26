#include <iostream>

using namespace std;

  void solve() {

    int n; cin >> n; //CANTIDAD DE DATOS

    int x = 3; //DECLARACIÓN DE VARIABLES - CONSTANTE (O(1))
    cout << "YES"; //COMPLEJIDAD: O(1)
    int a = 9 + 8; //COMPLEJIDAD O(1)

    int suma = 0;

    for(int i = 0; i < n; i++){ //COMPLEJIDAD: O(n) - TOMA EL INPUT
      suma += i; //O(1)
    }

    //BUCLES FOR -> O(N)

   for(int i = 0; i < n + 5; i++){ //2N + 5 -> COMPLEJIDAD O(N)     

     //O(1)
     suma += i;
     suma += i; 
     suma += i; 
     suma += i;
     suma += i;

    }

   for(int i = 0; i < n; i++){ 
     for (int j = i; j < n; j++){ 
        
       suma += (i - j); //COMPLEJIDAD O(N^2)
     
     }
   }

  }


  // 1 SEGUNDO -> 10^8 OPERACIONES

  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t = 1;
      // cin >> t;

      while (t--) {
          solve();
      }
      return 0;
  }
