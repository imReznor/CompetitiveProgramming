#include <iostream>
#include <vector>

using namespace std;

//VECTORES

  void solve() {
    
    vector <int> a;
    vector <int> b = {1,2,3,4,5};
    vector <int> c (8);
    vector <int> d (7,4);

    a = {3,4,1,7,5,9,8};

    vector<int>::iterator it = a.begin();
    cout << *it <<  "\n";

    vector<int>::iterator itend = a.end();
    itend = prev(itend);
    cout << *itend << "\n";

    vector<int>::reverse_iterator itrev = a.rbegin();
    cout << *itrev << "\n";

    vector<int>::reverse_iterator inicio = a.rend();
    inicio = prev(inicio);
    cout << *inicio << "\n";

    for(auto it3 = a.begin(); it3 != a.end(); it3++){
      cout << *it3 << " ";
    }

    cout << "\n";

    for(auto it3 = a.rbegin(); it3 != a.rend(); it3++){
      cout << *it3 << " ";
    }
    cout << a.size() << "\n";
    cout << a.empty() << "\n";
  
    cout << a.front() << "\n";
    cout << a.back() << "\n";

    a.push_back(25);
    a.push_back(15);

    for( int x : a ){
      cout << x << " ";
    }
    cout << "\n";

    a.pop_back();

    for(int i = 0; i < a.size(); i++){
      cout << a[i] << " ";
    }

    cout << "\n";

    cout << "-----------------------" << "\n";

    int n = 7, m = 5;
    vector<vector<int>> matriz(n, vector<int>(m));
    
    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        matriz[i][j] = i + j;
      }
    }

    for(int i = 0; i < n; i++){
      for(int j = 0; j < m; j++){
        cout << matriz[i][j] << " ";
      }
    }

  }


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
