#include <iostream>
#include "Dates.h"
using namespace std;

int main(){
	// Create a default object of the Dates class
	//  - Default: month: 1, day: 1, year: 2001
	Dates example(3, 45, 2012);
	// Output program details
	cout << "Dates Program\n\nThe user creates Dates object.\n"
            "Date is outputted in 3 formats.\n\n";
	//Check user object, set new values if input inaccurate
	if (!example.checkMonth(example.getMonth()));
	if (!example.checkDay(example.getMonth(), example.getDay()));
    //Output date in several formats
    cout << "***Dates Display***\n";
    example.printSlashStyle();
    example.printUSStyle();
    example.printEuropeStyle();
    return 0;
}
