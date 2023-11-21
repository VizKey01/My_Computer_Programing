#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int x, cnt = 0;
    cin >> x;
    for(int i = 0; i < x;i++){
        //base
        if(i == x-1){
            for(int j = 0; j < 2 * x - 1; j++)
                cout << "*";
        }
        else{
            for(int j = 0; j < x + i;j++){
                //before shape
                if(j < x - i - 1)
                    cout << '.';
                else if(cnt == 1 && j == x + i - 1){ //shape ends
                    cout << '*';
                }
                else if(cnt == 1){ // shape fill
                    cout << '.';
                }
                else{//shape line
                    cout << '*';
                    cnt = 1;
                }
                //cout << cnt << endl;
            }
        }
        cnt = 0;
        cout << '\n';
    }
}