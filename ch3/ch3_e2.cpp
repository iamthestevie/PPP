// CH3 Exercise 2:
// 	Program that converts from miles to km's

#include "../std_lib_facilities.h"

int main()
{
	char cont = 'y';
	
	while (cont == 'y' || cont == 'Y')
	{
		cout << "Enter a number of units in either miles or kilometers followed by an 'm' or 'k' to indicate the "
		<< "units being provided:\n";
	
		double value = 0;
		char units = '?';
		cin >> value >> units;

		// 1 mile = 1.60934 kilometers
		// 1 kilometer = 0.621371 miles

		if (units == 'm')
			cout << value << " miles is equivalent to " << value * 1.60934 << " kilometers.";

		if (units == 'k')
			cout << value << " kilometers is equivalent to " << value * 0.621371 << " miles. ";

		cout << "Enter 'y' to cont: \n";

		cin >> cont;
	}

	cout << "Program complete.\n";

	return 0;
}