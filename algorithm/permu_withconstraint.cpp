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

void cal(vector<int> &v, vector<int> &vm, int cnt, int n, vector<bool> &chk) {
    
    if(cnt == n) {
        aloop(v) 
            cout << itr << ' ';
        cout << endl;
        return ;
    }

    for(int i = 0; i < n; i++) {
        if(chk[i] == false && (vm[i] == - 1 || chk[vm[i]] == true)){
            // check element is not already used and no constraint
            v.push_back(i);
            chk[i] = true;
            cal(v, vm, cnt + 1, n, chk);
            v.pop_back(); // back tracking
            chk[i] = false; 
        }
    }
}

void sol() {
    int n ,m, cnt = 0;
    cin >> n >> m;
    vector<int> vm(n, -1);
    mloop(i) {
        int x, y;
        cin >> x >> y;
        vm[y] = x;
    }
    vector<int> v;
    vector<bool> chk(n, false);
    cal(v, vm, cnt, n, chk);
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}