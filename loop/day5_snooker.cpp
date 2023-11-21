#include <bits/stdc++.h>
using namespace std;


void test(){
    string s = "hello world";
    cout << s.find("o");
}

void sol1(){
    int x;
    //test();

    //scanf("%d",&x);
    cin >> x;
    x += 1;
    int lol = x;
    bool sol = true;

    while(sol){
        if(x == 0){
            break;
        }
        string s;
        getline(cin,s);
        //temp for ans
        int ans_temp = 0, ans = 1;
        //check first ball
        if(s[0] != 'R'){
            //cout << 101 << endl;
            ans_temp++;
        }
        else{
            string snk = "YGNBPKR";
            int score[] = {2,3,4,5,6,7,1}; 
            int n = s.size(), cnt = 1, ball = 0, temp = 0;
            for(int i = 1;i < n;i++){
                if(s[i] == ' ')continue;
                //check duo
                if(s[i] == 'R'){
                    if(cnt == 1){
                        //cout << 202 << endl;
                        //cout << "WRONG_INPUT" << endl;
                        ans_temp++;
                        break;
                    }
                    else {//reset duo
                        //cout << "RESET_INPUT" << endl;
                        cnt = 1;
                        ball = 0;
                    }
                }
                else ball++; 
                        
                if(ball == 2 && s[i] != 'Y'){
                    // cout << s[i] << " " << ball << endl;  
                    // cout << 404 << endl;
                    ans_temp++;
                    break;
                }
                else if(ball >= 2){
                    cnt = 1;
                    //check ball lines
                    if(s[i] == 'Y' && ball == 2) temp = -1;
                    //cout << s[i] << " " << snk[temp + 1] << endl;
                    if(snk[temp + 1] != s[i] || s[i] == 'R'){
                        
                        //cout << 303 << endl;
                        //cout << "WRONG_INPUT" << endl;
                        ans_temp++;
                        break;
                    }
                }
                
                //find char
                int tem = snk.find(s[i]);
                //store lastest ball
                temp = tem;
                //reset duo
                if(ball < 2)cnt = 0;
                //add score
                ans += score[tem];
            }
            if(ans_temp == 0)
                cout << ans << endl;
        }
        if(ans_temp != 0 && lol != x){
            cout << "WRONG_INPUT" << endl;
        } 
        x--;
    }
}
/*
void sol2(){
    cin.ignore(0);
    int x;
    string in,G = "WRONG_INPUT";
    cin >> x;
    while(true){
        if(x == 0) break;
        if(in[i])
        getline(cin, in);
        int R = 0, ball = 0, cnt = 0;
        if(in[0] != 'R'){
            cout << G << endl;
        }
        else if(in[0] == 'R'){
            if(R == 0)
            else 
        }
        else{
            int n = in.size();
            for(int i = 0;i < n;i++){
                if(in[i] == ' ') continue;

            }
        }
        
        x--;
    }
}
*/

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    sol1();
    //sol2();
    return 0;
}

/*
8
R
K R
R R Y
R B P G
R B R K Y B
R K R K R
R B Y G N B
R B Y G N B P K Y
*/