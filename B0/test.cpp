#include <bits/stdc++.h>
int main(){
    int n; scanf ("%d", &n);
    long long a[n];
    for (int i = 0; i < n; i++) scanf ("%lld", &a[i]);
    for (int i  =0; i < n; i++){
        if (((i > 0) && ((a[i] >> 63) ^ (a[i - 1] >> 63))) || ((i < n - 1) && ((a[i] >> 63) ^ (a[i + 1] >> 63)))) 
            printf ("%lld ", a[i]);
    }

}
