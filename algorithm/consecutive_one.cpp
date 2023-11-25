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

void cal(vector<string> &v, string temp, int num, int cnt, int n, int m, bool chk) {
    if(num == n) { // counter complete
        if(cnt == m || chk) cout << temp << endl; 
    }
    else {
        if(cnt == m) chk = true; // complete bits
        num++;
        cnt++;

        cal(v, temp + '0', num, 0, n, m, chk); // temp 000 
        cal(v, temp + '1', num, cnt, n, m, chk); 
        /*
        temp num cnt
        0 1 0   01 2 1 010 3 1
        00 2 0  011 2 2 011 3 2
        000 3 0  

        temp num cnt
        1 1 1
        11 2 2
        111 3 3
        */
    }
}

void sol() {
    int n ,m, cnt = 0;
    string temp = "";
    cin >> n >> m;
    vector<string> v;
    cal(v, temp, 0, cnt, n, m, false);
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}