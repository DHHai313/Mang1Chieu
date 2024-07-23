    #include <bits/stdc++.h>
    using namespace std;
int ktsnt(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
int thuannghich(int n){
    int thuan = n;
    int nghich = 0;
    while(n > 0){
        nghich = nghich * 10 + n%10;
        n/=10; 
    }
    return nghich == thuan;
}
int chinhphuong(int n){
    int kt = (int)sqrt(n);
    return kt*kt ==n;
}
int tongchuso(int n){
    int sum = 0;
    while(n>0){
        sum+= n%10;
        n=n/10;
    }
    return sum;
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
        int demsnt = 0;
        int demtn = 0;
        int demcp = 0;
        int demtcs = 0;
        for(int i = 0; i < n; i++){
            if(ktsnt(a[i])){
                demsnt++;
            }
            if(thuannghich(a[i])){
                demtn++;
            }
            if(chinhphuong(a[i])){
                demcp++;
            }
            if(ktsnt(tongchuso(a[i]))){
                demtcs++;
            }
            
        }
        cout<<demsnt<<endl<<demtn<<endl<<demcp<<endl<<demtcs;
        
        
    }