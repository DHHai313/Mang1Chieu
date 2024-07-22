#include <bits/stdc++.h>
using namespace std;
// int kiemtrasnt(int x){
//     for(int i = 2; i < sqrt(x); i++){
//         if(x%i==0){
//             return 0;
//         }
//     }
//     return x > 1;
// }
bool isPrime(int n) {
    // Kiểm tra các trường hợp đặc biệt
    if (n <= 1) return false;  // Các số nhỏ hơn hoặc bằng 1 không phải là số nguyên tố
    if (n <= 3) return true;   // 2 và 3 là số nguyên tố

    // Nếu n chia hết cho 2 hoặc 3 thì không phải là số nguyên tố
    if (n % 2 == 0 || n % 3 == 0) return false;

    // Kiểm tra các ước số từ 5 đến √n
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }

    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    int n;
    int tong = 0;
    int dem = 0;
    cin>>n;
    int a[n];
    for(int &x : a){
        cin>>x;
        if(isPrime(x)){
            tong+=x;
            dem++;
        }
    }
    cout<<fixed<<setprecision(3)<<(double)tong/dem;
   //std::cout  << std::fixed << std::setprecision(3) <<(double)tong/dem;
}