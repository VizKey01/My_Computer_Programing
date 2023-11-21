#include <bits/stdc++.h>
using namespace std;


int liftnumber[100000][2];

int sol(int x, int y, int n) {
    int mn = 1e6, mx = 0, Mn = 1e6, Mx = 0, ans = 0, temp = 0, tom = 1e6;
    mn = min(x , y);
    mx = max(x , y);
    for(int i = 1; i <= n; i++){
        Mn = min(liftnumber[i][0], liftnumber[i][1]);
        Mx = max(liftnumber[i][0], liftnumber[i][1]);
        if(Mn - mn <= 0){
            temp += (Mx - mx);
        }
        else if(mx == mn){
            temp += (Mx - Mn) + (Mn - mn);
        }
        else {
            temp += (Mx - mx) + (Mn - mn);
        }
        
        if(tom > temp){
            tom = temp;
            ans = i;
        }
    }
    cout << ">> " << ans << " " << tom << endl;
}   
/*
4
1 3 1
2 1 8
3 2 2
4 12 3
1
5 9
*/
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x, y;
    cin >> x;
    
    for(int i = 0; i < x; i++){
        int temp;
        cin >> temp;
        cin >> liftnumber[temp][0];
        cin >> liftnumber[temp][1];
    }
    cin >> y;
    for(int i = 0; i < y; i++){
        int now, up;
        cin >> now >> up;
        sol(now, up, x);
    }
    return 0;
}
