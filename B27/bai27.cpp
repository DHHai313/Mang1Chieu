#include <bits/stdc++.h>
using namespace std;

    /*[Mảng 1 chiều cơ bản]. Bài 27. Mảng đánh dấu 2
Cho mảng số nguyên A[] gồm N phần tử,
 hãy liệt kê các giá trị xuất hiện trong mảng theo thứ tự từ nhỏ đến lớn 
 kèm theo tần suất của nó
 6
6 6 4 6 0 8 
-output
0 1
4 1
6 3
8 1

*/
int cnt[1000001];
int main(){
   
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n;i++){
        cin>>a[i];
    }
    
    for(int i = 0; i < n; i++){
        cnt[a[i]] = cnt[a[i]] + 1;
    }
    int maxval = a[0];
    for(int i = 0; i < n; i++){
        if(a[i]>=maxval){
            maxval = a[i];
        }
    }
    for(int i = 0; i < maxval; i++){
        if(cnt[i]!=0){
            cout<<i<<" "<<cnt[i]<<endl;
        }
    }

}