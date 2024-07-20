#include <bits/stdc++.h>
using namespace std;
int kiemtrasnt(int x){
    for(int i = 2; i < sqrt(x); i++){
        if(x%i==0){
            return 0;
        }
    }
    return x > 1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x : a){
        cin>>x;
    }
    int tong = 0;
    int dem = 0;
    for(int i = 0;i < n; i++){
        if(kiemtrasnt(a[i])){
            tong+=a[i];
            dem++;
        }
    }
   std::cout  << std::fixed << std::setprecision(3) <<(double)tong/dem;
}