#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int, int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == "x") break;
#define nloop(x) for(int (x) = 0;(x) < n; ++(x))
#define mloop(x) for(int (x) = 0;(x) < m; ++(x))
#define aloop(x) for(auto &itr : (x))
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define pb(x) push_back(x);
#define fs first
#define se second
#define DEBUG 1
const int big = 1e6+7;
const ll INF = 1e9+7;


//--------------------- Variable zone ------------------------
// int start,finish;
priority_queue<pi, vector<pi>, greater<pi>> pq2;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<vector<int>> node(big, vector<int>());
vector<pi> node2[big];
vector<int> dis(big,0);

//set up node (can be +level)
struct NODE {
   int u, v, w;

   bool operator>(const NODE& other) const {
    return w > other.w;
   }

};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    int n, m;
    cin >> n >> m;
    int mp[n + 1][m + 1], ans[n + 1][m + 1];
    nloop(i) 
        mloop(j) 
            cin >> mp[i][j];
    
    
    NODE start = {0,0,0};
    vector<vector<int>> dis(n + 1, vector<int>(m + 1, big));
    priority_queue<NODE, vector<NODE>, greater<NODE>> pq;
    pq.push(start);
    dis[start.u][start.v] = 0;

    while(!pq.empty()) {
        int ux = pq.top().u;
        int uy = pq.top().v;
        int uw = pq.top().w;
        pq.pop();

        if(dis[ux][uy] < uw) continue;
        
        for(int k = 0; k < 4; ++k) {
            int vx = ux + d4x[k];
            int vy = uy + d4y[k];
            int wei = mp[vx][vy];
            if(vx >= 0 && vy >= 0 && vx < n &&
             vy < m && wei + dis[ux][uy] < dis[vx][vy]){
                
                dis[vx][vy] = wei + dis[ux][uy]; 
                pq.push({vx, vy, dis[vx][vy]});
            }
        }
    }

    nloop(i) {
        mloop(j) {
            cout << dis[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}