#include "../std_lib_facilities.h"

int main()
{
	double d = 0;
	while (cin >> d)
	{
		int i 	= d;		// try to squeeze a double into an int
		char c 	= i;		// try to squeeze an int into a char
		int i2 	= c;		// get the integer value of the character

		cout << "d == " << d
				<< "\ni == " << i
				<< "\ni2 == " << i2
				<< "\nchar(" << c << ")\n";
	}
	return 0;
}