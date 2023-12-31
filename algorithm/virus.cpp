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

void sol() {
    int n, m, base[2] = {0, 1};
    cin >> n >> m;
    m = 1 << m;
    cout << m << endl;
    nloop(i) {
        int cnt = 0, v[m], chk = 0;
        string ans;
        mloop(j){
            cin >> v[j];
            if(m == 2 && v[j] == base[j]) chk++;
            else if(j % 2 != 0 && v[j] != abs(v[j - 1] - 1)){
                ans = "no";cnt++;
            }
        }
        if(!cnt){
            if(chk != 2 && m == 2){
                cout << "no" << endl;
            }
            else cout << "yes" << endl;
        }
        else cout << ans << endl;

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