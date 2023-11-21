#include <bits/stdc++.h>
using namespace std;

double tem[100055], temp = 0;

double recur(int n1, double cal){
    if(n1 == 1) return cal;
    else{
        cal = tem[n1 - 1] + (1 / cal);
        return recur(n1 - 1, cal);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int x;
    cin >> x;
    for(int i = 1;i <= x; i++){
        cin >> tem[i];
    }
    for(int i = 1;i <= x; i++){
        double cal = tem[i];
        cout << setprecision(10) << recur(i, cal) << endl;
    }
    return 0;
}
