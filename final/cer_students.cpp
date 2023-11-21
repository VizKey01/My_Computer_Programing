#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == "x") break;
#define nloop(x) for(ll (x) = 0;(x) < n;(x)++)
#define mloop(x) for(ll (x) = 0;(x) < m;(x)++)
#define aloop(x) for(auto itr : (x))
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define fs first
#define se second
#define DEBUG 1
const int big = 1e5+7;
const ll INF = 1e9+7;


//--------------------- Variable zone ------------------------
ll start,finish,cnt = 0;
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
    ll n,m;
    vector<ll> v;
    map<string, ll> mp;
    map<string, ll> mps;
    cin >> n;
    nloop(i){
        string name;
        ll val;
        cin >> name >> val;
        v.push_back(val);
        // cout << mp[name] << endl;
        if(mp[name] <= val)
            mp[name] = val;
    }

    sort(all(v), greater<ll>());

    cin >> m;
    // cout << mp.size() << endl;
    ll y = mp.size();
    mloop(i){
        ll num = v[i];
        if(cnt == y) break;
        cout << num << ' ';
        aloop(mp){
            if(cnt == y) break;
            if(itr.se == num) {
                cout << itr.fs << ' ';
                cnt++;
            }

        }
        
        cout << endl;
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

5
D 80
F 90
C 80
B 80
A 80
3
*/