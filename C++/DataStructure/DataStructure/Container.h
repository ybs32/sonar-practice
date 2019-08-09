#ifndef   CON_HPP
#define   CON_HPP

class Container
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
	Container();

	virtual void push(int val) = 0;

	virtual int pop() = 0;
};

#endif // CON_HPP