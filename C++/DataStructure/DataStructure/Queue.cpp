#include "Queue.h"

using namespace std;

void Queue::push(int val)
{
	Node* node = new Node;
	node->val = val;
	node->pNext = 0;
	node->pPrev = 0;

	if (0 == pHead) {
		pHead = node;
		pTail = node;
	} else {
		pTail->pNext = node;
		node->pPrev = pTail;
		pTail = node;
	}
}

int Queue::pop()
{
	int ret = pHead->val;
	pHead = pHead->pNext;
	return ret;
}
