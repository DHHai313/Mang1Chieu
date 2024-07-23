#include <bits/stdc++.h>
int main(){
    int n; scanf ("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++) scanf ("%lld", &a[i]);
    for (int i  =0; i < n; i++){
        if (((i > 0) && ((a[i] >> 63) ^ (a[i - 1] >> 63))) || ((i < n - 1) && ((a[i] >> 63) ^ (a[i + 1] >> 63)))) 
            printf ("%lld ", a[i]);
    }
//Note
if (((i > 0) && ((a[i] >> 63) ^ (a[i - 1] >> 63))) || ((i < n - 1) && ((a[i] >> 63) ^ (a[i + 1] >> 63)))):

a[i] >> 63: Đẩy bit của số a[i] sang phải 63 bit. Trong kiểu long long (64-bit), bit tại vị trí 63 là bit dấu (sign bit), 
vì vậy việc kiểm tra giá trị của a[i] >> 63 cho bạn biết dấu của số đó.
^: Phép toán XOR. Nếu hai số có dấu khác nhau, kết quả của XOR sẽ là 1 (true);
 nếu dấu giống nhau, kết quả của XOR sẽ là 0 (false).
((i > 0) && ((a[i] >> 63) ^ (a[i - 1] >> 63))): Kiểm tra xem phần tử a[i] có trái dấu với phần tử trước đó không.
((i < n - 1) && ((a[i] >> 63) ^ (a[i + 1] >> 63))): Kiểm tra xem phần tử a[i] có trái dấu với phần tử sau đó không.
}
