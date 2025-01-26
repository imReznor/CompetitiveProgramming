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


pair<int, int> encontrar_temp(int n, vector<pair<int, int>> &intervals)
{
    if (n == 0)
    {
        // No hay sustancias
        return {0, 0};
    }

    // L máximo de los límites inferiores a_i
    // R mínimo de los límites superiores b_i
    int L = -100;
    int R = 100;

    for (const auto &interval : intervals)
    {
        L = max(L, interval.first);
        R = min(R, interval.second);
    }

    // Verificar si concuerdan los límites
    if (L <= R)
    {
        // L es menor, entonces se usan
        return {L, R};
    }
    else
    {
        // L (limite inferior) es mayor que R(limite superior) => no hay solución
        return {-1, -1};
    }
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;

    while (t--) {

          int n;
    cin >> n;

    vector<pair<int, int>> intervals(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> intervals[i].first >> intervals[i].second;
    }

    pair<int, int> result = encontrar_temp(n, intervals);
    if (result.first == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << result.first << " " << result.second << endl;
    }

        
    }
    return 0;
}
