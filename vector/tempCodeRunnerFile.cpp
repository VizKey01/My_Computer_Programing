#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int,vector<int> >
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == -1) break;
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
    string s;
    vector<int> num;
    vector<pi> v;
    int nn;
    cin >> s;
    while(cin >> nn){
        ending(nn);
        num.push_back(nn);
    }

    int n = num.size();
    if(s == "first"){
        nloop(i){
            if(num[i] == -1) continue;
            vector<int> temp;
            int tem = num[i]; // set number
            for(int j=i+1; j<n; j++){
                if(num[j] != -1 && tem + num[j] <= 100){
                    temp.push_back(num[j]);
                    tem += num[j]; //add value
                    num[j] = -1; //mark index
                }
            }
            temp.push_back(num[i]); // add index value 
            num[i] = -1; // mark index

            sort(all(temp));
            v.push_back({tem, temp});
        }

    }
    else{

    }
    sort(all(v));
    int m = v.size();
    for(int i = m-1; i >= 0; i--){
        int N = (v[i].se).size();
        for(int j = 0; j < N; j++){
            cout << v[i].se[j] << ' ';
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