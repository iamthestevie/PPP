#include "std_lib_facilities.h"

int main()
{
	double d = 2.5;
	int i = 2;
	int i2 {d/i};
	cout << i2 << '\n';

	return 0;
}