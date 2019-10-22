//The Headerfile defining the values my puppets should hold
// Created by William Oswald (J00574334)

#include <iostream>
#include <string>
#include <ostream>

using namespace std;

#ifndef Puppets_H
#define Puppets_H

class Puppets {
public:
	Puppets();

	Puppets(string name, int age, string haircolor, int weight, bool bfMaterial, string reason);

	friend ostream &operator << (ostream& out, Puppets myPuppet);

public:
	string getName;
	int getAge;
	string getHairColor;
	int getWeight;
	bool getbfMaterial;
	string getReason;

public:
	void setName(string theName);
	void setAge(int theAge);
	void setHairColor(string theHairColor);
	void setWeight(int theWeight);
	void setbfMaterial(bool thebfMaterial);
	void setReason(string theReason);


public:
	string name;
	int age;
	string hairColor;
	int weight;
	bool bfMaterial;
	string reason;



	friend class DoublyLinkedList;
	friend class ItemNode;
};

#endif