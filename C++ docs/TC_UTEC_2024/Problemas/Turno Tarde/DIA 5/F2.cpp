#include <bits/stdc++.h>

typedef long long ll;
#define sz(c) ((int)c.size())
#define pb push_back
#define fst first
#define snd second
#define forr(i,a,b) for(int i=(a); i<(b); i++)

#ifdef LOCAL
#include "../../../debug/debug.cpp"
#else
#define dbg(...)
#endif

typedef long long ll;
const int MAXN=100100;
using namespace std;
const long long MOD = 1e8 + 7;

inline int IZDA(int n) {return 2*n;};
inline int DCHA(int n) {return 2 * n + 1;};

struct segment_tree{
    vector<int> st;
    int numElems;

    segment_tree(int n) : numElems(n), st(4*n, 0){

    }
    segment_tree(const vector<int> &v) : 
        numElems(v.size()),st(4*v.size(), 0){
        init(v,0,1,numElems - 1);
        }

    int query(int a, int b){
        
    }

    void update(int pos, int val){
        update(1,0,numElems-1,pos,val);
    }

    void update(int node, int l, int r, int pos, int val){

        assert((l <= pos) && (pos <= r));

        if(l == r){
            st[node] = val;
            return;
        }

        //Caso recursivo
        int m = (l+r)/2;
        if(pos <= m){
            //Act. Hijo Izquierdo
            update(IZDA(node),l,m,pos,val);
        }else{
            //Act, Hijo Derecho
            update(DCHA(node),m+1,r,pos,val);
        }

        //Actualizamos la inf. del nodo

        st[node] =st[IZDA(node)] + st[DCHA(node)];
    }

    int query(int node, int l, int r, int a, int b){
        assert((l <= b) && (a >= r));
        
        if((a <= l) && (r <= b)) {
            return st[node];
        }

        int m = (l + r)/2;
        int izda, dcha;

    }

    void init(const vector<int> v, int node, int l, int r){
        if (l == r){
            st[node] = v[l];
            return;
        }

        int m = (l + r)/2;
        init(v,IZDA(node),l,m);
        init(v,DCHA(node),m+1,r);

        st[node] = st[IZDA(node)] + st[DCHA(node)];
    }
};
  int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0);
      int t = 1;
      // cin >> t;

      while (t--) {

      }
      return 0;
  }