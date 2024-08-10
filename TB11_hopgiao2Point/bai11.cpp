#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int a[n];
  int b[m];

  for (int &x : a) {
    cin >> x;
  }
  for (int &x : b) {
    cin >> x;
  }
  vector<int> hop, giao;
  int i = 0;
  int j = 0;
  while (i < n && j < m) {
    if (a[i] == b[j]) {
      hop.push_back(a[i]);
      giao.push_back(a[i]);
      i++;
      j++;
    } else if (a[i] < b[j]) {
      hop.push_back(a[i]);
      i++;
    } else {
      hop.push_back(b[j]);
      j++;
    }
  }
  while (i < n) {
    hop.push_back(a[i]);
    i++;
  }
  while (j < m) {
    hop.push_back(b[j]);
    j++;
  }
  for (int x : hop) {
    cout << x << " ";
  }
  cout << endl;
  for (int x : giao) {
    cout << x << " ";
  }
}