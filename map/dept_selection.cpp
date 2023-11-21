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
    int n, m;
    cin >> n;
    map<string, int> subject; 
    nloop(i){
        string s;
        int num;
        cin >> s >> num;
        subject[s] = num;
    }

    cin >> m;
    map<string, string> mp; //ans
    map<float, string> calgrade; // grade
    map<string, vector<string> > calsub; //sub
    mloop(i){
        string id,sub;
        float grade;
        cin >> id >> grade;
        for(int j = 0;j < 4; j++){
            cin >> sub;
            calsub[id].push_back(sub);
        }
        calgrade[grade] = id;
    }

    vector<pair<float, string> > v(all(calgrade));
    reverse(all(v));

    // aloop(v){
    //     cout << itr.first << ' ' << itr.second << endl;
    // }

    aloop(v){
        string id = itr.se, realsub;
        for(auto it : calsub[id]){
            int num = subject[it];
            if(num != 0){
                mp[id] = it;
                subject[it]--;
                break;
            }
        }
    }
    
    aloop(mp){
        cout << itr.fs << ' ' << itr.se << endl;
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