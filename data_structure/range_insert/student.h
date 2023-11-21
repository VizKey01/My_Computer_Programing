#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  auto it = *this;
  auto pos = this->begin();
  this->clear();
  // int n = it.size();
  for(int i = 0; i <= it.size(); ++i) {
    if(i == position - pos) {
      while(first != last) {
        this->push_back(*first);
        first++;
      }
    }
    if(i < it.size()){
      this->push_back(it[i]);
    }
  }

}

#endif
