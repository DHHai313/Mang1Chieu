#include <bits/stdc++.h>
using namespace std;
int main(){
    
    /*Cho mảng số nguyên A[] gồm N phần tử,
     hãy liệt kê các giá trị khác nhau trong mảng theo thứ tự xuất hiện,
      mỗi giá trị chỉ liệt kê 1 lần*/
      /*9 
      1 2 3 4 1 2 3 4 5
      1 2 3 4 5
      */
     int n;
     cin>>n;
     int a[n];
    for(int &x : a) cin>>x;

    for(int i = 0; i < n; i++){
      bool check = true;
      for(int j=0; j < i;j++){
        if(a[i]==a[j]){
          check = false;
          break;
        }
      }
     if(check) cout<<a[i]<<" "<<i<<endl;
    }
      
    
}