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
queue<int> q;
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
    int n, k, v;
    cin >> n >> k >> v;
    list<int> l(n);
    
    for(auto &itr : l){
        cin >> itr;
    }
    list<int>::iterator it = l.insert(next(l.begin(), k), 1 , v); 
    // it = l.insert(it, 1, v);

    int cnk = 0;

    auto itr = it; // first element
    
    while(!l.empty()){
        int bf = 0, af = 0, cnt = 0;
        while(v == *(++itr)) af++;
        // itr = it;// reset iterator
        while(v == *(--it)) bf++;
        it++;

        if(af + bf >= 2 && (bf > 0 || cnk == 0)){ // bf > 0 ต้องชนกัน
            for(int i = 0; i < bf + af + 1; i++){
                // cout << "erase" << i << " :  " << *it << endl;
                it = l.erase(it);
            }
            v = *it;
        }
        else break; // not in any condition

        cnk++; // for first time condition
    }

    for(auto itr : l){
        cout << itr << " ";
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