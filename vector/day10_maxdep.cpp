#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    vector<int> v;
    int temp;
    while(cin >> temp){
        if(temp == -1)break;
        v.push_back(temp);
    }
    int n = v.size(), cnt = 1, mx = -10000, pos = 0, tem = 0, fpos = 0, lpos = 0;
    vector<tuple <int, int, int, int> > V(n);
    //num key start end
    temp = v[0];

    for(int i = 1; i < n; i++) {
        if(temp != v[i]) { //reset
            V[pos] = make_tuple(cnt, temp, fpos, lpos);
            max(mx, cnt);
            temp = v[i];
            pos++, cnt = 1, fpos = i;
        }
        else if(i == n-1){
            V[pos] = make_tuple(cnt, temp, fpos, i);
        }
        else {
            lpos = i;
            cnt++;
        }  
    }

    sort(V.begin(), V.end());
    for(int i = 0; i < pos; i++) {
        if(get<0>(V[i]) == mx){
            cout << get<1>(V[i]) << " --> x[ " << get<2>(V[i]) << " : " << get<3>(V[i]) << " ]" << endl; 
        }
    }
    return 0;    
}
/*
0 1 2 3 9 9 9 9 5 6 
*/