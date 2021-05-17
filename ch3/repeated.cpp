#include "../std_lib_facilities.h"

int main()
{
	string previous = " ";	// previous word initialized to whitespace
	string current;			// current word
	while (cin >> current)	// while input stream receives words
	{
		if (previous == current)	// check if the word is the same as the last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
		
	return 0;
}