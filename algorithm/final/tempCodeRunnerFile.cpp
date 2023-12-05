#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
#define ll long long
#define db double
#define fs first
#define se second

int big = 1e6;
int intmax = INT_MAX;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0,-1 ,0};

struct Node{
    int u, v, w;

    bool operator>(const Node& other) const {
        return w > other.w;
    }
};



void sol() {
    int n ,m;
    cin >> n >> m;
    int mp[n+1][m+1];
    
    vector<pi> st;
    for(int i = 0;i < n;i++) {
        for(int j = 0; j< m;j++) {
            cin >> mp[i][j];
            if(mp[i][j] == 1) {
                st.push_back({i,j});
            }
        }
    }

    int ans = big;
    for(auto it : st){
        priority_queue<Node, vector<Node>, greater<Node>> pq;
        vector<vector<int>> dis(n + 1, vector<int>(m + 1, big));
        pq.push({it.fs, it.se, 0});
        dis[it.fs][it.se] = 0;
        while(!pq.empty()) {
            int ux = pq.top().u;
            int uy = pq.top().v;
            int w = pq.top().w;
            pq.pop();

            if(mp[ux][uy] == 2) {
                ans = min(ans, dis[ux][uy]);
                break;
            }
            // cout << mp[ux][uy] << " ";

            for(int i = 0; i<4 ;i++) {
                int nx = dx[i] + ux; 
                int ny = dy[i] + uy;
                if(nx >= 0 && ny >= 0 && nx < n && ny < m 
                && mp[nx][ny] != 3 && 1 + dis[ux][uy] < dis[nx][ny]) {
                    dis[nx][ny] = 1 + dis[ux][uy]; 
                    pq.push({nx, ny, dis[nx][ny]});
                }
            }
        }
    }
    
    cout << ans + 1;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    sol();
    return 0;
}