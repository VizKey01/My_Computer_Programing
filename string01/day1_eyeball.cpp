#include <bits/stdc++.h>
using namespace std;

int main(){
    float xm,ym,xe,ye,re,rp,xc,yc,xp,yp;
    cin >> xe >> ye >> re >> rp >> xm >> ym;
    float a,b,c,A,B,C;
    c = re - rp;
    xc = xm,yc = ye;
    A = sqrt(pow(xc - xe,2) + pow(yc - ye,2));
    B = sqrt(pow(xm - xc,2) + pow(ym - yc,2));
    C = sqrt(pow(xm - xe,2) + pow(ym - ye,2));
    a = (c/C) * A;
    b = (c/C) * B;
    if(xm < 50 && ym < 50){
        xp = abs(xe) - a;
        yp = abs(ye) - b;
    }
    else if(xm < 50 && ym > 50){
        xp = abs(xe) - a;
        yp = abs(ye) + b;
    }
    else if(xm > 50 && ym < 50){
        xp = abs(xe) + a;
        yp = abs(ye) - b;
    }
    else{
        xp = abs(xe) + a;
        yp = abs(ye) + b;
    }
    cout << round(xp) << " " << round(yp);
    return 0;
}