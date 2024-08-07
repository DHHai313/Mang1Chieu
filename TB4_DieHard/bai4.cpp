/*
Bộ phim "Die Hard" mới vừa được phát hành! Có n người tại phòng vé rạp chiếu
phim đứng thành một hàng lớn. Mỗi người trong số họ có một tờ tiền mệnh giá 104
50 hoặc 25 rúp. Một vé "Die Hard" có giá 25 rúp. Nhân viên đặt phòng có thể bán
vé cho mỗi người và trả tiền thừa nếu ban đầu anh ta không có tiền và bán vé
theo đúng thứ tự mọi người trong hàng không?
Input Format Dòng đầu tiên chứa số
nguyên n - số người trong hàng. Dòng tiếp theo chứa n số nguyên, mỗi số bằng 25,
50 hoặc 100 - giá trị của các tờ tiền mà mọi người có*/
#include <bits/stdc++.h>
using namespace std;
int check(int a[], int n) {
  int d[105] = {0};
  for (int i = 0; i < n; i++) {
    if (a[i] == 25) {
      d[25]++;
    } else if (a[i] == 50) {
      if (d[25] == 0) {
        return 0;
      } else {
        d[25]--;
        d[50]++;
      }
    } else if (a[i] == 100) {
      if (d[25] >= 1 && d[50] >= 1) {
        d[25]--;
        d[50]--;
        d[100]++;
      } else if (d[25] >= 3) {
        d[25] -= 3;
        d[100]++;
      } else {
        return 0;
      }
    }
  }
  return 1;
}
int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }

  if (check(a, n)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}