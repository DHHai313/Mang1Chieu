#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int a[n];
  int b[m];
  map<int, int> mapa;
  map<int, int> mapb;
  set<int> se;
  for (int &x : a) {
    cin >> x;
    mapa[x]++;
    se.insert(x);
  }
  for (int &x : b) {
    cin >> x;
    mapb[x]++;
    se.insert(x);
  }
  // tim giao
  for (auto it : mapa) {
    if (mapb.find(it.first) != mapb.end()) {
      cout << it.first << " ";
    }
  }
  cout << endl;
  // tim hop
  for (int x : se) {
    cout << x << " ";
  }
}