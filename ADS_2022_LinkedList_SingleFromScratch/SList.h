#pragma once
#include "SNode.h"

template <typename T>
class SList
{
	SNode<T>* pHead;
	SNode<T>* pTail;
	int size;

	void initialize()
	{
		pHead = pTail = nullptr;
		size = 0;
	}
public:
	SList()
	{
		initialize();
	}
	~SList()
	{
		//free or clear the list if size > 0
		initialize();
	}

	bool isEmpty()
	{
		return (pHead == nullptr && pTail == nullptr);
	}

	int getSize()
	{
		return this->size;
	}

	void append(T data)
	{
		//"new" keyword ALWAYS returns ADDRESS of new block of allocated space for SNode
		SNode<T>* pNew = new SNode<T>(data);

		//list is empty
		if (isEmpty())
		{
			pHead = pTail = pNew;
		}
		//list is not empty
		else
		{
			SNode<T>* pCurrent = pHead;
			while (pCurrent->getNext() != nullptr)
			{
				pCurrent = pCurrent->getNext();
			}
			pCurrent->setNext(pNew);
		}
		size++;
	}
	void removeTail()
	{
		size--;
	}
};

/*
template <typename T>
T add(T x, T y) { return x + y; }
*/
