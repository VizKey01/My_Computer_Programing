#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  // auto arr = *this;
  // int n = arr.size();
  // int temp[n+1];
  std::stack<T> temp;
  for(size_t i = 0; i < pos; i++) {
    temp.push( this->top());
    pop();
  }
  
  push(value);

  for(size_t i = 0; i < pos; i++) {
    push(temp.top());
    temp.pop();
    
  }
  

}

#endif
