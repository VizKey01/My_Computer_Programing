#include <bits/stdc++.h>
using namespace std;

bool leabyear(int y){
    return y % 4 == 0 || (y % 100 == 0 && y % 400 == 0);
}

int days[] = {0, 31, 28, 31, 30, 31, 30,
               31, 31, 30, 31, 30, 31 };

int main(){
    int d,m,y;
    cin >> d >> m >> y;
    y -= 543;
    int n = 31;
    n = days[m];
    if(m == 2 && leabyear(y)){
        n++;
        //cout << "ck" << endl;
    }
    //cout << n << endl;
    d += 15;
    if(d > n){
        d -= n;
        m += 1;
    }
    if(m > 12){
        m -= 12;
        y += 1;
    }
    cout << d << "/" << m << "/" << y + 543;
    return 0;
}