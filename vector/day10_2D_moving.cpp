
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,m;
    cin >> n >> m;
    double v[n+1][m+1];
    for(int i = 0;i < n;i ++){
        for(int j = 0;j < m;j ++){
            cin >> v[i][j];
        }
    }
    double ans[n - 2][m - 2];int tem = n - 3;
    for(int i = 0;i < n - 2;i ++){
        
        for(int j = 0;j < m - 2;j ++){
            double temp = 0,cnt = 0;
            for(int k = i;k < n - tem;k++){
                temp += v[k][j] + v[k][j + 1] + v[k][j + 2];
                cnt+=3;
            }
            //cout << cnt << endl;
            temp /= 9;
            ans[i][j] = round(temp*100) / 100.0;
        }
            tem--;
    }
    for(int i = 0;i < n - 2;i ++){
        for(int j = 0;j < m - 2;j ++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*
4 4
3 3 3 3
3 3 3 3
3 3 3 3
3 3 3 3

5 8
1.5 2 3 4 5 6 7 8
8.5 7 6 5 4 3 2 1
2.5 2 2 2 2 2 2 2
3.5 3 3 3 3 3 3 3
2.5 2 2 2 2 2 2 2.5
*/