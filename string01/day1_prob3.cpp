#include <bits/stdc++.h>
using namespace std;

int main(){
    int Y,y;
    cin >> Y;
    Y -= 543;
    y = Y % 100;
    y = (y + floor(y/4) + 11);
    y %= 7;
    cout << y;
}