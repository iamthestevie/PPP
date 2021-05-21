#include "../std_lib_facilities.h"

int main()
{
	// program to print lower case letters and their corresponding
	// integer values. For example:
	// a 	97
	// b	98 ...
	char start = 'a'; // initializer: start from a.
	while (start <= 'z') {
		int char_to_int = start;
		cout << start << '\t' << char_to_int << '\n';
		++start;
	}

	int i = 0;
	while (i < 26) {
		cout << char('a' + i) << '\t' << int('a' + i) << '\n';
		++i;
	}

	// using for loops
	for (i = 0; i < 26; ++i){
		cout << char('a' + i) << '\t' << int('a' + i) << '\n';
	}

	return 0;
}