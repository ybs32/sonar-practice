#include <iostream>
#include "AbstractContainer.h"
#include "Queue.h"

using namespace std;

AbstractContainer::AbstractContainer()
{
	pHead = 0;
	pTail = 0;
}

void main(void)
{
	AbstractContainer* pContainer = new Queue;

	// Push data
	for (int i = 0; i < 10; i++) {
		pContainer->push(i);
	}

	// Pop and show data
	for (int i = 0; i < 10; i++) {
		cout << pContainer->pop() << " ";
	}

	delete pContainer;
}