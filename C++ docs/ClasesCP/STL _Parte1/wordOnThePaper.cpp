#include <iostream>
#include <vector>

using namespace std;

void solve() {
    vector<vector<char>> grid(8, vector<char>(8));

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> grid[i][j];
        }
    }

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (grid[i][j] != '.') {
                cout << grid[i][j];
            }
        
          }
      }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    return 0;
}

