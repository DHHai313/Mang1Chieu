#include <bits/stdc++.h>
using namespace std;
/*Cho mảng số nguyên A[] gồm N phần tử, 
nhiệm vụ của bạn là in ra các phần tử là số chẵn ở chỉ số chẵn, 
nếu mảng không tồn tại phần tử như vậy thì in ra "NONE".
*/
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
   int check = 0;
    for(int i = 0; i < n; i+=2){
        if(a[i]%2==0 ){
            check=1;
            cout<<a[i]<<" ";
        }
    }
    if(check==0){
        cout<<"NONE";
    }
}