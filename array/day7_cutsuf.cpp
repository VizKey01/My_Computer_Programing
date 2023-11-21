#include <bits/stdc++.h>
using namespace std;
#define s(); ios_base::sync_with_stdio(0);cin.tie(0); 

void cut(string card[], int n){
    string temp[n];
    int cnt = 0;
    for(int i = n/2; i<n; i++){
        temp[cnt] += card[i];
        temp[cnt] += " ";
        cnt++;
    }
    for(int i = 0; i<n/2; i++){
        temp[cnt] += card[i];
        temp[cnt] += " ";
        cnt++; 
    }
    for(int i = 0; i<n; i++){
        card[i] = temp[i];
        cout << card[i] << endl;
    }
}

void suff(string card[], int n){

}

int main(){
    s();
    int n;
    cin >> n;
    string str[n];
    for(int i = 0; i < n; i++){
        cin >> str[i];
    }
    string command;
    cin.ignore(256, '\n');
    getline(cin, command);
    
    for(int i = 0; i < command.size(); i++){
        if(command[i] == 'C'){
            string temp[n];
            int cnt = n/2;
            for(int j = 0; j < n; j++){
                if(j == n / 2){
                    cnt = 0;
                }
                temp[cnt] = str[j];
                cnt++;
            }
            //change val
            for(int j = 0; j<n; j++){
                str[j] = temp[j];
            }
        }
        else if(command[i] == 'S'){
           // cout << 'S' << endl;
            // //suff(str, n);
            int cnt = 0;
            string temp1[n/2], temp2[n/2];
            for(int j = 0;j < n;j++){
               if(j >= n/2){
                if(j == n/2)cnt = 0;
                temp2[cnt] = str[j];
               }
               else temp1[cnt] = str[j];
               cnt++;
            }/**/
            // for(int k = 0;k < n/2;k++){
            //     cout << temp2[k] << " " << temp1[k] << endl;
            // }
            //change val
            int cnt1=0, cnt2 = 0;
            for(int j = 0; j<n; j++){
               if(j % 2 == 0){
                str[j] = temp1[cnt2];
                cnt2++;
               }
               else{
                str[j] = temp2[cnt1];
                cnt1++;
               }
            }
        }
    // for(int k = 0;k < n;k++){
    //     cout << str[k] << " ";
    // }
    //cout << endl;
    }

    for(int i = 0;i < n;i++){
        cout << str[i] << " ";
    }
    return 0;    
}