#include <iostream>
#include "Container.h"
#include "Queue.h"

using namespace std;

Container::Container()
{
	pHead = 0;
	pTail = 0;
}

void main(void)
{
	Container* pCon = new Queue;

	// Push data
	for (int i = 0; i < 10; i++) {
		pCon->push(i);
	}

	// Pop and show data
	for (int i = 0; i < 10; i++) {
		cout << pCon->pop() << " ";
	}

	delete pCon;
}