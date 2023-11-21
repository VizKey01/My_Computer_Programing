#include <bits/stdc++.h>
using namespace std;

int sol(){
   
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    int n = s.size(), temp = 0;
    if(s[0] >= '0' && s[0] <= '9') temp = 1;
    cout << s[0];
    for(int i = 1; i < n;i++){
        if(temp == 1){
            if(s[i] < '0' || s[i] > '9'){
                temp = 0;
                cout << ", " << s[i];
            }
            else cout << s[i];
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            cout << ", " << s[i];
        }
        else if(s[i] >= '0' && s[i] <= '9'){
            temp = 1;
            cout << ", " << s[i];
        }
        
        else cout << s[i];
    }
    return 0;
}
