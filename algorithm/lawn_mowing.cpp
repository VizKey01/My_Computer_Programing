#include <bits/stdc++.h>
using namespace std;

//--------------------- define zone ------------------------
#define ll long long
#define db double
#define pi pair<int, int>
#define pis pair<string, string>
#define stp() ios_base::sync_with_stdio(false);cin.tie(0);
#define ending(x) if((x) == "x") break;
#define nloop(x) for(int (x) = 0;(x) < n; ++(x))
#define mloop(x) for(int (x) = 0;(x) < m; ++(x))
#define aloop(x) for(auto &itr : (x))
#define all(x) (x).begin(), (x).end() 
#define ig() cin.ignore(256, '\n');
#define pb(x) push_back(x);
#define fs first
#define se second
#define DEBUG 1
const int big = 1e6+7;
const ll INF = 1e9+7;


//--------------------- Variable zone ------------------------
int start,finish;
priority_queue<pi, vector<pi>, greater<pi>> pq;
vector<int> d8x = {1, -1, 0, 0, 1, -1, 1, -1};
vector<int> d8y = {0, 0, 1, -1, 1, -1, -1, 1};
vector<int> d4x = {0, 1, 0, -1};
vector<int> d4y = {1, 0, -1, 0};
vector<vector<int>> node(big, vector<int>());
vector<pi> node2[big];
vector<int> dis(big,0);
vector<bool> vis(big,0);

//set up node (can be +level)
struct NODE {
   int u, v, w;
};

queue<NODE> qn;

//--------------------- Works zone ------------------------
int A[big];

void sol() {
    int n, m, k;
    cin >> n >> m >> k;
    for(int i = 1 ;i <= n ;i++){
        cin >> A[i];
        A[i] += A[i - 1];
        // cout << A[i] << " "; 
    }
    mloop(i) {
        int L, r = n, ans = 0, money;
        cin >> L >> money;
        L++;
        int l = L;
        while(l <= r) {
            int mid = (l + r) / 2;
            if(A[mid] - A[L - 1] + (mid - L + 1) * k <= money) {
                l = mid + 1 ,ans = A[mid] - A[L - 1];
            }
            else r = mid - 1;
        }

        cout << ans << '\n';
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