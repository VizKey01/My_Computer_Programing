#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <set>

template <typename T>

void CP::vector<T>::uniq() {
    auto temp = *this;
    std::set<T> s;

    //clear the vector
    this->clear();

    //insert a new element
    for(auto &it : temp){
        if(s.find(it) == s.end()){
            s.insert(it);
            this->push_back(it);
        }
    }
}

#endif
