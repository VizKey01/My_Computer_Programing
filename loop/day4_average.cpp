#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    double temp = 0,ans = 0;
    while(true){
        cin >> temp;
        if(temp < 0){
            ans /= cnt;
            if(cnt == 0) cout << "No Data" << endl;
            else cout << round(ans * 100) / 100;
            return 0;
        }
        ans += temp;
        cnt++;

    }
    return 0;
}