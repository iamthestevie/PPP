#include "../std_lib_facilities.h"

// Function declarations
void print_vector(vector<string> words);
void print_unique(vector<string> words);
void print_word_count(vector<string> words);

int main()
{
	cout << "Enter some words separated by whitespace. "
		<< "Hit ctrl-d (unix) or ctrl-z (windows) when finished:\n";
	
	vector<string> words;
	for (string temp; cin >> temp;)
		words.push_back(temp);

	cout << "Number of words entered: " << words.size() << '\n';
	
	cout << "The unsorted vector: \n";
	print_vector(words);
	cout << "--------------------\n\n";

	sort(words);
	cout << "The sorted vector: \n";
	print_vector(words);
	cout << "--------------------\n\n";

	cout << "Unique words only: \n";
	print_unique(words);
	cout << "--------------------\n\n";

	cout << "Words and their count: \n";
	print_word_count(words);
	cout << "--------------------\n\n";

	return 0;
}


// Function definitions
void print_vector(vector<string> words)
{
	for (int i = 0; i < words.size(); ++i)
		cout << "vector[" << i << "] == " << words[i] << '\n';
}

void print_unique(vector<string> words)
{
	// the symbols <, >, ==, !=, <=, >=, all work for strings.
	// these symbols use the lexicographical ordering.
	for (int i = 0; i < words.size(); ++i)
		if (i == 0 || words[i - 1] != words[i])
			cout << "vector[" << i << "] == " << words[i] << '\n';
}

void print_word_count(vector<string> words)
{
	sort(words); // start with a sorted vector
	int counter = 0; // counter to track number of repetitions

	// check if the vector is empty
	if (words.size() == 0)
	{
		cout << "The vector is empty.\n";
		return;
	}
	
	// if the vector has words in it:
	for (int i = 0; i < words.size(); ++i)
	{
		string next = words[i];
		++counter;
		int k = i + 1;
		while (k < words.size() && next == words[k])
		{
			++counter;
			++k;
		}
		cout << next << "\t\t" << counter << '\n';
		i = k - 1;
		counter = 0;
	}
}