#include <bits/stdc++.h>
using namespace std;
int cnt[10001];
int main(){
    
     int n;
     cin>>n;
     int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
        cnt[a[i]]++;
    }
    
     for(int i = 0; i < n; i++){
      bool check = true;
      for(int j = 0; j < i;j++){
        if(a[i]==a[j]){
          check = false;
          break;
        }
      }
     if(check){
       cout<<a[i]<<" "<<cnt[a[i]]<<endl;
     } 
    }
      
    
}