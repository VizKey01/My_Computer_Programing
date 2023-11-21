#include<bits/stdc++.h>
using namespace std;

void sol(){
    
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, cnt = 0;
    vector<int> v;
    cin >> n;
    for(int i = 0; i < n; i++){
        int tem;
        cin >> tem;
        if(cnt % 2 == 0)
            v.push_back(tem);
        else v.insert(v.begin(), tem);
        cnt++;
    }
    
    string s;
    getline(cin, s);
    //cin.ignore(numeric_limits<streamsize>::max(), '\n');
    //cout << s.size();
    for(int i = 0; i < s.size(); i++){
        int tem = s[i] - 48;
        if(cnt % 2 == 0)
            v.push_back(tem);
        else v.insert(v.begin(), tem);
    }
    while(true){
        int tem;
        cin >> tem;
        if(tem == -1) break;
        else if(cnt % 2 == 0)
            v.push_back(tem);
        else v.insert(v.begin(), tem);
        cnt++;
    }
    cout << '[';
    for(int i = 0; i < v.size(); i++){
        cout << v[i];
        if(i < v.size() - 1)cout << ", ";
    }
    cout << ']';
    return 0;    
}