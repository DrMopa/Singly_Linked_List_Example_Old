//comment

#include <string>
#include <ostream>
#include <iostream>
#include "DoublyLinkedList.h"
#include "ItemNode.h"
#include "Puppets.h"


using namespace std;


bool TheList::empty() const {
	return (head == NULL);
}

void TheList::AddToFrount(Puppets ThisPuppet) {

	if (head == NULL) {
		ItemNode* temp = new ItemNode;
		temp->myPuppet = ThisPuppet;
		head = temp;
		tail = temp;
	}
	else {
		ItemNode* temp = new ItemNode;
		temp->myPuppet = ThisPuppet;
		temp->next = head;
		temp->previous = NULL;
		head->previous = temp;
		head = temp;
	}

}

void TheList::AddToTail(Puppets ThisPuppet) {

	if (tail == NULL) {
		ItemNode* temp = new ItemNode;
		temp->myPuppet = ThisPuppet;
		head = temp;
		tail = temp;
	}
	else {
		ItemNode* temp = new ItemNode;
		temp->myPuppet = ThisPuppet;
		temp->previous = tail;
		temp->next = NULL;
		tail->next = temp;
		tail = temp;
	}

}
void TheList::DisplayPuppet() {
	
	ItemNode* temp = head;

	int answer;

	if (empty()) {
		cout << "Didn't Christen Teach you not to rate your men if you don't have any?\n\n";
	}
	else {

		TheList::DisplayNames();

		cout << "Which Item In the List do you want to see? \n(Input a #, corisponding to the item you want to search)\n" << endl;
		cin >> answer;

		for (int i = 1; i < answer; i++) {
			temp = temp->next;
		}

		cout << temp->myPuppet << endl;

		cout << "KEEP YOUR PINKY PROMISE KENDALL!!! DON'T TELL LIAM! D':" << endl;
	}

}

void TheList::EditPuppet() {

	ItemNode* temp = head;

	int answerNumber; 
	string answerString;

	if (empty()) {
		cout << "Kimmy, you can't Edit a Puppet with no Puppets in the list silly!\n\n";
	}
	else {

		TheList::DisplayNames();

		cout << "What puppet Gained Weight This time? \n(Input a #, corisponding to the item you want to edit)\n" << endl;
		cin >> answerNumber;

		for (int i = 1; i < answerNumber; i++) {
			temp->next = temp;
		}

		cout << temp->myPuppet << endl;

		cout << "What do you want to edit? \n(Input a #, corisponding to the item you want to edit)\n" << endl;
		cout << "#1:\t Name\n"
			<< "#2:\t Age\n"
			<< "#3:\t HairColor\n"
			<< "#4:\t Weight\n"
			<< "#5:\t BoyFriend Material\n"
			<< "#6:\t Reason\n"
			<< "What will it be?" << endl;
		cin >> answerNumber;

		switch (answerNumber) {
		case 1: {
			cout << "\n\nHe Changed His name? Spicy! What's the New name?\n";
			cin >> answerString;
			temp->myPuppet.setName(answerString);
			break;
			}
		case 2: {
			cout << "\n\n Everyone Get's Old Hunny, How old is he now?\n";
			cin >> answerNumber;
			temp->myPuppet.setAge(answerNumber);
			break;
		}
		case 3: {
			cout << "\n\nOOh Girl, He dyed his Hair? What Color is it now?\n";
			cin >> answerString;
			temp->myPuppet.setHairColor(answerString);
			break;
		}
		case 4: {
			cout << "\N\NHE'S GETTING FATTER?!?!\N";
			cin >> answerNumber;
			temp->myPuppet.setWeight(answerNumber);
			break;
		}
		case 5: {
			cout << "\n\nYOU THINK YOU LOVE HIM?!?1 YOU LOVE HIM L-O-V-E SITTING IN A TREE! Well, Do you Love him? (0=no, 1=yes)\n";
			cin >> answerNumber;
			temp->myPuppet.setbfMaterial(answerNumber);
			break;
		}
		case 6: {
			cout << "\n\nWowh, So You Came to your sense? What's the New reason?\n";
			cin >> answerString;
			temp->myPuppet.setReason(answerString);
			break;
		}
		default:
			cout << "You Speaking Spanish or something? i can't understand you...";
			break;
		}

	}
}

