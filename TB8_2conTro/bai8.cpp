#include <bits/stdc++.h>
using namespace std;
// cho 2 mang da sap xep tang dan
// gop 2 mang in ra theo thu tu tang dan
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
  int i = 0;
  int j = 0;
  while (i < n && j < m) {
    if (a[i] <= b[j]) {
      cout << a[i] << " ";
      i++;
    } else {
      cout << b[j] << " ";
      j++;
    }
  }
  while (i < n) {
    cout << a[i] << " ";
    i++;
  }
  while (j < m) {
    cout << b[j] << " ";
    j++;
  }
}