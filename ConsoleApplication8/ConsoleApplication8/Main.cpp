#include "stdafx.h"
#include <iostream>
#include "LinkedList.h"
//done by the group of rafi and eliezer
int main() {
	LinkedList *list = new LinkedList();
	list->addToHead(0);
	list->addToHead(1);
	list->addToTail(2);
	list->addToTail(3);
	int i;
	std::cout << list->getDataAtIndex(0) << std::endl;
	std::cout << list->getDataAtIndex(1) << std::endl;
	std::cout << list->getDataAtIndex(2) << std::endl;
	std::cout << list->getDataAtIndex(3) << std::endl;
	cin >> i;
	return 0;
}