#include <bits/stdc++.h>
using namespace std;

int main(){
    double a[4],mn=1e6,mx=0,ans = 0;
    for(int i = 0; i <4;i++){
        cin >> a[i];
        if(a[i] < mn) mn = a[i];
        if(a[i] > mx) mx = a[i];
        ans += a[i];
    }/*
    for(int i = 0; i < 4;i++){
        if(a[i] != mn && a[i] != mx) ans += a[i];
    }*/
    ans = (ans - mx - mn) / 2;
    cout << round(ans * 100.0) / 100.0;
}