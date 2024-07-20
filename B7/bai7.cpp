#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int min = 2001;
   for(int i = 0; i < n-1; i++){
    for(int j = i+1;j < n; j++){
        int hieu = abs(a[i]-a[j]);
        if(min>hieu){
            min=hieu;
        }
    }
   }
   cout<<min;
    
}