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
    string s,ss;
    multimap<int, char> mp;
    map<char, int> mpc;
    mp.insert({0, ' '});
    mp.insert({2, 'a'});mp.insert({3, 'd'});
    mp.insert({2, 'b'});mp.insert({3, 'e'});
    mp.insert({2, 'c'});mp.insert({3, 'f'});
    mp.insert({4, 'g'});mp.insert({5, 'j'});
    mp.insert({4, 'h'});mp.insert({5, 'k'});
    mp.insert({4, 'i'});mp.insert({5, 'l'});
    mp.insert({6, 'm'});mp.insert({7, 'p'});
    mp.insert({6, 'n'});mp.insert({7, 'q'});
    mp.insert({6, 'o'});mp.insert({7, 'r'});mp.insert({7, 's'});
    mp.insert({8, 't'});mp.insert({9, 'w'});
    mp.insert({8, 'u'});mp.insert({9, 'x'});
    mp.insert({8, 'v'});mp.insert({9, 'y'});mp.insert({9, 'z'});
    mpc.insert({' ', 0});
    mpc.insert({'a', 2});mpc.insert({'d', 3});
    mpc.insert({'b', 2});mpc.insert({'e', 3});
    mpc.insert({'c', 2});mpc.insert({'f', 3});
    mpc.insert({'g', 4});mpc.insert({'j', 5});
    mpc.insert({'h', 4});mpc.insert({'k', 5});
    mpc.insert({'i', 4});mpc.insert({'l', 5});
    mpc.insert({'m', 6});mpc.insert({'p', 7});
    mpc.insert({'n', 6});mpc.insert({'q', 7});
    mpc.insert({'o', 6});mpc.insert({'r', 7});mpc.insert({'s', 7});
    mpc.insert({'t', 8});mpc.insert({'w', 9});
    mpc.insert({'u', 8});mpc.insert({'x', 9});
    mpc.insert({'v', 8});mpc.insert({'y', 9});mpc.insert({'z', 9});
                // for(auto itr = mp.find(7); itr != mp.end(); itr++){
                //     cout << itr->se;
                //     if(itr->se == 's'){
                //         break;
                //     }
                // }
    

    while(getline(cin, ss)){
        ending(ss);
        s = ss.substr(0,3);
        ss = ss.substr(4,ss.length());
        cout << ">> ";
        if(s == "T2K"){
            transform(all(ss), ss.begin(), ::tolower);
            for(int i = 0; i < ss.length(); i++){
                if(!isalpha(ss[i]) && ss[i] != ' ') continue;
                char c = ss[i];
                int temo = mpc[c];
                for(auto itr = mp.find(temo); itr != mp.end(); itr++){
                        cout << itr->fs;
                        if(ss[i] == itr->se){
                            break;
                        }
                }
                cout << ' ';
            }
        }
        else{
            ss += ' ';
            map<int, int> mpp;
            int n = ss.size(), num = 0;
            for(int i = 0;i < n;i++){
                if(ss[i] == ' '){
                    int temp = 1;
                    // cout << "ck";
                    for(auto itr = mp.find(num); itr != mp.end(); itr++){
                        if(temp == mpp[num]){
                            cout << itr->se;
                            break;
                        }
                        temp++;
                    }
                    mpp[num] = 0;
                }
                else{
                    num = ss[i] - '0';
                    mpp[num]++;
                }
            }
            
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