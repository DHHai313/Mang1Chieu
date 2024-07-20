#include <bits/stdc++.h>
using namespace std;
/*Cho mảng số nguyên A[] gồm N phần tử, 
hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i] ,
 A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.
*/
int main(){
    int n,k;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cin>>k;
    int dem = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            int tong = a[i]+a[j];
           if(tong==k){
            dem++;
           }
        }
    }
    cout<<dem;

}