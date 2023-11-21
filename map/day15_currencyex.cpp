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
#define DEBUG 0
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
    int n;
    cin >> n;
    map<string, db> mp;
    //set default
    mp["THB"] = 1;
    
    nloop(i){
        string currency;
        db val;
        cin >> currency >> val;
        mp[currency] = val;
    }
    int amount;
    string curr, tom;
    cin >> amount >> curr;
    cout << amount << " " << curr;
    tom = curr;
    //set currency
    db temp, rate = mp[curr];
    while(cin >> curr) {
        if(DEBUG && curr == "x") break;
        cout << " -> ";
        //rate change
        temp = mp[curr]; 
        
        amount = int(amount * rate / temp);
        cout << amount << " " << curr ; 
        
        //save current rate
        rate = temp;
    
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