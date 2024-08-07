#include <bits/stdc++.h>
using namespace std;
// // in ra phan tu lon hon tat ca cac so truoc no
// 6
// 2 6 1 3 9 9
// 2 6 9
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  int maxval = -1e9;
  for (int i = 0; i < n; i++) {
    if (a[i] > maxval) {
      cout << a[i] << " ";
      maxval = a[i];
    }
  }
}