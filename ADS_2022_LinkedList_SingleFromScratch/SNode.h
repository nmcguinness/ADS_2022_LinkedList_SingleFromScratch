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
		//set the data to default, set next as nullptr
		this->data = data;
		this->pNext = nullptr;
	}
	T getData() const {
		//this->data = 99999;
		return this->data;
	}
	SNode* getNext() const { return this->pNext; }
};
