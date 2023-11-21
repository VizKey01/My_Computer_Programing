#include <bits/stdc++.h>
using namespace std;

int sol(int height[], int n)
{
    int l = 0,r = n - 1, ans = 0;
    int lmx = height[0], rmx = height[n-1];
    while(l <= r){
        if(height[l] < height[r]){
            lmx = max(lmx, height[l]);
            ans += lmx - height[l];
            l++;
        }
        else {
            rmx = max(rmx, height[r]);
            ans += rmx - height[r];
            r--;
        }
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n;
    //int V[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    cin >> n;
    int V[n + 5];memset(V, 0, sizeof(V));
    for(int i = 0; i < n;i++) {
        cin >> V[i];
    }
    n = sizeof(V)/4;
    cout << sol(V, n);
    return 0;
}
