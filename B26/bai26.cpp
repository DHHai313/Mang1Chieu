#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main() {
  /*[Mảng 1 chiều cơ bản]. Bài 26. Mảng đánh dấu 1

  Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác
  nhau trong mảng?
  */

  int n;
  cin >> n;
  int a[n];
  int maxval = -1e7;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (maxval < a[i]) {
      maxval = a[i];
    }
    cnt[a[i]] = 1;
  }

  int dem = 0;
  for (int i = 0; i <= maxval; i++) {
    if (cnt[i] == 1) {
      dem++;
    }
  }
  cout << dem;
}