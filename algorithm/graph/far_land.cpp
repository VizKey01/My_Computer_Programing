#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int, int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == "x") break;
#define nloop(x) for(int (x) = 1;(x) <= n; ++(x))
#define mloop(x) for(int (x) = 1;(x) <= m; ++(x))
#define aloop(x) for(int &itr : (x))
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
priority_queue<pi, vector<pi>, greater<pi>> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<int> dis(big, big);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int i,j;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    int n;
    cin >> n;
    vector<vector<int>> node(n+1, vector<int>(n+1));
    nloop(i) 
        nloop(j) 
            cin >> node[i][j];
        
    start = 1;
    pq.push({dis[start], start});
    dis[start] = 0;
    while(!pq.empty()) {
        int Dist = pq.top().fs;
        int u = pq.top().se;
        pq.pop();
        nloop(v){
            int wei = node[u][v];
            if(dis[u] + wei < dis[v] && wei != -1) {
                dis[v] = dis[u] + wei;
                pq.push({dis[v], v});
            }
        }
    }
    int ans = 0;
    nloop(i) {
        if(dis[i] == big) {
            cout << -1;
            return ;
        }
        ans = max(ans, dis[i]);
    }

    cout << ans << endl;
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}