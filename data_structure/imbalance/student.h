// Your code here
// #include <math.h>

int cal(node* n, int& value, KeyT& temp) {
    if(!n) return -1; //if node == NULL
    int l = cal(n->left, value, temp);
    int r = cal(n->right, value, temp);

    int imb_val = l - r; 
    if(imb_val < 0) imb_val = -imb_val; // abs
     
    int height = 1 + ((l > r) ? l : r); // height of tree 

    if(imb_val > value) { // change value
        temp = n->data.first;
        value = imb_val; 
    } 
    else if (imb_val == value){ // Use less value
        if(mLess(n->data.first, temp)) {
            temp = n->data.first;
        }
    }
    
    return height;
}

KeyT getValueOfMostImbalanceNode() {
    // size_t cnt = 0;    
    
    int cnt = 0;
    KeyT result = mRoot->data.first;
    cal(mRoot, cnt, result);

    return result;
}
