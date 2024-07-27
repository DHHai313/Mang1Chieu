#include <bits/stdc++.h>
using namespace std;

/*Cho mảng số nguyên A[] gồm N phần tử,
hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự xuất hiện
 trong mảng kèm theo tần suất của nó, mỗi giá trị chỉ liệt kê một lần.
 9
1 6 6 9 0 6 4 9 3
1 1
6 3
9 2
0 1
4 1
3 1

*/
int cnt[1000001];
int main() {
  int n;
  cin >> n;
  int a[n];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  // liet ke so lan xuat hien;
  for (int i = 0; i < n; i++) {
    cnt[a[i]]++;
  }
  for (int i = 0; i < n; i++) {
    if (cnt[a[i]] != 0) {
      cout << a[i] << " " << cnt[a[i]] << endl;
      cnt[a[i]] = 0;
    }
  }
}
