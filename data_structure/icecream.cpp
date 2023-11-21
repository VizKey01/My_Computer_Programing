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
const int big = 1e5;
const int INF = 1e9+7;


//--------------------- Variable zone ------------------------
int start,finish,cnt = 0;
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
    int n, m, start, temp = 0;
    cin >> n >> m >> start;
    vector<int> v(big, 0);
    map<int, int> rate;
    nloop(i){
        int day, pp;
        cin >> day >> pp;
        rate[day] = pp;
    }
    //set start
    v[0] = start, temp = start;
    for(int i=1; i<=100000;i++){
        if(rate[i] != 0) temp = rate[i];
        v[i] = v[i - 1] + temp;
    }

    mloop(i){
        int p, x, cnt = 0;
        cin >> p >> x;
        cnt = v[x] + p;
        if(p <= v[x]) cnt = p;

        int ans = lower_bound(all(v), cnt) - v.begin();
        
        cout << ans << " ";
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