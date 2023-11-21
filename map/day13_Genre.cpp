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

void test_works(){
    cout << stoi("002") << endl;
    cout << to_string(132) + ':' << endl;
}
//--------- Global variables --------------
        multimap<int, string> MM;
//-----------------------------------------
void sortt(map<string, int>& M){

    for (auto& it : M) {
        MM.insert({ it.second, it.first });
    }
}

void sol() {
    
    string song,s,ty,time;
    map<string, int> mp;
    while(cin >> song){
        ending(song);
        cin >> s >> ty >> time;
        int ct = 0, alls = 0, mit, sec;
        //set default
        if(mp.find(ty) == mp.end()) mp[ty] = 0;


        string temp = "";
        for(auto it : time){
            //change mode
            if(it == ':'){
                mit = stoi(temp);
                temp = "";    
            }
            else temp += it;        
        }
        sec = stoi(temp);
        alls = (mit * 60) + sec;
        mp[ty] += alls;
    }
    int cnt = 0;
    sortt(mp);
    for(auto it = MM.rbegin(); it != MM.rend(); it++){
        if(cnt == 3) break;
        string sum = "";
        int temp = it->fs;
        if(DEBUG) cout << "::" << temp << " ";
        int mit = temp / 60;sum += to_string(mit) + ':';
        int sec = (temp - (mit*60));sum += to_string(sec);

        cout << it->se << " --> " << sum << endl;
        cnt++;
    }
}

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        // test_works();
        sol();
    }  
    return 0;
}