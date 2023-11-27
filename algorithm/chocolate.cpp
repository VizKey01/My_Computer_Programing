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
#define aloop(x) for(auto itr : (x))
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define pb(x) push_back(x);
#define fs first
#define se second
#define DEBUG 1
const ll big = 1e6+3;
const ll INF = 1e9+7;


//--------------------- Variable zone ------------------------
int start,finish;
queue<pi> q;
priority_queue<pi> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<pi> node[big];
vector<int> dis(big,0);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int i,j;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------

void sol() {
    ll n, m;
    cin >> n >> m;
    vector<ll> temp(m), dp(n + 1, 0);
    mloop(i)
        cin >> temp[i];

    sort(all(temp)); // optimize
    
    // base case
    dp[0] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < m; j++) {
            if(i >= temp[j]){
                dp[i] = (dp[i] + dp[i - temp[j]]) % big;
            }
        }
    }

    cout << dp[n];
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}