#include <iostream>
#include "DLList.h"

using namespace std;

DLList::DLList() {
	head = nullptr;
	tail = nullptr;
}

void DLList::insertHead(Node* x) {
	if (head == nullptr) {
		head = tail = x;  // head and tail are pointers so they store the address of x
		x->prev = nullptr;
		x->next = nullptr;
	}
	else {
		x->next = head;
		x->prev = nullptr;
		head->prev = x;   // old head(node) points to the current head, because head holds the address of the old head
		head = x;   // update head
	}
}

void DLList::insertTail(Node* x) {
	if (tail == nullptr) {
		head = tail = x;  // if the list is empty just add the new node, which head and tail will be pointing to
		x->next = nullptr;
		x->prev = nullptr;
	}	
	else {
		x->next = nullptr;
		x->prev = tail;
		tail->next = x; // old tail which is the address of the last node will now point to the new tail, which is the node x just added.
		tail = x;
	}
}

void DLList::delHead() {
	if (head == nullptr) {
		cout << "The Doubly-Linked List is empty" << endl;
		return;
	}
	Node* temp = head; // outside if statement so in both cases temp is deleted afterwards.
	if (head == tail) {
		head = tail = nullptr;
	}
	else {
		head = head->next;  // update head to next in line.
		head->prev = nullptr;
	}
	delete temp;
}

void DLList::delTail() {
	if (tail == nullptr) {
		cout << "The Doubly-Linked List is empty" << endl;
		return;
	}
	Node* temp = tail;
	if (head == tail) {
		head = tail = nullptr;
	}
	else {
		tail = tail->prev;
		tail->next = nullptr;

	}
	delete temp;
}

void DLList::traverse() {
	if (head == nullptr) {
		cout << "The Doubly Linked List is empty" << endl;
	}	
	else {
		Node* curr = head;
		while (curr != nullptr) {
			cout << "[" << curr->data << "] ";
			curr = curr->next;
		}
		cout << endl;
	}
}

DLList::~DLList() {
	Node* curr = head;
	while (curr != nullptr) {
		Node* temp = curr;
		curr = curr->next;
		delete temp;
	}
}
