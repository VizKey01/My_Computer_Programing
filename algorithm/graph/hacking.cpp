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
#define kloop(x) for(int (x) = 0;(x) < k; ++(x))
#define aloop(x) for(auto &itr : (x))
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define pb(x) push_back(x);
#define fs first
#define se second
#define DEBUG 1
const int big = 1e8+7;
const ll INF = 1e9+7;


//--------------------- Variable zone ------------------------
int start,finish;
priority_queue<pi, vector<pi>, greater<pi>> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int u, v, w;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    int n, m, k;
    cin >> n >> m >> k;
    int cable[k];
    vector<vector<int>> node(n , vector<int>());
    vector<int> dis(n,big);
    vector<int> dif(n);
    kloop(i) cin >> cable[i];
    nloop(i) cin >> dif[i];
    mloop(i) {
        int x, y;
        cin >> x >> y;
        node[x].push_back(y);
        node[y].push_back(x);
    }
    priority_queue<pi, vector<pi>, greater<pi>> Q;
    kloop(i) {
        dis[cable[i]] = dif[cable[i]];
        Q.push({dis[cable[i]], cable[i]});
    }
    while(!Q.empty()) { 
        int u = Q.top().se;
        int w = Q.top().fs;
        Q.pop();
        if(dis[u] < w) continue;
        aloop(node[u]) {
            if(dis[itr] > dif[itr] + dis[u]) {
                dis[itr] = dif[itr] + dis[u];
                Q.push({dis[itr], itr});
            }
        }
    }

    auto ans = max_element(all(dis));
    cout << *ans << endl;

}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}