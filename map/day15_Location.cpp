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
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define fs first
#define se second
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
    unordered_map<string, vector<string> > mp;
    int n;
    cin >> n;
    //input
    nloop(i){
        string s, ss;
        cin >> s;
        while(cin >> ss) {
            if(ss == "*") break;
            mp[s].push_back(ss);
        }
    }

    string s = "";
    //main id
    cin >> s;
    
    vector<string> temp;
    n = mp[s].size();
    nloop(i){
        temp.push_back(mp[s][i]);
        // cout << temp.back() << endl;
    }
    vector<pis> v(all(mp)); 
    reverse(all(v));
    int tom = 0;
    for(auto itr : v){
        string x = itr.fs;
        cnt = 0;
        //cout <<  ":" << x << endl;
        if(x == s) continue;

        for(auto itr2 : temp){
            if(cnt == 1)break;
            for(auto itr3 : mp[x]){
                if(itr3 == itr2){
                    cout << ">> " << x << endl;
                    cnt = 1;tom++;
                    break;
                }
            }
        }
    }
    if(cnt == 0 && tom == 0) cout << ">> Not Found" << endl;

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
6
51234621 A B D E F *
427613829 B D G H I *
38216542 Z B D J *
423212822 AA B1 C3 D *
4126548 J Z3 *
98871973331 Q M N *
4126548

*/