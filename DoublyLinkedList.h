//Comments

#include <iostream>
#include <string>

#include "ItemNode.h"

using namespace std;

#ifndef DoublyLinkedList_H
#define DoublyLinkedList_H

class TheList {
private:
	ItemNode* head;
	ItemNode* tail;

public:
	bool empty() const;
	void AddToFrount(Puppets ThisPuppet);
	void AddToTail(Puppets ThisPuppet);
	void DisplayPuppet();
	void EditPuppet();
	void RemovePuppet();
	void DisplayAll() const;
	void DisplayNames();
	Puppets PuppetMaker();

	friend class ItemNode;
	friend class Puppets;
};



#endif

