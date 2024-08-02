#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// mang 1 chieu, thu tu phan tu da xuat hien 1 lan
// 2 3 2 8 1 8 2 1 4
// 2 3 8 1 4
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  vector<int> v = {1, 2, 3, 4};
  vector<int> vt(n);
  for (int i = 0; i < n; i++) {
    vt.push_back(a[i]);
  }
  for (int x : vt) {
    cout << x << " ";
  }
  cout << endl;
  // cout<<v[3];
  // cout << v.front();
  // cout<<v.back();
}