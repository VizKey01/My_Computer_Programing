#include <bits/stdc++.h>
using namespace std;

int main(){
    string code[] = {"01","02","20","21","22","23","24",
                    "25","26","27","28","29",
                    "30","31","32","33","34",
                    "35","36","37","38","39",
                    "40","51","53","55","58"};
    string x;
    cin >> x;
    int n = 27,cnt= 0;
    
    //cout << a;
    for(int i = 0; i < n;i++){
        if(x == code[i]){
            cout << "OK";
            return 0;
        }
    }
    cout << "Error";
}