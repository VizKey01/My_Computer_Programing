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
#define kloop(x) for(int (x) = 0;(x) < k;(x)++)
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
   int i,j, height;
};


//--------------------- Works zone ------------------------

void sol() {
    // แผนที่ ร่าง ข้อมูล จุดเริ่ม
    int m, d, k, xs, ys, hs;
    vector<NODE> endpoint; 
    int xend, yend, hend;

    cin >> m >> d >> k >> xs >> ys >> hs;

    for(int i = 0; i < d; i++){ // จุดจบแต่ละร่าง
        cin >> xend >> yend >> hend;
        endpoint.push_back({xend, yend, hend});
    }
    
    vector<vector<int>> mp(m, vector<int>(m, -1)); // set map values
    int xi, yi, hi;

    // input height in the map
    kloop(i){
        cin >> xi >> yi >> hi;
        mp[xi - 1][yi - 1] = hi;
    }

    // start calculated
    aloop(endpoint) {
        int endx = itr.i, endy = itr.j, endvalue = itr.height;
        //qn.emplace(startx, starty, value);
        queue<NODE> qn;
        qn.emplace(xs, ys, hs);

        //visted map
        vector<vector<bool> > visted(m, vector<bool>(m ,false));

        // int dist[];        
        while(!qn.empty()){
            NODE temp = qn.front();
            qn.pop();

            if(temp.i == endx && temp.j == endy){
                
                break;
            }

            int n = 4;
            nloop(i){
                int x = temp.i + d4x[i];
                int y = temp.j + d4y[i]; 
                int val = temp.height;
                if(x >= 0 && y >= 0 && x < m && y < m && mp[x][y] != -1){
                    
                    mp[x][y] = -1; //visted
                }
            }
            

        }

    }

}

// void test() {

//     int m;
//     cin >> m;
    
    
//     mloop(i){
//         mloop(j){
//             cout << mp[i][j] << ' ';
//         }
//         cout << endl;
//     }
// }

int main() {
    stp();
    int tt = 1;
    while(tt--) {
        sol();
    }  
    return 0;
}