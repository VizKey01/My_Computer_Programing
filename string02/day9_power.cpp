#include <bits/stdc++.h>
using namespace std;

int sol()
{
   
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string s, n;
    while(cin >> s){
        if(s == "" || n == "")return 0;
        cin >> n;
        int n1 = s.size();
        int n2 = n.size();
        if(s == "0") cout << ">> 0" << endl;
        else if(s[n1 - 1] == '1'){
            cout << ">> 1" << endl;
        }
        else{
            int x1 = s[n1 - 1] - 48 ,x2 = n[n2 - 1] - 48,temp = 0;
            //cout << x1 << " " <<  x2;
            temp = pow((int)x1, (int)x2);
            temp %= 10;
            cout << ">> " << temp << endl;
        }
    }
    return 0;
}
