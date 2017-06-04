// ConsoleApplication8.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;
	size = 0;
}

void LinkedList::addToHead(int i) {
	Node *newNode = new Node(i);

	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		newNode->setNext(head);
		head = newNode;
	}
	size++;
}

void LinkedList::addToTail(int i) {
	Node *newNode = new Node(i);
	newNode->setNext(NULL);
	if (head == NULL) {
		head = newNode;
		tail = newNode;
	}
	else {
		tail->setNext(newNode);
		tail = newNode;
	}
	size++;
}

Node *LinkedList::getNodeAtIndex(int index) {
	if (index > size - 1 || index < 0) {
		cout << "Index " << index << " is out of bounds: " << size << endl;
		return NULL;
	}

	Node *node = head;
	for (int i = 0; i < index; i++) {
		node = node->getNext();
	}

	return node;
}

int LinkedList::getDataAtIndex(int index) {
	Node *node = getNodeAtIndex(index);
	if (node == NULL) {
		return -1;
	}

	return node->getData();
}
