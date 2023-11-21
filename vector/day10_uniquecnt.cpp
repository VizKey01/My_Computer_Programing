#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    vector<int> v,V;
    int temp;
    while (cin >> temp){
        //if(temp == -1)break;
        v.push_back(temp);
    }
    int n, tem = -1e5, cnt = 1;
    sort(v.begin(), v.end());
    V.push_back(v[0]);
    for(int i = 1; i < v.size(); i++){
        int ck = v[i];
        //cout << ck << endl;     
        if(find(V.begin(), V.end(), ck) == V.end()){
            cnt++;
            V.push_back(v[i]);
        }
    }
    n = V.size();
    if(n > 10)n = 10;
    cout << cnt << endl;
    for(int i = 0; i < n; i++){
        cout << V[i] << " ";
    }

}