#include <bits/stdc++.h>
using namespace std;


int main(){
    int x,y,zig = 1e6,zag = -1e6,cnt = 0,a = 1e6,b = -1e6;
    while(true){
        cin >> x;
        if(x == -998 || x == -999){
            if(x == -998){
                cout << a << " " << b << endl;
            }
            else{
                cout << zig << " " << zag << endl;
            }
            return 0;
        }
        cin >> y;
        cnt++;

        if(cnt % 2 != 0){
            a = min(a,x);
            b = max(b,y);
            zag = max(zag,x);
            zig = min(zig,y);
        }
        else{
            a = min(a,y);
            b = max(b,x);
            zag = max(zag,y);
            zig = min(zig,x);
        }
    }
}
