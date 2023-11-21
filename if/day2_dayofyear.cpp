#include<bits/stdc++.h>
using namespace std;

bool leapyear(int y){
    return (y % 4 == 0 && y % 100 != 0 ) || (y % 400 == 0);
}

int days[] = { 31, 28, 31, 30, 31, 30,
               31, 31, 30, 31, 30, 31 };
 

int main(){
    int d,m,y,d2,m2,y2,ans = 0;
    cin >> d >> m >> y ;
    int DPM[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    bool T = true;

    //set value
    
    d2 = 1,m2 = 1;
    ans = d;
    if(leapyear(y - 543) && m > 2) ans++;
    for(int i = m2;i < m;i++){
        //add value
        ans += DPM[i];
    }
    
    cout << ans;
}