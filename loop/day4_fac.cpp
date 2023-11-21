#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    int tem = 2;
    while(x > 1){
        if(x % tem == 0){
            x /= tem;
            cout << tem ;
            //cout << x << endl;
            if(x > 1) cout << '*';
        }
        else{
            tem++;
        }
    }
    return 0;
}