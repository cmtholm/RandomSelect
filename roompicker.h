#ifndef ROOMPICKER_H
#define ROOMPICKER_H
#include <iostream>
#include <cstdlib>
#include <climits>
using namespace std;


#define NUM_NAMES 4;

enum Names { Connor, Chris, Nolan, Danny };

struct Counts {
	unsigned long Connor;
	unsigned long Chris;
	unsigned long Nolan;
	unsigned long Danny;
	
	Counts() :
		Connor(0),
		Chris(0),
		Nolan(0),
		Danny(0) {}

	unsigned long operator[](int i) {
		switch(i) {
			case(0) :
				return Connor;
			case(1) :
				return Chris;
			case(2) :
				return Nolan;
			case(3) :
				return Danny;
		}
		//should never reach here
		return 0;
	}

};

ostream& operator <<(ostream &out, Counts &timesPicked) {	
	
	Names toPrint = Connor;
	unsigned long currentHighest = timesPicked.Connor;

	if(currentHighest < timesPicked.Chris) {
		currentHighest = timesPicked.Chris;
		toPrint = Chris;
	}

	if(currentHighest < timesPicked.Nolan) {
		currentHighest = timesPicked.Nolan;
		toPrint = Nolan;
	}

	if(currentHighest < timesPicked.Danny) {
		currentHighest = timesPicked.Danny;
		toPrint = Danny;
	}

	switch(toPrint) {
		case(Connor) :
			out << "Connor";
			break;
		case(Chris) :
			out << "Chris";
			break;
		case(Nolan) :
			out << "Nolan";
			break;
		case(Danny) :
			out << "Danny";
			break;
	}

	return out;
}
	
void determinePick(int &toTheBasement, Counts &timesPicked) {

	switch(toTheBasement) {
		case(Connor) : timesPicked.Connor++;
					   break;
		case(Chris) : timesPicked.Chris++;
					  break;
		case(Nolan) : timesPicked.Nolan++;
					  break;
		case(Danny) : timesPicked.Danny++;
					  break;
		default : cerr << "Ya don' fuqqed up\n";
				  exit(1);
	}
}

#endif
