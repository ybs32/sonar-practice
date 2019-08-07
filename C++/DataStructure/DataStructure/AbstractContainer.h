#ifndef   AC_HPP
#define   AC_HPP

class AbstractContainer
{
protected:
	struct Node
	{
		int val;
		struct Node* pNext;
		struct Node* pPrev;
	};
	Node* pHead;
	Node* pTail;
public:
	AbstractContainer();

	virtual void push(int val) = 0;

	virtual int pop() = 0;
};

#endif // AC_HPP