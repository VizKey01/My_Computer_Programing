#include <bits/stdc++.h>
using namespace std;

int main(){
    string x,s = "";
    cin >> x;
    int n = x.size(),cnt = 0,chk = 0;
    for(int i = 0; i < 2;i++)
        s += x[i];
    //cout << s;
    if((s == "06" || s == "08" || s == "09") && n == 10){
        cout << "Mobile number";  
    }
    else cout << "Not a mobile number";
}

// 0868144444