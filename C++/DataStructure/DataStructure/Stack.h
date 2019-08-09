#ifndef   ST_HPP
#define   ST_HPP

#include "Container.h"

class Stack : public Container
{
public:
	void push(int val);

	int pop();
};

#endif // ST_HPP