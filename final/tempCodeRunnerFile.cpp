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
    int n,m;
    cin >> n >> m;
    map<string, vector<string> > mp;
    map<string, string> mps;
    vector<string> v;
    string key, val;
    nloop(i){
        cin >> val >> key;
        mp[key].push_back(val);
        mps[val]= key;
    }
    int command;
    mloop(i){
        cin >> command;
        cin >> val >> key;
        if(command == 1){
            //delete old
            string name = mps[val];
            aloop(mp[name]){
                v.push_back(itr);
            }

            v.erase(remove(all(v), val), v.end());
            
            mp[name] = v;
            
            //add new name
            mps[val] = key;
            //push new 
            mp[key].push_back(val);
        }
        else{
            vector<string> ss;
            aloop(mp[val]){
                mp[key].push_back(itr);
            }
            mp.erase(val);
        }
    }

    aloop(mp){
        sort(all(itr.se));
        cout << itr.fs << ": ";
        for(auto it : itr.se){
            cout << it << ' ';
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