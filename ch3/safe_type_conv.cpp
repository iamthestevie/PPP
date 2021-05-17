#include "../std_lib_facilities.h"

int main() 
{
	char c = 'x';		// c -> 'x'
	
	int i1 = c;			// i1 -> 120. the char 'x' is equivalent to the int 120
	
	int i2 = 'x';		// i2 -> 120. both i1 and i2 are assigned the int 120.
	
	char c2 = i1;		// c2 -> 'x'

	cout << c << ' ' << i1 << ' ' << c2 << "\n";

	// the above should print x 120 x
	// c is of type char and points to 'x'
	// i1 is of type int and points to 'x' which is equivalent to 120 in ASCII
	// c2 is of type char and points to 'x'.
	
	return 0;
}