#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    Point l[n], r[n]; 
    for(int i = 0; i < n;i++){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        l[i] = {x1, y1};
        r[i] = {x2, y2};
    }
    vector<pair<int,int> > v;
    
    int mx = 0;
    for(int i = 0; i < n; i++){
        //int area1 = 0, area2 = 0, tem = 0;
        //area1 = abs(l[i].x - r[i].x) * abs(l[i].y - r[i].y);
        for(int j = i+1; j < n; j++){
            int tem = 0;
            //calculate
            //area2 = abs(l[j].x - r[j].x) * abs(l[j].y - r[j].y);
            
            int xx = min(r[i].x, r[j].x) - max(l[i].x, l[j].x);
            int yy = min(r[i].y, r[j].y) - max(l[i].y, l[j].y);
            if(xx > 0 && yy > 0){
                tem = xx * yy; 
            }
            //tem = area1 + area2 - tem;

            if(tem > mx){ //change area
                mx = tem;
                v.clear();
                v.push_back(make_pair(i,j));
                cout << endl;
            }
            else if(tem == mx){ //keep track
                v.push_back(make_pair(i,j));
            }
        }
    }

    if(mx == 0) cout << "No overlaps" << endl;
    else{
        cout << "Max overlapping area = " << mx << endl;
        //sort(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            cout << "rectangles " << v[i].first << " and " << v[i].second << endl;
        }
    }
}

/*
4
2 4 6 6
1 3 3 5
1 1 3 2
2 0 4 3
*/