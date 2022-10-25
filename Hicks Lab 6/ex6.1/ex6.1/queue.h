#pragma once
#include <iostream>
#ifndef QUEUE_H
#define QUEUE_H
#define MAX_Q 5;

namespace queuesavitch
{
	class QNode
	{
		char data;
		QNode* link; // next
	};

	typedef QNode* QNodePtr;

	class Queue
	{
	private:
		QNodePtr front; // Points to head. Items are removed
		QNodePtr back; // Points to end node. Items are removed
	public:
		Queue()
		{
			front = NULL;
			back = NULL;
		}
		Queue(const Queue& aQueue);
		~Queue() {	}

		void add(char item);
		char remove();
		bool empty() const;
	};
}
// queuesavitch
#endif // QUEUE_H