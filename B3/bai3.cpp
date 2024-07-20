#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x : a){
        cin>>x;
    }
    int minval = 10001;
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i]<=minval){
            minval = a[i];
        }
    }
    for(int x : a){
        if(x==minval){
            dem++;
        }
    }
    cout<<dem;
}