void replace(const T& x, list<T>& y) {
  
  for(auto it = begin(); it != end(); ++it){
    if(*it == x) {
      for(auto itr : y) 
        insert(it, itr);
      erase(it);
    }
  }

}
