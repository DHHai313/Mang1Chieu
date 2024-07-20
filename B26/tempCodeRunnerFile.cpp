#include <bits/stdc++.h>
using namespace std;
int cnt[1000001];
int main(){
/*[Mảng 1 chiều cơ bản]. Bài 26. Mảng đánh dấu 1

Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem có bao nhiêu giá trị khác nhau trong mảng?
*/

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int dem = 0;
    for(int i = 0 ; i < n; i++){
        cnt[a[n]]==1;
    }
    for(int i=0;i<1000000;i++){
        if(cnt[i]==1){
            ++dem;
        }
    }
    cout<<"so gia tri khac nhau cua mang la:"<<dem;
    
}