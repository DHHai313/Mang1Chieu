#include <bits/stdc++.h>
using namespace std;
int ktsnt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int main(){
    
     int n;
     cin>>n;
     int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    

    for(int i = 0; i < n; i++){
        int tongtrai = 0;
        int tongphai = 0;
        for(int j = 0; j < i; j++){
            tongtrai += a[j];
        }
        for(int j = i+1;j < n; j++){
            tongphai += a[j];
        }
        //cout<<"tong trai = "<<tongtrai<<endl;
        if(ktsnt(tongtrai) && ktsnt(tongphai)){
            cout<<i<<" ";
        }
    }
}