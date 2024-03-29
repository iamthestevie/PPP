#include "../std_lib_facilities.h"

int main()
{
	constexpr double cm_per_inch = 2.54;	// number of cms's in an inch
	
	double length = 0;						// variables to hold our units
	char unit = 0;
	
	cout << "Please enter a length followed by a unit (c or i):\n";
	cin >> length >> unit;
	
	if (unit == 'i')
		cout << length << "in == " << cm_per_inch * length << "cm\n";
	else if (unit == 'c')
		cout << length << "cm == " << length / cm_per_inch << "in\n";
	else
		cout << "Sorry, I don't know a unit called " << unit << "\n";
	return 0;
}