    #include <bits/stdc++.h>
    using namespace std;
    int gdc(int a,int b){
        while(b!=0){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
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
        int result = a[0];
        for(int i  = 1; i < n; i++){
            result = gdc(result,a[i]);
            if(result==1){
                break;
            }
        }
        cout<<result;
        
    }