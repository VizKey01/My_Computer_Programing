#include <bits/stdc++.h>
using namespace std;

bool check1(int a, int A, int num){
    if(a && A && num) return true;
    return false;
}

bool check2(int a, int A, int num, int sara){
    if(a && A && num && sara) return true;
    return false;
}

void sol(){
    string d;
    while(true){
        getline(cin, d);
        //cout << d << endl;
        if(d == "")break;
        int n = d.size(), cnt = 0, a = 0, A = 0, num = 0, sara = 0;
        if(n < 8) cout << ">> invalid" << endl;
        else{
            for(int i = 0; i < n; i++){
                if(d[i] >= 'a' && d[i] <= 'z') a = 1;
                else if(d[i] >= 'A' && d[i] <= 'Z') A = 1;
                else if(d[i] >= '0' && d[i] <= '9') num = 1;
                else sara = 1;
            }
            if(n >= 12 && check2(a, A, num, sara)){
                cout << ">> strong" << endl;
            }
            else if (n >= 8 &&  check1(a, A, num)){
                cout << ">> weak" << endl;
            }
            else{
                cout << ">> invalid" << endl;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    string s;
    sol();
    /*
    getline(cin, s);
    int n = s.size(), cnt = 0, a = 0, A = 0, num = 0, sara = 0;
    for(int i = 0; i < n;i++){
        for(int j = i;j < n;j++){
            if(s[j] >= 'a' && s[j] <= 'z') a = 1;
            else if(s[j] >= 'A' && s[j] <= 'Z') A = 1;
            else if(s[j] >= '0' && s[j] <= '9') num = 1;
            else sara = 1;
            
            if(s[j] == '\n'){
                i = j+1;
                if(cnt >= 12 && check2(a, A, num, sara)){
                    cnt = 0;
                    cout << ">> strong" << endl;
                }
                else if (cnt >= 8 &&  check1(a, A, num)){
                    cnt = 0;
                    cout << ">> weak" << endl;
                }
                else{
                    cnt = 0;
                    cout << ">> invalid" << endl;
                }
                break;
            }
            cnt++;
        }
        
    }
    */
    return 0;
}