void shift(int k) {
	if(k < 0) k = -k % mSize; // right shift
	else k = k % mSize; // left shift

	auto pos = mHeader->next; // first pointer
	while(k--) pos = pos->next;

	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;
	pos->prev->next = mHeader;
	mHeader->prev = pos->prev;
	pos->prev = mHeader;
	mHeader->next = pos;
}
