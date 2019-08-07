#ifndef   QUE_HPP
#define   QUE_HPP

#include "AbstractContainer.h"

class Queue : public AbstractContainer
{
public:
	void push(int val);

	int pop();
};

#endif // QUE_HPP