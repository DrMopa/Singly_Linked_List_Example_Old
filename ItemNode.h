//comment

#include "Puppets.h"

#ifndef ItemNode_H
#define ItemNode_H

class ItemNode {
public:
	Puppets myPuppet;

public:
	ItemNode* next;
	ItemNode* previous;

	ItemNode();

	friend class DoublyLinkedList;
	friend class Puppets;
};

#endif