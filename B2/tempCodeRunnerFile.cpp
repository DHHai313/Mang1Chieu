#include <bits/stdc++.h>
using namespace std;
bool kiemtrasnt(int x){
    if(x<=1){
        return false;
    }
    for(int i = 2;i < sqrt(x);i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    double a[n];
    for(double &x : a){
        cin>>x;
    }
    double tong = 0;
    double dem = 0;
    for(int i = 0;i < n; i++){
        if(kiemtrasnt(a[i])){
            tong+=a[i];
            dem++;
        }
    }
    double kq = tong/dem;
   cout<<fixed<<setprecision(3)<<kq;
}