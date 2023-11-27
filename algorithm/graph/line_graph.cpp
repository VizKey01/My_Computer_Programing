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
int start,finish,count_edge = 0, mxcnt = 0;
queue<int> q;
priority_queue<pi> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<int> dis(big,0);
vector<bool> vis(big, false);
vector<vector<int>> node(big, vector<int>());

//set up node (can be +level)
struct NODE {
   int i,j;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

int dfs(int u) {
    vis[u] = true;
    int dept = node[u].size();
    count_edge++;
    mxcnt = max(mxcnt, dept);
    aloop(node[u]) {
        if(!vis[itr])
            dept += dfs(itr);
    }
    return dept;
}

void sol() {
    int n, m;
    cin >> n >> m;
    mloop(i) {
        int v,e;
        cin >> v >> e;
        node[v].push_back(e);
        node[e].push_back(v);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        mxcnt = 0;
        count_edge = 0;
        if(!vis[i]) {
            int temp = dfs(i) / 2;
            if(temp == count_edge - 1 && mxcnt < 3) cnt++;
        }
    }
    cout << cnt;
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}