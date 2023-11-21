#include <iostream>
#include <vector>
using namespace std;

void multiple_add(vector<int> &v, int value, int position, int count) {
    int n = v.size();
    vector<int> temp;
    for(int i = 0; i < position; i++) temp.push_back(v[i]);
    for(int i = 0; i < count; i++) temp.push_back(value);
    for(size_t i = position; i < n; i++) temp.push_back(v[i]);

    v = temp;
}
int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,value,position,count;
    cin >> n >> value >> position >> count;
    // int n;cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) cin >> v[i];
    
    multiple_add(v,value,position,count);
    cout << "After call multiple_add" << endl << "Size = " << v.size() << endl;
    for (auto &x : v) cout << x << " ";
    cout << endl;
    // auto x = &v[0];
    // cout << x << endl;
}