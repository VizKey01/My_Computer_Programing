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
    int m,n;
    cin >> n;
    map<string, db> mp;
    string s;
    db temp, alls = 0, mx = -big;
    nloop(i){
        cin >> s >> temp;
        mp[s] = temp;
    }

    cin >> m;
    map<string, db> topsale;
    mloop(i){
        cin >> s >> temp;
        //check list
        if(mp.find(s) == mp.end()) continue;
        //set default
        if(topsale.find(s) == topsale.end()) topsale[s] = 0;
        
        db tom = mp[s];
        tom = tom * temp;
        topsale[s] += tom;
        alls += tom;
    }

    if(topsale.empty()) cout << "No ice cream sales";
    else {

        auto pr = max_element(topsale.begin(), topsale.end(), [](const auto &x, const auto &y) {
             return x.second < y.second;
        });

        // auto u = topsale.end();
        // u--;
        // u--;
        cout << "Total ice cream sales: " << alls << endl;
        cout << "Top sales: ";
        for(auto itr = topsale.begin(); itr != topsale.end(); ++itr){
            //cout << itr->fs << " " << itr->se << endl;
            if(itr->se == pr->se) cout << itr->fs << " ";
        }
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
Magnum 50
Cornetto 25
PaddlePop 15.50
AsianDelight 20
Calippo 15.00
7
Magnum 5
Magnum 5
Cookie 20
MamaTomYum 3
PaddlePop 3
Cornetto 20
AsianDelight 1

*/