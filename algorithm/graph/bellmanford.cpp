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
const int big = 1e5+7;
const ll INF = 1e9+7;


//--------------------- Variable zone ------------------------
int start,finish;
priority_queue<pi> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<vector<int>> node(big, vector<int>());
vector<int> dis(big, big);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int i, j, wei;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------
vector<NODE> edges;

void sol() {
    int n, m;
    cin >> n >> m >> start;
    mloop(i) {
        int x, y, w;
        cin >> x >> y >> w;
        edges.push_back({x,y,w});
    }

    dis[start] = 0;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = 0; j < m; ++j) {
            int u = edges[j].i;
            int v = edges[j].j;
            int w = edges[j].wei;

            if(dis[u] != big && dis[u] + w < dis[v]) 
                dis[v] = dis[u] + w;
        }
    }
    //chk cycles
    mloop(i) {
        int u = edges[i].i;
        int v = edges[i].j;
        int w = edges[i].wei;
        bool chk =  dis[u] + w < dis[v];
        bool chk1 =  dis[u] != big;
        if(dis[u] + w != big && dis[u] + w < dis[v]){
            cout << -1;
            return ;
        }
    }

    nloop(i) {
        cout << dis[i] << " ";
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