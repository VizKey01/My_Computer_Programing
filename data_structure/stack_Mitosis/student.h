#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b){
    // auto it = *this;

    // int n = it.size(), cnt = 0;
    int con = b - a + 1;
    T temp[b + 1];
    for(int i = b; i >= 0 ; i--){
        temp[i] = top();
        pop();
    } 

    for(int i = 0; i <= b ; i++) {
        push(temp[i]);
        if(i < con) push(temp[i]);
    }
        
    // for(size_t i = n + con; i >= 0; i--) this->push(temp[i]);

    // mData = new T[n]();
    // 10 20 30 30 40 40 50 50 60 
    // 10 20 30 30 30 40 40 40 40 50 50 50 50 60 

}

#endif