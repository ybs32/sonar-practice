#ifndef   QUE_HPP
#define   QUE_HPP

#include "Container.h"

class Queue : public Container
{
public:
	void push(int val);

	int pop();
};

#endif // QUE_HPP
