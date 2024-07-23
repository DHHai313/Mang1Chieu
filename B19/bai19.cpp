    #include <bits/stdc++.h>
    using namespace std;
   
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
        //dao nguoc ptu
        for(int i = 0; i< n/2 ;i++){
            int temp = a[i];
            a[i]= a[n-1-i];
            a[n-1-i] = temp;
        }
        for(int x : a){
            cout<<x<<" ";
        }
    }