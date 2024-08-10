#include <bits/stdc++.h>
using namespace std;
/* in ra tan suat xuat hien cua cac phan tu trong mang theo thu
tu tu nho den lon, cach ra va in theo thu tu xuat hien
8
2 1 2 3 4 8 2 3
2 3
1 1
3 2
4 1
8 1
*/
int cnt[10000001];
int main() {
  int n;
  cin >> n;
  int a[n];
  int maxai = -100;
  for (int &x : a) {
    cin >> x;
    if (maxai <= x) {
      maxai = x;
    }
  }
  // dem tan xuat bang mang danh dau
  for (int i = 0; i < n; i++) {
    cnt[a[i]]++;
  }
  // in ra theo tu xuat hien
  for (int i = 0; i <= maxai; i++) {
    if (cnt[a[i]]) {
      cout << a[i] << " " << cnt[a[i]] << endl;
      cnt[a[i]] = 0;
    }
  }
  // dem tan xuat bang mang danh dau
  for (int i = 0; i < n; i++) {
    cnt[a[i]]++;
  }
  cout << endl;

  for (int i = 0; i <= maxai; i++) {
    if (cnt[i]) {
      cout << i << " " << cnt[i] << endl;
    }
  }
}