#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    double a, L = 0;
    cin >> a;
    double U = a;
    double x = (U + L) / 2;
    while(abs(a - pow(10,x)) > pow(10,-10) /** max(a,pow(x,2))*/){
        x = (U + L) / 2;
        if(pow(10,x) > a){
          //  x = (L + x) / 2;
            U = x;
        }
        else if(pow(10,x) < a){
        //  x = (x + U) / 2;
            L = x;
        }
    }
    cout << x;
    return 0;
}