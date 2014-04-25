#include "roompicker.h"
using namespace std;

int main() {

	int toTheBasement;
	Counts timesPicked;

	for(unsigned long i  = 0 ; i < 3000000003 ; i++) {

		srand(time(NULL));

		toTheBasement = (rand() % 4);
		
		determinePick(toTheBasement, timesPicked);
	}
	
	
	cout << "\n" << timesPicked << " to the basement...\n"
		 << "Happy wheezing!\n\n";

	return 0;
}
	


