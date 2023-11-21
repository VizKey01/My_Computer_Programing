void splitList(list<T>& list1, list<T>& list2) {
    int n = (size() + 1) / 2;
    auto pos = begin();
    
    for(int i = 0; i < n; i++) pos++;

    list1.mHeader->prev->next = mHeader->next; // start pos from main list
    mHeader->next->prev = list1.mHeader->prev; // change pos in main list to last node of list1
    pos.ptr->prev->next = list1.mHeader; // connect pos node to list1 header
    list1.mHeader->prev = pos.ptr->prev; // and connect list1 prev node to pos prev node 
    list1.mSize += n; // change size of list1

    list2.mHeader->prev->next = pos.ptr; // start pos from main list
    pos.ptr->prev = list2.mHeader->prev; // change pos in main list to last node of list2
    mHeader->prev->next = list2.mHeader; // connect main header node to list2 header
    list2.mHeader->prev = mHeader->prev; // and connect list2 prev node to main header prev node 
    list2.mSize += mSize - n; // change size of list2

    //set main list size
    mSize = 0;
    mHeader->next = mHeader;
    mHeader->prev = mHeader;

}
