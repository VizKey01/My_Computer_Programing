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
priority_queue<pi> q;
vector<pi> node[big];
vector<int> dis(big,0);
bool vis[big];


//--------------------- Works zone ------------------------

char num[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};

string con(int x, string s) {
   if(x == 0) {
        if(s.empty()) return "0";
        return s;
    }
   int index = x % 16;
   s.insert(0, 1, num[index]);
   x /= 16;
   return con(x, s);
}

void sol() {
    int x;
    while(cin >> x) {
        ending(x);
        string s = "";
        cout << x << " -> " << con(x, s) << endl;
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