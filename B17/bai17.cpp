    #include <bits/stdc++.h>
    using namespace std;
   bool ktdoixung(int a[],int n){
        for(int i = 0;i < n/2 ;i++){
            if(a[i]!=a[n-1-i]){
                return false;
            }
        }
        return true;
   }
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n;
        cin>>n;
        int a[n];
        for(int &x : a){
            cin>>x;
        }
        if(ktdoixung(a,n)){
            cout<<"YES";
        }else {
            cout<<"NO";
        }
        
    }