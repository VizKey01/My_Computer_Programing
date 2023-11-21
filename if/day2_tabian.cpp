#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,ans = 18;
    cin >> x;
    if(x <= 2000 && x > 1000){
        ans = 58;
    }
    else if(x <= 1000 && x > 500){
        ans = 38;
    }
    else if(x <= 500 && x > 250){
        ans = 28;
    }
    else if(x <= 250 && x > 100){
        ans = 22;
    }
    else if(x <= 100){
        ans = 18;
    }
    else{
        cout << "Reject";
        return 0;
    } 
    cout << ans << endl;
}