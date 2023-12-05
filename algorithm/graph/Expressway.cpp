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
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
// vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int u, v, w;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    int n, m, tem;
    vector<pi> node[705];
    start = 1; finish = 2;
    cin >> n >> tem;
    node[start].push_back({finish, tem});

    for(int ex = 3; ex <= n; ex++) {
        priority_queue<pi, vector<pi>, greater<pi>> pq;
        vector<int> dis(ex + 5, big);
        int m; cin >> m;
        mloop(j) {
            int v, d;
            cin >> v >> d;
            node[v].push_back({ex, d});
            node[ex].push_back({v, d});
        }
        
        dis[start] = 0;
        pq.push({dis[start], start});

        while(!pq.empty()) {
            int u = pq.top().se;
            int Dis = pq.top().fs;
            pq.pop();

            aloop(node[u]) {
                int v = itr.fs;
                int wei = itr.se;
                if( Dis + wei < dis[v]) {
                    dis[v] = Dis + wei;
                    pq.push({dis[v], v});
                }
            }
        }
        cout << dis[finish] << " ";
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

/*
5 10
2 1 6 2 7
3 1 1 3 1 2 9
2 1 2 2 5
*/