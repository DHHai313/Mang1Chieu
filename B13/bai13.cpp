    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n;
        cin>>n;
        long long a[n];
        for(long long &x : a){
            cin>>x;
        }
        long long sum = 0, product = 1;
        long long mod = 1e9 + 7;
        for(int i = 0; i < n; i++){
            sum = (sum + a[i]) % mod;
            product = (product * a[i]) % mod;
        }
        cout<<sum<<endl<<product;
    }