// Program that implements square() without using the multiplication operator.
// Do the x * x by repeated division (start a variable result at 0 and add x to it x times).
// Print the result
// OUTPUT:
// 0	0
// 1	1
// 2	4
// 3	9	...

#include "std_lib_facilities.h"


// Version of square that calculates square using repeated addition.
int square(int x)
{
	int result = 0;
	
	for (int i = 0; i < x; ++i)
		result += x;

	return result;
}

int main()
{
	char cont = 'y';	// set cont to 'y'
	while (cont == 'y')	// run the while loop
	{
		cout << "Enter a value you would like to print the square of: ";
		int val = 0;
		cin >> val;
		
		for (int i = 0; i <= val; ++i)
			cout << i << '\t' << square(i) << '\n';
		
		cout << "If you would like to continue type 'y'.\n";
		cin >> cont;
		
		if (cont != 'y')
			cout << "Goodbye.\n";
	}	
	return 0;
}
