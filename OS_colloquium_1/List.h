#pragma once

#include <iostream>

class List {
private:

	struct Node {
		int value;
		Node* next;

		Node(const int& val) : value(val), next(nullptr) {};
	};

	Node* head;
	Node* tail;

public:
	List();
	~List();
	void pushBack(const int&);
	void print() const;
	void reverse();
};