void TheList::RemovePuppet() {



	int answer;

	ItemNode* temp = head;
	ItemNode* temp2 = NULL;

	if (empty()) {
		cout << "Well, aren't you being pick!...\n No one on the list, and you still want to scratch off names... \nDon't worry, i hear boys like mean girls" << endl;
	}
	else {

		
		TheList::DisplayNames();
		cout << "What puppet do you want to remove?" << endl;
		cout << "So, who are you scraching off the list today? (Input a #, corisponding to the item you want to edit)\n" << endl;
		
		cin >> answer;


		for (int i = 1; i < answer; i++) {
			temp = temp->next;
		}

		if (temp->previous = NULL) {
			head = head->next;
			delete temp;

		}
		else if (temp->next = NULL) {
			tail = tail->previous;
			delete temp;
		}
		else {
			temp2 = temp->previous;
			temp2->next = temp->next;
			temp2 = temp->next;
			temp2->previous = temp->previous;
			delete temp;
			
		}

		cout << "you were better than him anyways girl T-T\n\n";

	}

	
}

void TheList::DisplayAll() const{

	if (TheList::empty()) {
		cout << "\nThere are No Puppets in your list! Let's go Gossip!" << endl;
	}
	else {
		cout << "\n\n\n\n\nHere are all your crushes \n" << endl;
		ItemNode* temp = head;

		while (temp) {
			cout << temp->myPuppet << endl;
			temp = temp->next;
		}
		cout << "\n Better lock this diary up before Pattrick Gets His Hands on it!" << endl;

	}

	cout << "\n\n Scroll up too see the whole list! ;)\n\n";
	system("pause");
}

Puppets TheList::PuppetMaker() {

	string theName;
	int theAge;
	string theHairColor;
	int theWeight;
	bool thebfMaterial;
	string theReason;


	Puppets puppetInTheWorks;

	cout << "\n\nWOWH, THERE'S A NEW ONE?!?!   TELL ME MORE!"
		<< "\n\n What's his name? (USE_UNDERSCORES_NOT_SPACES!_)" << endl;
	cin >> (theName);
	

	cout << "\n\nOkayOkay, How Old is He?" << endl << endl;
	cin >> theAge;


	cout << "\n\n OOO Grill!.. What Color is his Hair? (USE_UNDERSCORES_NOT_SPACES!_)\n\n";
	cin >> theHairColor;


	cout << "\n\nCool Cool... How Fat is he? like... in pounds\n\n";
	cin >> theWeight;


	cout << "\n\nKK, You read for the hard question?   WOULD YOU DATE HIM? (0 = no, 1 = yes)\n\n";
	cin >> thebfMaterial;


	cout << "\n\nO yeah?!? What's the reason?\n\n (USE_UNDERSCORES_NOT_SPACES!_)";
	cin >> theReason;


	cout << "HOT DOG GIRL! spicy...\n";
	puppetInTheWorks = Puppets::Puppets(theName, theAge, theHairColor, theWeight, thebfMaterial, theReason);
	system("pause");

	return (puppetInTheWorks);


	
}

void TheList::DisplayNames() {

	ItemNode* temp = head;

	if (empty()) {
		cout << "there are no puppets silly!" << endl;
	}
	else {
		
		cout << "----------------------------------------"
			<< "The Names of Your Puppets"
			<< endl;
		int i = 1;
		while (temp != NULL) {
			cout << "#" << i << ":\t" << temp->myPuppet.name << endl;
			i++;
			temp = temp->next;
		}
	}
}