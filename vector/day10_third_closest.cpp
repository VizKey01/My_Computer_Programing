#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<tuple<double, int, double, double> > V(n);
    for(int i = 0; i < n;i++){
        double x, y, tmp;
        cin >> x >> y;
        tmp = sqrt((pow(x,2)) + (pow(y,2)));
        //cout << tmp << endl;
        V[i] = make_tuple(tmp, i + 1, x, y);
    }
    sort(V.begin(), V.end());
    cout << "#" << get<1>(V[2]) << ": (" << get<2>(V[2]) << ", " << get<3>(V[2]) << ")";
}
/*
4
0.1 0.1
0.2 0.2
10.0 10.0
3.1 3.1
*/