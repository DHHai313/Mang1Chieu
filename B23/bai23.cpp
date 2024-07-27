#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  int a[n];
  int F[n];
  for (int &x : a) {
    cin >> x;
  }
  for (int i = 1; i < n; i++) {
    F[0] = a[0];
    F[i] = F[i - 1] + a[i];
  }
  for (int x : F) {
    cout << x << " ";
  }
}