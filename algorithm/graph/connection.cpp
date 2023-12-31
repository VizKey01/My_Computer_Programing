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
vector<int> d4x = {0, 1, 0, -1}; // row n
vector<int> d4y = {1, 0, -1, 0}; // column m

// set up node (can be +level)
struct NODE {
   int i,j;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    int v, e, k, ans = 0;
    vector<vector<int>> node(big, vector<int>());
    cin >> v >> e >> k;
    for(int i = 0; i < e; ++i) {
        int n, m;
        cin >> n >> m;
        node[n].push_back(m);
        node[m].push_back(n);
    }
    for(int i = 0; i < v; ++i) {
        vector<int> dis(big, 0);
        vector<bool> vis(big,0);
        queue<int> q;
        int cnt = 1;
        q.push(i);
        vis[i] = true; // visited
        while(!q.empty()) {
            int u = q.front();
            q.pop();
            if(dis[u] == k) break;
            aloop(node[u]) {
                if(!vis[itr]){
                    vis[itr] = true;
                    dis[itr] = dis[u] + 1;
                    q.push(itr);
                    cnt++;
                }
            }
        }
        ans = max(ans, cnt);
    }

    cout << ans;
    
}
/*

7 8 3
0 6
1 6
1 5
1 4
2 3
3 4
4 5
5 6*/
int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}