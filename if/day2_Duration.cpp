#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int h1,m1,s1, h2,m2,s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    int t1 = h1*60*60 + m1*60 + s1;
    int t2 = h2*60*60 + m2*60 + s2;
    int dh,dm,ds;
    int day = 86400;
    ds = t2 - t1 + day;
    ds %= day;
    dh = ds / (60*60);
    ds -= dh * 60*60;
    dm = ds / 60;
    ds -= dm * 60;
    int temp = day * -1;
    cout << dh << ':' << dm << ':' << ds;
}
