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
priority_queue<pi, vector<pi>, greater<pi>> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<vector<int>> node(big, vector<int>());
vector<pi> node2[big];
vector<int> dis(big,0);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int u, v, w;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

bool cmp(pair<db, db> x, pair<db, db> y) {
    db temp1 = (db)x.fs / (db)x.se;
    db temp2 = (db)y.fs / (db)y.se;
    return temp1 > temp2;
}

void sol() {
    db w,n,x;
    cin >> w >> n;
    vector<db> val;
    vector<pair<db, db>> wei;
    db nowwei = 0, ans = 0.0;
    nloop(i) {
        cin >> x; val.pb(x);
    }
    nloop(i) {
        cin >> x; wei.push_back({val[i], x});
    }

    sort(all(wei), cmp);
    
    aloop(wei){
        if(nowwei + itr.se <= w) {
            nowwei += itr.se;
            ans += itr.fs;
        }
        else {
            db tem = w - nowwei;
            ans += itr.fs*((db)tem / (db)itr.se);
            break;
        }
    }

    // cout << fixed << setprecision(4);
    // cout << ans; 
    printf("%.4f", ans); // a lot easy :)
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}