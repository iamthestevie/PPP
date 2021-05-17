#include "std_lib_facilities.h"

int main()
{
	int i1 = 0;
	int i2 = i1;

	cout << "int i1 value: " << i1
			<< "\nint i2 value: " << i2
			<< "\n";

	i1 = 1;

	cout << "int i1 value: " << i1
			<< "\nint i2 value: " << i2
			<< "\n";

	return 0;
}