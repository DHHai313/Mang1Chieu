#include <bits/stdc++.h>
using namespace std;

// int timmax(int a[], int n){
//     int max = a[0];
//     for(int i = 1; i < n; i++){
//         if(max<=a[i])
//         {
//             max =a[i];
//         }
//     }
//     return max;
// }
// int timmmin(int a[], int n){
//     int min = a[0];
//     for(int i = 1; i < n; i++){
//         if(min>=a[i])
//         {
//             min =a[i];
//         }
//     }
//     return min;
// }
int main(){
int n;
     cin>>n;
     int a[n];

     int max = 0;
     int min =1000001;
    int checkmax=0;
    int checkmin=0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
   for(int i = 0; i < n; i++){
        if(a[i]<=min){
            checkmin = i;
            min = a[i];
        }
        if(a[i]>max){
            checkmax = i;
            max = a[i];
        }
   } 
   
   cout<<checkmin<<' '<<checkmax; 
}