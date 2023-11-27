#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include "queue.h"
#include <algorithm>

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos) {
  std::sort(pos.begin(), pos.end()); //WTFFF THIs line is eating my 50 score from me ahhhhhhhhhhhhh

  auto it = pos.begin();
  int n = mSize;
  int m = mSize - pos.size();
  std::vector<int> temp;
  CP::queue<T> tem;
  for(int i = 0;i < n; i++) {
    if(empty()) break;
    if(*it == i) {
      it++;
      pop();
    }
    else {
      temp.push_back(front());
      pop();
    }
  }
      
  for(auto pp : temp) {
    tem.push(pp);
  }

  *this = tem;    

  if(m == 0) mCap = 0; 
}

#endif
