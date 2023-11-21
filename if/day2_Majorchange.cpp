#include <bits/stdc++.h>
using namespace std;

int main(){
    string s[2];
    float gpax[2];
    char com[2],c1[2],c2[2];;
    int cnt[2] = {0,0};
    cin >> s[0] >> gpax[0] >> com[0] >> c1[0] >> c2[0];
    cin >> s[1] >> gpax[1] >> com[1] >> c1[1] >> c2[1];
    for(int i = 0; i < 2;i++){
        //1
        if(com[i] == 'A' && (c1[i] <= 'C' && c2[i] <= 'C')){
            cnt[i]++;
        }
    }
    if(cnt[0] > cnt[1])cout << s[0];
    else if(cnt[0] < cnt[1]) cout << s[1];
    else if(cnt[0] == 0 && cnt[1] == 0){cout << "None";}
    else{
        //2.1
        if(gpax[0] > gpax[1])cout << s[0];
        else if(gpax[0] < gpax[1]) cout << s[1];
        //2.2
        else{
            if(c1[0] < c1[1])cout << s[0];
            else if(c1[0] > c1[1]) cout << s[1];
            //2.3
            else{
                if(c2[0] < c2[1])cout << s[0];
                else if(c2[0] > c2[1]) cout << s[1];
                //2.4
                else{
                    cout << "Both";
                }
            }
        }
    }
    
}