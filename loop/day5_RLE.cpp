#include <bits/stdc++.h>
using namespace std;

#define DEBUG true

void test(){
    int temp = 0,cnt = 0;
    string s;
    cin >> s;
    int n = s.size();
    char c = s[0];
    map<int, char> mp;
    for(int i = 0; i < n;i++){
        if(s[i] != c){
            cout << mp[i] << " ";
        }
        else mp[i]++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int temp = 0,cnt = 0;
    string s;
    cin >> s;
    int n = s.size();
    char c = s[0];
    for(int i = 0; i < n;i++){
        if(s[i] != c){
            temp++;
            c = s[i];
            cout << cnt << " ";
            cnt = 1;
            temp = 0;
        }
        else cnt++;

        if(temp == 0){
            cout << c << " ";
            temp++;
        }
    }
    cout << cnt;
    return 0;    
}