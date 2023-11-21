#include <bits/stdc++.h>
using namespace std;

#define _USE_MATH_DEFINES

#define PI 3.14159265

int fac(int f){
    int n = 1;
    for(int i = 1; i <= f;i++){
        n *= i;
    }
    return n;
}

void m2(){
    float ans = 0;
    ans = (M_PI - (fac(10))/pow(8,8) + (pow(log(9.7),(7/sqrt(71) - sin(40 * M_PI /180))))) / (pow(1.2,cbrt(2.3)));
    cout << ans << endl;
}

void m1(){
    float ans = 0;
    float degrees = 40 * (M_PI /180);
    float pw = (7/sqrt(71) - sin(degrees));
    float h = pow(1.2,pow(2.3,1/3));
    ans = M_PI - (fac(10))/pow(8,8) + (pow(log(9.7),pw));
    ans /= h;
    cout << ans << endl;
}

int main(){
    //m1();
    m2();
}