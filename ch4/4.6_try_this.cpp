/*
Write a program that “bleeps” out words that you don’t like; 
that is, you read in words using cin and print them again on cout. 
If a word is among a few you have defined, you write out BLEEP instead of that word. 
Start with one “disliked word” such as

string disliked = “Broccoli”;

When that works, add a few more.
*/

#include "../std_lib_facilities.h"

int main()
{
	// Create a vector to hold words that I don't like.
	cout << "Enter a list of words that you don't like. \n"
		<< "When complete hit ctrl-z (windows) or ctrl-d (unix) to end input.\n";
	vector<string> disliked;

	// Enter values into the vector
	for (string temp; cin >> temp;)
		disliked.push_back(temp);

	cout << "Next let's enter some words that you would like me to repeat back to you.\n";
	
	cout << "Enter a word:";
	string word;

	if (cin.fail())
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	cin >> word;
	cout << "\nThe value you entered is: " << word << '\n';

	bool bad = false;

	// Check whether word is in the vector of disliked words.
	for (string w : disliked) {
		if (w == word)
			bad = true;
	}

	if (bad == false)
		cout << word << '\n';
	else
		cout << "bleep\n";

	return 0;
}