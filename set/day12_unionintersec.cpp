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
priority_queue<pi> q;
vector<pi> node[big];
vector<int> dis(big,0);
bool vis[big];


//--------------------- Works zone ------------------------
void no(){
    cout << "empty set" ;
}

void sol() {
    set<int> u;
    set<int> i;
    set<int> inters;
    set<int> d;
    string s, ss = "", in;

    getline(cin, s);
    //ig();
    int n = s.size();

    // first set
    nloop(v){
        if(s[v] == ' '){
            int x = stoi(ss);
            u.insert(x);
            d.insert(x);
            ss = "";
        }
        else ss += s[v];
    }

    int l = stoi(ss);
    d.insert(l);
    u.insert(l);

    set<int> tem;
    tem.insert(all(u));

    while(getline(cin, in)){
        ending(in);
        n = in.size(); 
        ss = "";
        nloop(j){
            if(in[j] == ' '){
                int x = stoi(ss);
                u.insert(x);
                i.insert(x);
                if(d.find(x) != d.end()) d.erase(x);
                ss = "";
                // cout << x << " ";
            }
            else ss += in[j];
        }

        //last element
        int x = stoi(ss);
        i.insert(x);
        u.insert(x);
        if(d.find(x) != d.end()) d.erase(x);

        set_intersection(tem.begin(), tem.end(), i.begin(), i.end(), inserter(inters, inters.begin()));
        tem.clear();
        tem.insert(inters.begin(), inters.end());
        i.clear();
        inters.clear();
    }

    cout << "U: ";
    if(u.empty()) no();
    else{
        aloop(u){
            cout << itr << " ";
        }
    }

    cout << endl << "I: ";
    if(tem.empty()) no();
    else{
        aloop(tem){
            cout << itr << " ";
        }
    }

    cout << endl << "D: ";
    if(d.empty()) no();
    else{
        aloop(d){
            cout << itr << " ";
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