#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>
#define startpos it.begin().ptr 
#define endpos it.end().ptr 
template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  for(auto &it : ls) {
    // Connect the last pointer in the main list to the start pointer of the sublist
    mHeader->prev->next = startpos;

    // Connect the start pointer of the sublist to the last pointer in the main list
    startpos->prev = mHeader->prev;
    
    // Make the last pointer in the main list point to the ending pointer of the sublist
    mHeader->prev = endpos->prev;
    
    // Make the last pointer in the sublist point to the header of the sublist
    endpos->prev->next = mHeader;

    // Make the sublist clear by resetting its pointers to the header
    it.mHeader->next = it.mHeader;
    it.mHeader->prev = it.mHeader;

    // Resize the main list by adding the size of the sublist
    mSize += it.mSize;

    // Clear the size of the sublist
    it.mSize = 0;
  }
}

#endif
