#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define nloop(x) for(int (x) = 0;(x) < n;(x)++)
#define mloop(x) for(int (x) = 0;(x) < m;(x)++)
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
    cin >> s;
    map <string, vector<string> > mp;
    
    while(cin >> ss){
        if(DEBUG && ss == "x") break;
        mp[s].push_back(ss);
        mp[ss].push_back(s);

        cin >> s;
    }
    //Not have path case
    mp[s].push_back(s);
    
    // cout << s;
    //store path
    map<string, string> path;

    for(auto itr : mp[s]){
        //first check
        path[itr] = itr;
        
        //if(DEBUG) cout << itr << endl;
        
        for(auto it : mp[itr]){
            path[it] = it;
        }
    }

    //sort(all(path));
    for(auto itr : path)
        cout << itr.fs << endl;
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
Siam ChitLom
ChitLom PhloenChit
PhloenChit Nana
Siam NationalStadium
Ratchadamri Siam
Siam PhayaThai
Ratchadamri SalaDaeng
ThongLo Ekkamai
Ekkamai ThongLo
Siam
*/