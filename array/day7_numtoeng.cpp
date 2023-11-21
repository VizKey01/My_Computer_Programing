#include <bits/stdc++.h>
using namespace std;

#define ll long long
string number[] = {"zero", "one", "two", "three", "four", "five"
                    , "six", "seven", "eight", "nine", " ten"};
string digits[] = {"0","0","0","thousand","0","0", "million"
                    ,"0","0", "billion","0","0", "trillion"};
string hundreds = "hundred";
string ty[] = {"0", "twenty", "thirty", "forty", "fifty", "sixty"
                , "seventy", "eighty", "ninety"};
string tens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen"
                , "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};

void printnum(char c){
    cout << number[c - 48] << " ";
}

string sol(string str)
{   
    string ans;
    int n = str.size();
    //ll num = stoll(str);
    
    //cout << number[str[0]];
    for(int i = n - 1 ; i >= 0; i--){
        
        if(str[i] == '0' && i != 0) continue;
        //check digits
        
        if(i % 3 == 0){
            printnum(str[i]); 
            cout << digits[i] << " ";
        }
        else if(i){//check ten digits
            //printnum(i, str);
            if(str[i] == '1'){
                cout << tens[str[i - 1] - 48] << " ";
            }
            else cout << ty[str[i] - 48] << " ";
        }
        else{ //number of digits
            printnum(str[i]);
        }
        cout << str[i] - 48 << " " << i << endl;
    }
}

/*
1 2 3 4 5 6 7 8 9 0
9 8 7 6 5 4 3 2 1 0  
8, 5, 2 hundred
7, 4, 1 digits
9, 6, 3 ty
0 num
*/

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for(int i = 3 ; i >= 0; i--)
        cout << s[i] - 48 << " ";
    sol(s);
    return 0;
}
