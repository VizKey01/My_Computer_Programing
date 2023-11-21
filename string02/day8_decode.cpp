#include <bits/stdc++.h>
using namespace std;

int sol()
{
   
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);
    string s, tem;
    
    
    while(getline(cin, s)) {
        //cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        
        //stringstream(tem) >> s;
        if(s == " ") return 0;
        int n = s.size(),tom = 0;
        char temp = 'a';
        for(int i = 0; i < n;i++){
            if(!isalpha(s[i]) && s[i] != ' ' && s[i] != ',' && s[i] != '\''
                && s[i] != '\"' && s[i] != '-' ){
                if(s[i] == temp){
                    temp = 'a';
                    tom = 0;
                }
                else {
                    temp = s[i];
                    tom = 1;
                }
            }
            else if(tom){
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
    
}
/*
@Hello@@
#How are you##
&END&&
*/