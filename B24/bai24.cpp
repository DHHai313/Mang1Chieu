#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i = 0; i < n; i++ ){
        cin>>a[i];
    }
    vector<int> sums;
    int  current_sum = 0;
    //tinh tong k phan tu dau tien
    for(int i = 0; i < k; i++ ){
        current_sum+=a[i];
    }
    sums.push_back(current_sum);
    for(int i = k; i< a.size();i++){
        current_sum += a[i] - a[i-k];
        sums.push_back(current_sum);
    }
    for(int x: sums){
        cout<<x<<" ";
    }

}