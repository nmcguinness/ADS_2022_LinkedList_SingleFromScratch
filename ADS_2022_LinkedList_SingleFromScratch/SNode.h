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

	SNode* getNext() const { return this->pNext; }

	void insertAfter(T data) {
		throw logic_error("Hey dumb4ss, you forgot to write me!");
	};
