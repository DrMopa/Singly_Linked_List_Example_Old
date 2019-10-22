#include <iostream>
#include <iomanip>
#include <string>

#include "Puppets.h"


Puppets::Puppets() {

	setName("");
	setAge(0);
	setHairColor("");
	setWeight(0);
	setbfMaterial(0);
	setReason("");
}
 
Puppets::Puppets(string theName, int theAge, string theHairColor, int theWeight, bool thebfMaterial, string theReason) {
	setName(theName);
	setAge(theAge);
	setHairColor(theHairColor);
	setWeight(theWeight);
	setbfMaterial(thebfMaterial);
	setReason(theReason);
}

ostream &operator << (ostream& out, Puppets myPuppet) {
	out << "-----------------------------------------------\nName: " << myPuppet.name << "\t\tAge: " << myPuppet.age << "\n\nHairColor: " << myPuppet.hairColor << "\t\tHow fat? " << myPuppet.weight << "Pounds"
		<< "\n\n BOYFRIEND MATERIAL??!!?  ";
	if (myPuppet.bfMaterial) {
		cout << "YES YES YES HE'S THE ONE FOR ME <3<3<3";
		}
	else {
		cout << "Not Gonna Ask him out... Maybe my Rebound Boyfriend";
	}
			
	cout << "\n\n WHY?? 0_0\n\t" << myPuppet.reason << "\n-----------------------------------------------\n";
	return out;
}

void Puppets::setName(string theName) {
	name = theName;
}

void Puppets::setAge(int theAge) {
	age = theAge;
}

void Puppets::setHairColor(string theHairColor) {
	hairColor = theHairColor;
}

void Puppets::setWeight(int theWeight) {
	weight = theWeight;
}

void Puppets::setbfMaterial(bool thebfMaterial) {
	bfMaterial = thebfMaterial;
}

void Puppets::setReason(string theReason) {
	reason = theReason;
}
