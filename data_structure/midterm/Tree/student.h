#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node* n, size_t aux) {
  
  if(n->left != NULL) return aux + my_recur(n->left, aux + 1);
  if(n->right != NULL) return aux + my_recur(n->right, aux + 1);
  return aux;
}

template <typename KeyT, typename MappedT, typename CompareT>
long long CP::map_bst<KeyT, MappedT, CompareT>::sum_leaves_depth() {
  int temp = 0;

  for(int i = 0; i < mSize; ++i) {

  }
  if(mSize == 1) return 0;
  temp += my_recur(mRoot->left, 1);
  temp += my_recur(mRoot->right, 1);
  
  return temp;
}

/*
5
4 2 5 1 3
*/

#endif
