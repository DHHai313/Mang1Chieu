// #include <bits/stdc++.h>
// int main(){
//     int n; scanf ("%d", &n);
//     long long a[n];
//     for (int i = 0; i < n; i++) scanf ("%lld", &a[i]);
//     for (int i  =0; i < n; i++){
//         if (((i > 0) && ((a[i] >> 63) ^ (a[i - 1] >> 63))) || ((i < n - 1) &&
//         ((a[i] >> 63) ^ (a[i + 1] >> 63))))
//             printf ("%lld ", a[i]);
//     }

// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> A(n);

  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  // Tìm kiếm X trong mảng
  int pos = -1;
  for (int i = 0; i < n; i++) {
    if (A[i] == x) {
      pos = i;
      break;
    }
  }

  if (pos != -1) {
    // Xóa phần tử đầu tiên có giá trị X
    A.erase(A.begin() + pos);

    // In ra mảng sau khi xóa
    for (int i = 0; i < A.size(); i++) {
      cout << A[i] << " ";
    }
  } else {
    cout << "NOT FOUND";
  }

  return 0;
}
