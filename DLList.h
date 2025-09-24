#ifndef DLLIST_H
#define DLLIST_H

#include <iostream>

using namespace std;

class Node {
	public:
		int data;
		Node* next;
		Node* prev;
};

class DLList {
	private:
		Node* head;
		Node* tail;
	public: 
		DLList();
		void insertHead(Node*);
		void insertTail(Node*);
		void delHead();
		void delTail();
		void traverse();
		~DLList();
};


#endif
