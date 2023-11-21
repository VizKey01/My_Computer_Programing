#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,int>
#define pis pair<string, vector<string> >
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
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

void sol() {
    string s,ss;
    unordered_map<string, string > mp;
    vector<string> v; 
    while(cin >> s){
        if(DEBUG && s == "x"){
            break;
        }
        cin >> ss;
        mp[ss] += s + ' ';
        if(find(v.begin(), v.end(), ss) == v.end())
            v.push_back(ss);
        
        //cout << v.front() << endl;
    }
    
    aloop(v){
        cout << itr << ": " << mp[itr]  << endl;
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
