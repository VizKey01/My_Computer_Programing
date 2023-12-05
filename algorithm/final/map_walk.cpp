#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, pair<int, string>>
#define ll long long
#define db double

int big = 1e6;
int intmax = INT_MAX;
int dx[4] = {0, 1, -1};
int dy[4] = {1, 0, 0};

struct Node{
    int u, v, w;

    // bool operator>(const Node& other) const {
    //     return w > other.w;
    // }
};

// string temp = "";
int n, m;
int mp[11][11];
bool vis[11][11];

void cal(int r, int c, string temp) {

    if(r == n && c == m) {
        cout << temp << '\n'; 
        return ;
    }

    vis[r][c] = 1;
    if(!mp[r][c + 1] && !vis[r][c + 1] && c < m) cal(r, c + 1, temp + 'A');   
    if(!mp[r + 1][c] && !vis[r + 1][c] && r < n) cal(r + 1, c, temp + 'B');
    if(!mp[r - 1][c] && !vis[r - 1][c] && r > 1) cal(r - 1, c, temp + 'C');
    vis[r][c] = 0;
}

void sol() {
    cin >> n >> m;
    
    for(int i = 1;i <= n;i++ ){
        for(int j = 1; j <= m;j++){
            cin >> mp[i][j];
        }
    }

    cal(1, 1, "");
    cout << "DONE";
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    sol();
    return 0;
}