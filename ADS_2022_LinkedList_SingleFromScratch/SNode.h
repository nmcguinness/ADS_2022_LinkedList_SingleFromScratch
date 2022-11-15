#pragma once

/// <summary>
/// Represents a single linked list node for LinkedList
/// </summary>
template <typename T>
class SNode {
private:
	/// <summary>
	/// The LinkedList will store ints as data {56, 28, 34,...}
	/// </summary>
	T data;
	/// <summary>
	/// Address of the next node in RAM in the list
	/// </summary>
	SNode* pNext;

public:
	SNode(T data) {
		this->data = data;
		this->pNext = nullptr;
	}
	T getData() const {
		return this->data;
	}

	void setNext(SNode<T>* pNext) {
		this->pNext = pNext;
	}
	/*
	bool setNext(SNode<T>* pNext) {
		if (pNext == nullptr)
			return false;
		this->pNext = pNext;
		return true;
	}
	*/
	SNode* getNext() const { return this->pNext; }

	//TODO - NMCG - complete insertAfter
	void insertAfter(T data) {
		throw logic_error("Hey dumb4ss, you forgot to write me!");
	}
};
