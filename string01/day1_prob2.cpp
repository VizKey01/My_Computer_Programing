//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    string s;
    int n = 0,M = 0,cnt = 0;
    cin >> s;
    int N = s.size();
    for(int i=0;i<N;i++){
        n++;
        if(n == 2 || n == 6 || n == 11){
            cout << '-';
        }
        cout << s[i];
        M += (14 - n) * (s[i] - 48);
    }
    M = (11 - (M % 11)) % 10;
    cout << "-" << M;
}