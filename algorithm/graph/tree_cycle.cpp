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
int start = -1,finish;
priority_queue<pi> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<int> dis(big,0);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int i,j;
};

queue<NODE> qn;
int ans = 0, cnt = 0, ck = 0;
//--------------------- Works zone ------------------------
void dfs(vector<vector<int>> &node, int u, int temp) {
    if(ck) return ;
    if(vis[u]){
        start = u, ck = 1;
        return ;
    }
    vis[u] = true;
    aloop(node[u]) {
        if(itr == temp) continue;
        dfs(node, itr, u); 
    }
    if(start == u) {
        ans = cnt + 1;
        return ;
    }
    else if(ck) cnt++;
    
}

void sol() {
    int n;
    cin >> n;
    vector<vector<int>> node(n, vector<int>());
    nloop(i) {
        int x, y;
        cin >> x >> y;
        node[x].pb(y);
        node[y].pb(x);
    }
    nloop(i) {
        if(!vis[i])
            dfs(node, i, -1);
    }

    cout << ans;
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}