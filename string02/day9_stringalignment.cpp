#include <bits/stdc++.h>
using namespace std;

int sol(){
   
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    string x,y,ansx,ansy;
    cin >> x >> y;
    int nx = x.size(), ny = y.size(), cnt = 0, ans = 0;
    string cx = x,cy = y;
    for(int i=0; i < ny; i++){
        char tom[ny];
        for(int j=0; j < cx.size(); j++){
            if(y[j] == cx[j]) {
                tom[cnt] = cx[j];
                cnt++;
                
            }
        }
        if(ans < cnt){
            ans = cnt;
           // cout << cx << endl << y << " " << cnt << endl;
            ansx = cx;
            ansy = y;
           // for(int k = 0;k < cnt;k++) cout << tom[k] << " ";
             //cout << endl;
        }
        
       
        cnt = 0;
        cx = '-' + cx;
    }
    for(int i=0; i < nx; i++){
        for(int j=0; j < cy.size(); j++){
            if(cy[j] == x[j]) cnt++;
        }
        if(ans < cnt){
            ans = cnt;
            ansy = cy;
            ansx = x;
        }
        cnt = 0;
        cy = '-' + cy;
    }
    if(ans == 0){
        ansx = x, ansy = y; 
    }
    cout << ansx << endl << ansy << endl << ans;
    return 0;
}

/*
ACGGCGGCTGG
GCGGAATGGCGTTTGC
*/