#include <bits/stdc++.h>
using namespace std;

int main(){
    float a,b,c,x1,x2;
    cin >> a >> b >> c;
    float n = sqrt(pow(b,2) - (4*a*c));
    x1 = (-b - n) / (2*a);
    x2 = (-b + n) / (2*a);
    x1 = round(x1 * 1e3)/ 1e3;
    x2 = round(x2 * 1e3)/ 1e3;
    cout << x1 << " " << x2;
}