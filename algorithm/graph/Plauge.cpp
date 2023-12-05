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
int start,finish;
priority_queue<pi, vector<pi>, greater<pi>> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1}; // row n
vector<int> d4y = {1, 0, -1, 0}; // column m

vector<pi> node2[big];
vector<int> dis(big,0);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int u, v, ck;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    int n, m, t, cnt = 0;
    cin >> n >> m >> t;
    int node[n + 5][m + 5];
    queue<NODE> q;
    nloop(i) {
        mloop(j) {
            cin >> node[i][j];
            if(node[i][j] == 1) 
                q.push({i, j, 0});
        }
    }

    while(!q.empty()){
        int ux = q.front().u;
        int uy = q.front().v;
        int day = q.front().ck;
        q.pop();
        if(day > t) break;
        
        for(int i = 0; i < 4; ++i) {
            int nx = ux + d4x[i];
            int ny = uy + d4y[i];
            if(nx >= 0 && ny >= 0 && nx < n && ny < m && node[nx][ny] == 0) {
                node[nx][ny] = 1;
                q.push({nx, ny, day + 1});
            }
        }
        cnt++;
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