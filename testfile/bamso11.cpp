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
    int n, m;
    cin >> n >> m;

    vector<string> board(m);
    vector<vector<int>> resultBoard(n, vector<int>(m, 0));

    for (int i = 0; i < m; i++) {
        cin >> board[i];
    }

    int bombCount = 0;

    // Iterate through the board to count bombs and mark explosive areas
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (board[i][j] == '1') {
                bombCount++;
                resultBoard[i][j] = -1;
                for (int dx = -1; dx <= 1; dx++) {
                    for (int dy = -1; dy <= 1; dy++) {
                        int newX = i + dx;
                        int newY = j + dy;
                        if (newX >= 0 && newX < n && newY >= 0 && newY < m && resultBoard[newX][newY] != -1) {
                            resultBoard[newX][newY]++;
                        }
                    }
                }
            }
        }
    }

    // Output the number of bombs
    cout << bombCount << endl;

    // Output the result board with bombs and counts
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (resultBoard[i][j] == -1) {
                cout << 'x';
            } else if (resultBoard[i][j] == 0) {
                cout << '-';
            } else {
                cout << resultBoard[i][j];
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