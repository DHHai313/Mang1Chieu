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
        int max1 = 0,max2 = 0;
        for(int i = 0; i < n; i++){
            if(max1<=a[i] ){
                max2 = max1;
                max1 = a[i];
            }else if(max2<a[i]){
                max2 = a[i];
            }
            
        }
        cout<<max1<<" "<<max2;
        
    }