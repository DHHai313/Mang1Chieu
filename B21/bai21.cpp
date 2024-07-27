#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, x, k;
  cin >> n;
  cin >> x;
  cin >> k;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  for (int i = n; i >= k - 1; i--) {
    a[i + 1] = a[i];
  }
  n = n + 1;
  a[k - 1] = x;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}