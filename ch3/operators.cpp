#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter a integer value: ";
	int n;
	cin >> n;
	double m = n;	// because sqrt() is not defined for integers.
	cout 	<< "n == " << n
			<< "\nn+1 == " << n + 1
			<< "\nthree times n == " << n * 3
			<< "\ntwice n == " << n + n
			<< "\nn squared == " << n * n
			<< "\nnhalf of n == " << n/2
			<< "\nsquare root of n == " << sqrt(m) // sqrt() from the std library
			<< "\n";

	cout << "Please enter your first and second names\n";
	string first;
	string second;
	cin >> first >> second;
	string name = first + ' ' + second;	// string concatenation
	cout << "Hello, " << name << "\n";

	return 0;
}