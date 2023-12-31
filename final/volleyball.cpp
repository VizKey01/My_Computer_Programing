#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == "*") break;
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
    int n;
    cin >> n;
    nloop(i){
        unordered_map<string, pair<int , vector<int> > > mp;
        string team1, team2, x;
        cin >> team1 >> team2;
        mp[team1].fs = 0;
        mp[team2].fs = 0;
        int score[2] = {0,0},in = 0;

        while(cin >> x){
            ending(x);
            x += '-', in = 0;
            string temp = "";
            aloop(x){
                if(itr == '-'){
                    score[in] = stoi(temp);
                    in = 1;
                    temp = "";
                }
                else{
                    temp += itr;
                }
            }

            if(score[0] > score[1]){
                mp[team1].fs += 1;
            // cout << mp[team1].fs << endl;
                
            }
            else{
                mp[team2].fs += 1;
            }

            mp[team1].se.push_back(score[0]);
            mp[team2].se.push_back(score[1]);
            // cout << mp[team1].se.front() << endl;
            // cout << mp[team2].se.front() << endl;
        }
        string Team1=team1, Team2= team2;
        if(mp[team1].fs > mp[team2].fs) Team1 = '*' + team1;
        else Team2 = '*' + team2;
        //print
        cout << Team1 << ' ' << mp[team1].fs << " [ ";
        int m = mp[team1].se.size();
        for(int i = 0;i < m;i++){
            cout << mp[team1].se[i] << ' ';
        }
        cout <<"]"<< endl;
        cout << Team2 << ' ' << mp[team2].fs << " [ ";
        for(int i = 0;i < m;i++){
            cout << mp[team2].se[i] << ' ';
        }
        cout << "]" <<  endl;
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