#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  // std::vector<int> temp = sort(pos.begin(), pos.end());
  int cnt = 0;
  for(auto it : pos) {
    erase(begin() + it - cnt);
    cnt++;// move index
  }

}

#endif
