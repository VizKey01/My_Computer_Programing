#include<bits/stdc++.h>
using namespace std;
#define pi pair<int, int>
#define ll long long
#define db double
#define fs first
#define se second

const int big = 1e6;

void sol() {
    int n, m;
    cin >> n >> m;
    int co[n+1], ci[n+1];
    for(int i = 0;i <n ;i++)
        cin >> co[i];
    for(int i = 0;i <n ;i++)
        cin >> ci[i];
    
    vector<pi> edge[n+1];
    for(int i = 0;i < m;i++){
        int st, en;
        cin >> st >> en;
        edge[st].push_back({en, co[en]});
    }
    // cout << 0 << " ";

        vector<int> dis(n, big);
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        dis[0] = 0;
        pq.push({dis[0], 0});

        while(!pq.empty()) {
            int u = pq.top().se;
            int w = pq.top().fs;
            pq.pop();

            for(auto &it : edge[u]) {
                int v = it.fs;
                int wei = it.se;

                if(w + wei + ci[u] < dis[v]){
                    dis[v] = w + wei + ci[u];
                    pq.push({dis[v], v});
                }
            }
        }
        for(auto &itr : dis){
            if(itr == big) cout << -1 << " ";
            else cout << itr << " ";
        }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    sol();
    return 0;
}