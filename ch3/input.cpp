#include "std_lib_facilities.h"

int main() 
{
	cout << "Please enter your first name and age\n";
	string first_name = "?";
	int age = 0;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << " (age in years " << age << ", " << "age in months "
		 << age * 12 << ")\n";

	return 0;
}