#include "std_lib_facilities.h"

// Note that print_square performs two logical actions:
//	1. it prints
//	2. it calculates square
// in general functions work best when they perform a single logical action.
// Programs are easier to write and understand when each function performs a single
// logical action.
void print_square(int v)
{
	cout << v << '\t' << v*v << '\n';
}

int main()
{
	for (int i = 0; i < 100; ++i)
		print_square(i);
		
	return 0;
}
