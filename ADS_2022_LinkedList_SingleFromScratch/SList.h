#pragma once
#include "SNode.h"

template <typename T>
class SList
{
	SNode<T>* pHead;
	SNode<T>* pTail;
private:
	SList()
	{
		head = tail = nullptr;
	}

	void append(T data) {
		SNode<T>* pCurrent = pHead;
		while (pCurrent != nullptr)
		{
			pCurrent = pCurrent->getNext();
		}
		SNode<T>* pNew = SNode<T>(data);
		pCurrent->setNext(pNew);
	}
};

/*
template <class T>
T add(T x, T y)
{
	return x + y;
}
*/