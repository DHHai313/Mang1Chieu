#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int &x : a){
        cin>>x;
    }
    int x;
    cin>>x;
    int nhohon = 0;
    int lonhon = 0;
    for(int i = 0; i < n; i++){
        if(a[i]>x){
            lonhon++;
        }
        if(a[i]<x){
            nhohon++;
        }
    }
    cout<<nhohon<<endl<<lonhon;
}