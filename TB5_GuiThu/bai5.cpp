/*
Tất cả các thành phố của Lineland đều nằm trên trục tọa độ Ox. Do đó, mỗi thành
phố được liên kết với vị trí xi - tọa độ trên trục Ox. Không có hai thành phố
được đặt tại một điểm. Cư dân Lineland thích gửi thư cho nhau. Một người chỉ có
thể gửi thư nếu người nhận sống ở một thành phố khác. Chi phí gửi thư chính xác
bằng khoảng cách giữa thành phố của người gửi và thành phố của người nhận. Đối
với mỗi thành phố, hãy tính hai giả trị mini và maxi, trong đó mini là chi phí
tối thiểu để gửi thư từ thành phố thứ i đến một thành phố khác và maxi là chi
phí tối đa để gửi thư từ thành phố thứ i đến một số thành phố khác
4
-5 -2 2 7
3 12
3 9
4 7
5 12
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int &x : a) {
    cin >> x;
  }
  cout << a[1] - a[0] << " " << a[n - 1] - a[0] << endl;
  for (int i = 1; i < n - 1; i++) {
    cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << " "
         << max(a[i] - a[0], a[n - 1] - a[i]) << endl;
  }
  cout << a[n - 1] - a[n - 2] << " " << a[n - 1] - a[0];
}