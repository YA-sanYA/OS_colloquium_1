#pragma once

#include "List.h"

List::List() : head(nullptr), tail(nullptr) {}

List::~List() {
	while(head) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void List::pushBack(const int& val) {
	Node* node = new Node(val);

	if (!head) {
		head = node;
		tail = node;
	}
	else {
		tail->next = node;
		tail = node;
	}
}

void List::print() const {
	Node* curr = head;
	while (curr) {
		std::cout << curr->value << " ";
		curr = curr->next;
	}
	std::cout << "\n";
}

void List::reverse() {
	if (!head || !head->next) return;

	tail = head;

	Node* prevNode = nullptr;
	Node* currNode = head;
	Node* nextNode = head->next;

	while (nextNode) {
		currNode->next = prevNode;
		prevNode = currNode;
		currNode = nextNode;
		nextNode = nextNode->next;
	}

	currNode->next = prevNode;

	head = currNode;
}