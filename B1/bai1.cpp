#include <bits/stdc++.h>
using namespace std;
/*[Mảng 1 chiều cơ bản]. Bài 1. Đếm chẵn lẻ, tổng chẵn lẻ
Cho mảng số nguyên A[] gồm N phần tử, 
nhiệm vụ của bạn là đếm xem trong mảng có bao nhiêu số chẵn, 
bao nhiêu số lẻ, tổng các phần tử là số chẵn, tổng các phần tử là số lẻ.
*/
int kiemtrale(int x[],int n){
    int demle = 0;
    for(int i = 0; i < n;i++){
        if(x[i]%2!=0){
            demle++;
        }
    }
    return demle;
}
int tongle(int x[],int n){
    int demle = 0;
    for(int i = 0; i < n;i++){
        if(x[i]%2!=0){
            demle+=x[i];
        }
    }
    return demle;
}
int kiemtrachan(int x[],int n){
    int demchan = 0;
    for(int i = 0; i < n;i++){
        if(x[i]%2==0){
            demchan++;
        }
    }
    return demchan;
}
int tongchan(int x[],int n){
    int demchan = 0;
    for(int i = 0; i < n;i++){
        if(x[i]%2==0){
            demchan+=x[i];
        }
    }
    return demchan;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x : a){
        cin>>x;
    }
    cout<<kiemtrachan(a,n)<<endl;
    cout<<kiemtrale(a,n)<<endl;
    cout<<tongchan(a,n)<<endl;
    cout<<tongle(a,n)<<endl;
    
}