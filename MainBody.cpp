//Coded by: William Oswald (J00574334) 9/18/2018
//The purpose of this program is to construct a list of puppets (not people) whom are "boyfriend material"

#include <iostream>
#include <iomanip>
#include <string>

#include "Puppets.h"
#include "DoublyLinkedList.h"
#include "Puppets.h"


using namespace std;

int WannaDoanswer;
int WannaDo();
void DoingTheThing(int number);

bool KeepGoing = true;

void OriginalList();


Puppets WorkingPuppet;
Puppets WorkingPuppe2;
Puppets WorkingPuppet3;
TheList WorkingList;

int main() {
	cout << "Homework Assignment #3, Lists \nBy William Oswald (J00574334) \n\n"
		<< "The Purpose of this program is to manage a list of puppets who are 'BoyFriend Material'\n"
		<< "keep in mind, these are ''Puppets'', not ''people''\n" << endl;

	OriginalList();

	system("pause");

	while ( KeepGoing)
	{
		WannaDoanswer = WannaDo();
		DoingTheThing(WannaDoanswer);
	}



	cout << "Locked up Tight, Unless Josh tried to break the lock again... Hehe! <(^.^)>\n <3 <3 <3 XD XD XD <3 \nWritten by William Oswald (J00574334)" << endl;

	system("pause");
	

	

	return 0;
}

void DoingTheThing(int number) {

	cout << endl << endl;
	switch (number) {
	case 1: cout << "IS THAT A 1?!?!!? WHO YOU CRUSHING ON =OO\n" << endl;
		system("pause");
		WorkingList.AddToFrount(WorkingList.PuppetMaker());
		break;
	case 2: cout << "2? So you crushing, but not that hard.. i get'cha <(0.0<)\n" << endl;
		system("pause");
		WorkingList.AddToTail(WorkingList.PuppetMaker());
		break;
	case 3: cout << "Wowh, 3?    Who you thinking about asking out? :DDD\n" << endl;
		system("pause");
		WorkingList.DisplayPuppet();
		break;
	case 4: cout << "4? Hear some good Gossip from Garry? WHAT DID GARRY SAY??!?!\n" << endl;
		system("puse");
		WorkingList.EditPuppet();
		break;
	case 5: cout << "5: AN'T NO BOY WORTH THAT, DIS WHY I TELL YOU STAY SINGLE! D:>\n" << endl;
		system("pause");
		WorkingList.RemovePuppet();
		break;
	case 6: cout << "6? Loney are we? Just hope you an't spying on me again Conner\n" << endl;
		system("pause");
		WorkingList.DisplayAll();
		break;
	case 7: 
		KeepGoing = false;
		break;
	default: cout << "INVALID INPUT ALONG THE WAY, EVERYTHING IS BORKEN...\nYeah... i dunno, Cin is really dumb, with an invalid input it never wan'ts to work again...\n so you need to reset \n\n" << endl;
		system("pause");
		break;

	}


}

int WannaDo() {
	int theAnswer;

	WorkingList.DisplayNames();

	cout << "\n-------------------------------------------\n"
		<< "What Would you like to do?\n"
		<< "\t#1:\t Add to the Front of the list\n"
		<< "\t#2:\t Add to the Back of the list\n"
		<< "\t#3:\t Search and Display Puppet\n"
		<< "\t#4:\t Edit a Puppet\n"
		<< "\t#5:\t Remove Puppet\n"
		<< "\t#6:\t Display All Puppets on the List\n"
		<< "\t#7:\t Exit the program"
		<< "\n--------------------------------------------"
		<< endl;

	cin >> theAnswer;
	return theAnswer;
}

void OriginalList() {

	WorkingPuppet = Puppets::Puppets("Elmo", 46, "Red", 2, false, "As cute as it could be to date elmo, i hear he keeps a HOMELESS MAN??? Like for real, who is Mr. Noodle Head?\n\n There is no way i'd date him until he at least paints the walls of his house, instead of covering them in crayon.. ");
	WorkingList.AddToTail(WorkingPuppet);

	WorkingPuppet = Puppets::Puppets("Kermit The Frog", 68, "Green", 5, true, "Green and Froggy... But Who knows, this may be a story of kissing the prince frog and turning him back into a human...\nBesides, he's a well rounded person who can play the bango! plus he's famous!\n\n Besides, frogs and long tounges, he'll be great in bed.\nMISS PIGGY MAKE ROOM, I'MMA STEAL YO MAN!");
	WorkingList.AddToTail(WorkingPuppet);

	WorkingPuppet = Puppets::Puppets("Cookie Monster", 46, "Blue", 700, false, "He's a Great guy don't get me wrong, but really, he's just a friend.\nHe's one of those guys that you invite to the party because you know he'll brighten up the night,\n but you definently aren't going home with him.. he's just gross.\n\n so until he get's on weight watchers, i'll pass on this one");
	WorkingList.AddToTail(WorkingPuppet);

	WorkingPuppet = Puppets::Puppets("Oscar the Grouch", 23, "Green", 7, 0, "Green, Ugly, Lives in a Literal Trashcan... This isn't the guy for me. He's just my drug dealer");
	WorkingList.AddToTail(WorkingPuppet);

	WorkingPuppet = Puppets::Puppets("Bert & Ernie", 17, "Green", 12, 0, "Bert And Ernie are Basically Inseperable, so if i want in the realationship, it has to be a three-way, and i'm down.\nReally, they're both increadable, so i'd happy take either of them... \nto bad they're only 17... Jail Bait AF... but i'm planning a birthday supirse! <3");
	WorkingList.AddToTail(WorkingPuppet);

	WorkingPuppet = Puppets::Puppets("Animal", 43, "Red", 8, 1, "Red, Hot, Plays the Drumms. I bet he even rides a motercycle!!1 Every time i see him, he always looks Excited, life is never boring with him around!\nPlus he's fun, great at parties... Sure you can't understand what he's saying, but that's alright\nBesides, i hear he's an ANIMAL in bed X)");
	WorkingList.AddToTail(WorkingPuppet);

}
