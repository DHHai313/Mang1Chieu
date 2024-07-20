#include <bits/stdc++.h>
using namespace std;

long long F[100];
//ham tao so fibonanci
void fibonanci(){
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i < 93; i++){
        F[i] = F[i-1] + F[i-2];
    }

}
int checkFibonanci(long long m){
    for(int i = 0; i < 93 ; i++){
        if(F[i]==m){
            return 1;
        }
    }
    return 0;
}
int main(){
    fibonanci();
    int n;
    cin>>n;
    long long a[n];
    for(long long &x : a){
        cin>>x;
    }
    int check = 0;
    for(int i = 0; i < n; i++){
      if(checkFibonanci(a[i])){
        cout<<a[i]<<" ";
        check = 1;
      }
    }
    if(!check) cout<<"NONE";
}