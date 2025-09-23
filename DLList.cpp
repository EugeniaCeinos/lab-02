#include <iostream>
#include "DLList.h"

using namespace std;

DLList::DLList() {
	head = nullptr;
	tail = nullptr;
}

void DLList::insertH(Node* x) {
	x->next = head;
	head->prev = x;
	head = x;
}

void DLList::insertT(Node* x) {
	tail->next = x;
	x->prev = tail;
        tail = x;	
}

void DLList::delH() {
	if (head == nullptr) {
		cout << "The Doubly-Linked List is empty" << endl;
	}
	else {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}

void DLList::delT() {
	if (tail == nullptr) {
		cout << "There's no tail in this Doubly-Linked List" << endl;
	}
}

void DLList::traverse() {
	if (head == nullptr) {
		cout << "The Doubly Linked List is empty" << endl;
	}	
	else {
		Node* curr = head;
		while (curr != nullptr) {
			cout << "[" << curr->data << "]" << endl;
			curr = curr->next;
		}
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
