#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == -101) break;
#define nloop(x) for(int (x) = 0;(x) < n;(x)++)
#define mloop(x) for(int (x) = 0;(x) < m;(x)++)
#define aloop(x) for(auto itr : (x))
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
    int tem, num, temp, cnt = 0, ans = 0;
    cin >> tem;
    vector<int> v;
    set<int> s;
    // cin >> temp;
    // s.insert(temp);
    while(cin >> num) {
        ending(num);
        if(num > tem) continue;
        int div = tem - num;
        if(s.find(div) != s.end()){
            if(DEBUG) cout << num << " " << div << endl;
            s.erase(div);
            cnt++;
        }

        else s.insert(num);
            // if(num + itr == tem){
            //     s.erase(itr);
            //     s.erase(num);
            //     cnt++;
            //     break;
            // }
    }

    cout << cnt;
    //int n = v.size();
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}