/*
Write a program that “bleeps” out words that you don’t like; 
that is, you read in words using cin and print them again on cout. 
If a word is among a few you have defined, you write out BLEEP instead of that word. 
Start with one “disliked word” such as

string disliked = “Broccoli”;

When that works, add a few more.
*/

#include "../std_lib_facilities.h"

//Function declarations
void print_vector(vector<string> words);

int main()
{
	// Create a vector to hold words that I don't like.
	cout << "Enter a list of words that you don't like. \n"
		<< "When complete hit ctrl-z (windows) or ctrl-d (unix) to end input.\n";
	vector<string> disliked;

	// Enter values into the vector
	for (string temp; cin >> temp;)
	{
		if (temp == "*")
			break;
		else
			disliked.push_back(temp);
	}	

	// print out what was entered
	cout << "You entered: \n";
	print_vector(disliked);

	cout << "Next let's enter some words that you would like me to repeat back to you.\n";
	string temp2;

	bool bad = false;
	char cont = 'y';
	while (cont == 'y')
	{
		cout << "Enter a word: ";
		temp2 = "";
		cin >> temp2; // get a word from the user.
		cout << "Checking of the word is in the list of bad words...\n";
		
		for (string w : disliked)
			if (w == temp2)
				bad = true;

		if (bad == true)
			cout << "The value you entered is: bleep. \n";
		else
			cout << "The value you entered is: " << temp2 << '\n';

		cout << "Enter 'y' to continue entering: ";
		cin >> cont;
		bad = false;
	}

	return 0;
}

void print_vector(vector<string> words)
{
	for (int i = 0; i < words.size(); ++i)
		cout << "vector[" << i << "] == " << words[i] << '\n';
}