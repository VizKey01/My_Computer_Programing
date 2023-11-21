#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    vector<int> v;
    int n, m;
    cin >> n >> m;
    int tem = 0, cnt = 0, time = 0, temp = m, num = 0;
    if(m == 0) {cout << 0;return 0;}
    bool first = 1;
    while(tem < n) {
        if(cnt == m) {
            tem += pow(2,time) ;
            time++;
            if(first) first = 0;
            else m = m * 2;
            cnt = 0;
            // v.push_back(tem);
            // num++;
        }
        else{
            v.push_back(tem);
            tem++;
            cnt++;
            num++;
        }
        // cout << tem<< " : " << cnt << ": \n";
    }
    cout << num << endl;
    for(auto it : v) 
            cout << it << " ";
    return 0;
}