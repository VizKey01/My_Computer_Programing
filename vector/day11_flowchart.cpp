#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    if(n % 2 == 0){
        int s, t;
        cin >> s >> t;
        int x = s, y = t;
        if(s > t){
            x = s - t;
        }
        else if(s < t){
            y = 2 * (t - s);
        }
        
        if(x + y > k){
            swap(x,y);
            x = y + pow(s,2);
        }
        cout << x << " " << y << endl;
    }
    else {
        int suma = 0, sumb = 0, sumc = 0,m = 0;
        while(m < k){
            int a, b, c;
            cin >> a >> b >> c;
            if(a == b){
                if(b == c){
                    if(a + b > k){
                        suma += 1;
                        sumb += 2;
                        sumc -= 3;
                    }
                    else {
                        suma -= 3;
                        sumb -= 2;
                        sumc += 1;
                    }
                }
                else{
                    suma += 2;
                    sumb -= 3;
                }
            }
            m++;
        }
        cout << suma << " " << sumb << " " << sumc << endl;
    }
}