#include <bits/stdc++.h>
using namespace std;

double Mosteller(double w, double h){
    double ans = sqrt(w * h)/60;
    return ans;
}

double Haycock(double w, double h){
    double ans = 0.024265 * pow(w,0.5378) * pow(h,0.3964);
    return ans;
}

double Boyd(double w, double h){
    double n = 0.6157 - (0.0188 * log10(w));
    double ans = 0.0333 * pow(w,n) * pow(h,0.3);
    return ans;
}

int main(){
    double w,h;
    cin >> w >> h;
    cout << setprecision(15) << Mosteller(w,h) << "\n";
    cout << Haycock(w,h) << "\n";
    cout << Boyd(w,h) << "\n";
    return 0;
}