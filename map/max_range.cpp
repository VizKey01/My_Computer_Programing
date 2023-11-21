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
    int temp = -big, indf = 0, inds = 0, cnt = 0, mx = -big;
    multimap<int, int> count;
    multimap<int, pi> mp;
    string s;
    getline(cin, s);
    s += 'z';
    int n = s.size(),m = 0;
    vector<int> num;
    temp = s[0] - '0';
    nloop(i){
        int x = s[i] - '0';
        num.push_back(x);
        if(temp != x || s[i] == 'z'){
            count.emplace(temp, cnt);
            mx = max(mx, cnt);
            cnt = 0;
        }
        cnt++;
        temp = x;
        i++;
        m++;
    }
    num.push_back(-999),m++;

    // aloop(count){
    //     cout << itr.fs << " " << itr.se << endl;        
    // }
    cnt = 0;
    temp = num[0];
    mloop(i){
        // cout << num[i] << " ";
        
        if(temp != num[i]){
            if(cnt == mx){
                mp.emplace(temp , make_pair(indf, i));
            }
            cnt = 0;
            indf = i;
        }
        cnt++;
        temp = num[i];
    }

    
    aloop(mp){
        cout << itr.fs << " --> x[ " << itr.se.fs << " : " << itr.se.se << " ]" << endl;
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