#include <bits/stdc++.h>
using namespace std;


double cal(double t, double k){
    t = (t * (365 - (k - 1))) / 365;
    return t;
}

int main(){
    double p;
    double k = 1, t = 1;
    cin >> p;
    bool T = true;
    while(T){
        //cal(t, k);
        t = (t * (365 - (k - 1))) / 365;
        if(1 - t >= p){
            cout << k;
            return 0;
        }
        ++k;
        //cout << k;
    }
    return 0;
}