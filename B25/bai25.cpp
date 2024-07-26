    #include <bits/stdc++.h>
    using namespace std;
  
    int main(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        int n; 
        int chan = 0;
        int le = 0;
    while(cin >> n){
        if(n%2==0){
            chan++;
            
        }else if(n%2!=0){
            le++;
        }
        if(chan>le){
            cout<<"CHAN";
        } 
        if(le>chan){
            cout<<"LE";
        }
        if(le==chan){
            cout<<"CHANLE";
        }
    }
      
    }