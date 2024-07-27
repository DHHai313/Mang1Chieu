#include <bits/stdc++.h>
using namespace std;

int main() {
  /* ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   int n,x;
   cin>>n>>x;
   int a[n];
   for(int &x : a){
       cin>>x;
   }
   int check = 0;
   for(int i = 0; i < n; i++){
       if(a[i]==x){
           check = 1;
           for(int j = i; j < n-1; j++){
               a[j] = a[j+1];
           }
           --n;

for(int i = 0; i < n; i++){
   printf("%d ", a[i]);
}
       }
   }
   if(check == 0){
       cout<<"NOT FOUND";
   }
   */
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  // tim vi tri cua x
  int local = -1;
  for (int i = 0; i < a.size(); i++) {
    if (a[i] == x) {
      local = i;
      break;
    }
  }
  // xoa phan tu trong vector
  if (local != -1) {
    a.erase(a.begin() + local);
    for (int i = 0; i < a.size(); i++) {
      cout << a[i] << " ";
    }
  } else {
    cout << "NOT FOUND";
  }
}