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

class DLinked {
	private:
		Node* head;
		Node* tail;
	public: 
		DLinked();
		void insertH(Node*);
		void insertT(Node*);
		void delH();
		void delT();
		void traverse();
		~DLinked();
};


#endif
