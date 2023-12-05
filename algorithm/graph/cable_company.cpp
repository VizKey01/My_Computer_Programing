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
vector<pair<int, pi>> node;
vector<int> dis(big, -1);
vector<bool> vis(big, 1);

//set up node (can be +level)
struct NODE {
   int i,j;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

int check(int n){
    if(dis[n] == -1) return n;
    else {
        dis[n] = check(dis[n]);
        return dis[n];
    }
} 

void sol() {
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n ; ++j) {
            int x;
            cin >> x;
            node.push_back({x, {i, j}});
        }
    }
    // start
    sort(all(node));
    int ans = 0;
    aloop(node) {
        int u = check(itr.se.fs);
        int v = check(itr.se.se);

        if(u != v) {
            dis[u] = v;
            ans += itr.fs;
        }
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