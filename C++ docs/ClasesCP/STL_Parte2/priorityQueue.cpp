#include <bits/stdc++.h>

using namespace std;

template<class T> using pq = priority_queue<T, vector<T>, less<T>>;
template<class T> using pqg = priority_queue<T, vector<T>, greater<T>>; //MIN HEAP
  void solve() {

    pq<int> maxHeap;
    pqg<int> minHeap;

    maxHeap.push(10);
    maxHeap.push(15);
    maxHeap.push(5);
    maxHeap.push(20);
    maxHeap.push(30);

    cout << maxHeap.top() << "\n";

    maxHeap.pop();

    cout << maxHeap.top() <<"\n";  

    cout << "============" << "\n";

    minHeap.push(10);
    minHeap.push(15);
    minHeap.push(5);
    minHeap.push(20);
    minHeap.push(30);

    cout << minHeap.top() << "\n";

    minHeap.pop();

    cout << minHeap.top() << "\n";

    cout << "============" << "\n";

    pqg<array<int, 3>> parr;

    parr.push({1, 2, 3});
    parr.push({4, 5, 6});

    cout << parr.top()[0] << " " << parr.top()[1] << " " << parr.top()[2] << "\n";  

    cout << "================" << "\n";

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