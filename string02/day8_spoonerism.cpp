#include <bits/stdc++.h>
using namespace std;

bool sol(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') 
        return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin, s);
    int n = s.size(), word = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == ' ') word++;
    }
    //first word
    int tf = 0, tl = 0, temp = 0;
    string sf, sl;
    for(int i = 0; i < n; i++){
        if(temp) break;
        if(sol(s[i])){
            for(int j = i; j < n; j++){
                if(s[j] == ' '){
                    temp++, tf = j;
                    break;
                }
                sf += s[j];
            }
        }
        cout << s[i];
    }

    //last word
    int cnt = 0;
    temp = 0;
    for(int i = tf; i < n; i++){
        if(temp) break;
        if(s[i] == ' ')cnt++;
        if(cnt == word){
            tl = i;
            for(int j = i+1; j < n; j++){
                if(temp) break;
                if(sol(s[j])){
                    for(int k = j; k < n; k++){
                        sl += s[k];
                    }
                    temp++;
                }
            }
        }
        //cout << s[i];
    }
    //output
    cout << sl;

    for(int i = tf; i < tl; i++){
        cout << s[i];
    }
    
    cout << sf;
    return 0;
}
