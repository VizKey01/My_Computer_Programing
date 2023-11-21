#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == "x") break;
#define nloop(x) for(int (x) = 0;(x) < n;(x)++)
#define mloop(x) for(int (x) = 0;(x) < m;(x)++)
#define aloop(x) for(auto itr : (x))
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define fs first
#define se second
#define DEBUG 1
const int big = 1e5+7;
const int INF = 1e9+7;


//--------------------- Variable zone ------------------------
int start,finish,cnt = 0;
priority_queue<pi> q;
vector<pi> node[big];
vector<int> dis(big,0);
bool vis[big];


//--------------------- Works zone ------------------------

int cal(int a, ll k, int m){
    if(k == 0) return 1;
    ll x = k / 2;
    ll res = pow(a, x);
    cout << res << endl;
    res = res % m;
    res *= res;
    if(k % 2 == 0){
        return res % m;
    }
    else {
        return (res % m) * a;
    }
}

void sol() {
    int a, m;
    ll k;
    cin >> a >> k >> m;
    cout << cal(a, k, m);
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}