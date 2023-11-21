#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  std::sort(data.begin(), data.end());
  
  auto it = *this;
  this->clear();
  int cnt = 0;
  
  for(int i = 0; i <= it.size(); i++) { 
    if(cnt < data.size() && data[cnt].first == i) { // insert value
      this->push_back(data[cnt].second);
      cnt++;
    }
    if(i < it.size()) { // default value
      this->push_back(it[i]);
    }
    
  }
  // for(auto it : data) {
  //   int pos = it.first;  
  //   int val = it.second;
  //   // insert(begin() + pos + cnt, val);
    
  //   mSize += cnt;
  //   cnt++;
  // }
}

#endif
