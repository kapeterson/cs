#include <iostream>
#include "Queue.h"

Queue::Queue(){
	head = NULL;
	tail = NULL;
	size = 0;
}

void Queue::addNode(int val){
	Node *thisNode = new Node(val);
	if ( head == NULL ) {
		head = thisNode;
		tail = thisNode;
		size++;
		
	} else {

	   tail->setNext(thisNode);
	   tail = thisNode;
	}
}

int Queue::pop(){
	
	int headval = head->getValue();
	head = head->getNext();
	return headval;
}
