#include <bits/stdc++.h>
using namespace std;

bool sol(int x, int y, int z) {
   if(x % 2 != 0 && y % 2 == 0) return true;
   else if(x % 2 == 0 && y % 2 != 0 && z % 2 == 0) return true;
   else if(x % 2 == 0 && y % 2 == 0 && z % 2 != 0) return true;
   else return false;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, tempzero = 0, cnt = 0;
    cin >> n;
    int tillings[n][n], till[n*n + 1];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> tillings[i][j];
            
            till[cnt] = tillings[i][j];
            if(tillings[i][j] == 0){
                tempzero = i;
            }
            cnt++;
        }
    }
    cnt = 0;
    for(int i = 0; i < n*n; i++){
        if(till[i] == 0)continue;
        for(int j = i+1; j < n*n; j++){
            if(till[j] == 0) continue;
            if(till[i] > till[j]) {
               // cout << till[i] << " " << till[j] << endl;
                cnt++;
            }
        }
    }
   // cout << cnt << endl;
    if(sol(n, cnt, tempzero)) cout << "YES";
    else cout << "NO";
    return 0;
}

/*
6 5, 6 4, 5 4
*/