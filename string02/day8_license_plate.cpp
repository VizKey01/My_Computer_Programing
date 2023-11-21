#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int num, ber = 0;
    cin >> s >> num;
    for(int i = 4; i < 7;i++){
        ber += (s[i] - '0') * pow(10, 6-i);
    }

    int round = (ber + num) / 1000;
    ber = (ber + num) % 1000;

    //cout << ber;
    //cout << ber << " " << round << endl;
    for(int i = 0; i < round; i++){
        if(s[2] == 'Z'){
            //check s[1]
            char after = s[1] + 1;
            if(after > 'Z'){
                s[0]++;
                s[1] = 'A';
                s[2] = 'A';
            }
            else{ //check s[2]
                s[1]++;
                s[2] = 'A';
            }
        }
        else s[2]++;
    }

    if(ber < 100){
        for(int i = 4; i < 7;i++){
            int ck = ber / pow(10,6 - i);
            if(ck == 0) s[i] = '0';
            else s[i] = (ck%10) + '0';
            //cout << ck << " " << s[i] << endl;
        }
        cout << s;
    }
    else{
        for(int i = 0; i < 4; i++)
            cout << s[i];
        cout << ber;
    }
    
    return 0;
}
/*
0AA-000
899
*/