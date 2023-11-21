#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    v = A;
    for(auto &itr : B) {
        if(std::find(v.begin(),v.end(),itr) == v.end()) {
            v.push_back(itr);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    
    for(auto &itr : A) { 
        if(std::find(B.begin(),B.end(),itr) != B.end()) {
            v.push_back(itr);
        }
    }

    return v;
}
