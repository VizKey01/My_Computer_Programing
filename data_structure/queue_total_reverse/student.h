#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse() {
  if(aux) aux = 0;
  else aux = 1;
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  if(aux) return mData[(mFront + mSize - 1) % mCap]; //reverse position 
  return mData[mFront];
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  if(aux) return mData[mFront]; //reverse position
  return mData[(mFront + mSize - 1) % mCap];
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  ensureCapacity(mSize + 1);
  if(aux) {
    mData[(mFront + mCap - 1) % mCap] = element;
    mFront = (mFront + mCap - 1) % mCap;
  }
  else mData[(mFront + mSize) % mCap] = element;
  mSize++;
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if(aux) ;
  else mFront = (mFront + 1) % mCap;
  mSize--;
}

#endif