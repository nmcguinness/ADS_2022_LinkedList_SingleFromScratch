#pragma once
#include "SNode.h"

template <typename T>
class SList
{
	SNode<T>* pHead;
	SNode<T>* pTail;
public:
	SList()
	{
		head = tail = nullptr;
	}

	void append(T data) {
		//make new node
		SNode<T>* pNew = SNode<T>(data);

		//if first then set head to be new node
		if (head == nullptr)
		{
			pHead = pTail = pNew;
			return;
		}

		SNode<T>* pCurrent = pHead;
		while (pCurrent != nullptr)
		{
			pCurrent = pCurrent->getNext();
		}

		pCurrent->setNext(pNew);
	}
};