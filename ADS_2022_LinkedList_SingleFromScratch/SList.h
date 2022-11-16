#pragma once
#include <iostream>
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
	SNode<T>* getHead() {
		return this->pHead;
	}

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

	/// <summary>
	/// Returns a pointer to the SNode containing the data
	/// </summary>
	/// <param name="pCurrent">Current SNode being searched</param>
	/// <param name="data">Data stored in the SNode</param>
	/// <returns>Pointer to an SNode<T></returns>
	SNode<T>* findNode(SNode<T>* pCurrent, const T& data)
	{
		//1. recursion - when to stop
		if (pCurrent == nullptr)
			return nullptr;

		//1. recursion - when to stop - interrogate current node
		if (pCurrent->getData() == data)
			return pCurrent;
		//2. recursion - when to continue
		else
			findNode(pCurrent->getNext(), data);
	}

	/// <summary>
	/// Adds data to the end of the SList
	/// </summary>
	/// <typeparam name="T">Data of type T</typeparam>
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
			//get last node and tag on the new node
			pTail->setNext(pNew);
			pTail = pNew;

			//if we didnt have address of last node we could iterate across list and find the last
			/*
			SNode<T>* pCurrent = pHead;
			while (pCurrent->getNext() != nullptr)
			{
				pCurrent = pCurrent->getNext();
			}
			pCurrent->setNext(pNew);
			pTail = pNew;
			*/
		}
		size++;
	}

	void removeTail()
	{
		//TODO
		size--;
	}

	void print(SNode<T>* pCurrent) {
		//1. recursion - when to stop
		if (pCurrent == nullptr) {
			return;
		}
		//2. recursion - when to continue - print and call
		else
		{
			//print node data
			std::cout << pCurrent->getData() << std::endl;
			//call the same function (recursion) again to print the next node data
			print(pCurrent->getNext());
		}
	}
};

/*
template <typename T>
T add(T x, T y) { return x + y; }
*/
