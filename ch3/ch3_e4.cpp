// CH3 Exercise 3:
// 	Program to store two integer values and output to the user
// the smaller, larger, sum, difference, product, and ratio of the values.

#include "../std_lib_facilities.h"

int main()
{
	cout << "Enter two floating-point values:\n";
	double val1 = 0;
	double val2 = 0;
	cin >> val1 >> val2;

	cout << "You entered: " << val1 << " and " << val2 << "\n"; 

	// report smaller, larger, sum, difference, product, and ratio of the values.

	if (val1 > val2){
		cout << "Smaller: " << val2 << "\n" << "Larger: " << val1 << "\n";
	}
	else {
		cout << "Smaller: " << val1 << "\n" << "Larger: " << val2 << "\n";
	}

	cout << "Sum: " << val1 + val2 << "\n"
		<< "Difference: " << val1 - val2 << "\n"
		<< "Product: " << val1 * val2 << "\n"
		<< "Ratio: " << val1 / val2 << "\n";

		
	return 0;

}