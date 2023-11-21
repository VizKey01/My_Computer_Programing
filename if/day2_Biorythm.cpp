#include<bits/stdc++.h>
using namespace std;

#define _USE_MATH_DEFINES
int DPM[] = {0, 31, 28, 31, 
            30, 31, 30, 31, 
            31, 30, 31, 30, 31};
//int daysPerMonth[] = {31, 28/*(leapyear(y) ? 29 : 28)*/, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool leapyear(int y){
    return (y % 4 == 0 && y % 100 != 0) || y % 400 == 0;
}

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    return (year % 4 == 0);
}

int daysInMonth(int month, int year) {
    switch (month) {
        case 2: return isLeapYear(year) ? 29 : 28;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        default: return 31;
    }
}

int cal(int d, int m, int y){
    int temp = d;
    for(int i = 1;i < m;i++){
        temp += daysInMonth(i, y);
        //cout << temp << endl;
        /*
        if(m == 2 && leapyear(y))temp += 29;
        else temp += DPM[i];
        */
    }
    //if(isLeapYear(y))temp++;
    return temp;
}

int sol(int d1, int m1, int y1, int d2, int m2, int y2){
    int ans = 0;
    int p1 = leapyear(y1) ? 366 - cal(d1,m1,y1) : 365 - cal(d1,m1,y1);
    int p2 = (y2 - y1 - 1) * 365;

    int p3 = cal(d2,m2,y2);
    
    return p1 + p2 + p3;
}

int sol2(int d1, int m1, int y1, int d2, int m2, int y2){
    int ans = 0;
    bool T = true;
    y1 -= 543, y2 -= 543;
    int ycnt = y1;

    //set value
    ans = DPM[m1] - d1;
    if(leapyear(ycnt)) ans++;

    //years
    while(T){
        //months
        for(int i = 1;i <= 12;i++){
            //set default value
            if(ycnt == y1){
                i = m1 + 1;
                y1 = 0;
            }  
            if(ycnt == y2 && i == m2) {
                T = false;
                break;
            }
            //add value
            ans += DPM[i];
        }
        //check
        if(leapyear(ycnt) && m1 <= 2) ans++;
        ycnt++;
    }
    ans += d2;
}

int main(){
    int d1,m1,y1,d2,m2,y2,ans = 0;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    y1 -= 543, y2 -= 543;
    ans = sol(d1,m1,y1,d2,m2,y2);
    
    double physical = sin((2* M_PI * ans) / 23);
    double emotional = sin((2* M_PI * ans) / 28);
    double intellectual = sin((2 * M_PI * ans) / 33);
    cout << ans << " " << round(physical * 100.0) / 100.0 << " " << round(emotional * 100.0) / 100.0 << " " << round(intellectual * 100.0) / 100.0 << endl;
}

// 1 1 2559 1 1 2560