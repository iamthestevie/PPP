#include "std_lib_facilities.h"

////////////
// VECTOR //
////////////

// Most programs of interest require a collection of data to work on.
// - a list of phone numbers
// - members of a football team
// - a list of courses
// - a list of books read
// - a list of weather forecasts for the next week etc ...

// the VECTOR is one of the simplest and most useful ways of storing data.
// Vector indexes start at 0
// Vectors 'know' their size, by storing it (similar to strings)

/////////////////////
// MAKING A VECTOR //
/////////////////////

std::vector<int> v = {5, 7, 9, 4, 6, 8};	// a vector of 6 ints
//	ensure you specify the type of objects being stored in the vector.
// 	vectors will only accept elements of their declared type
vector<string> philosopher = {"Kant", "Plat", "Hume", "Kierkegaard"};
philosopher[2] = 99;	// ERROR: trying to assign an int to a string

// defining an empty vector. All values are given a default initial value
vector<int> vi(6);		// vector of 6 ints initialized to 0
vector<string> vs(4);	// vector of 4 strings initialized to "" (empty string)

// Cannot simply refer to a non existent element of a vector
vi[20'000] = 44;	// run-time error

/////////////////////////
// TRAVERSING A VECTOR //
/////////////////////////

// printing the elements of a vector
vector<int> v = {5, 7, 9, 4, 6, 8};
for (int i = 0; i < v.size(); ++i)	// vectors know their size.
	cout << v[i] << '\n';

// calling v.size() gives the number of elements in the vector called v.
// the RANGE for a vector v is [0: v.size()) - this is called a HALF-OPEN sequence.
//		the first element of v is v[0]
//		the last element of v is v[v.size() - 1]
//		if v.size() == 0 then v is an empty vector.

// C++ takes advantage of HALF-OPEN SEQUENCES using range-based for-loops
vector<int> v = {5, 7, 9, 4, 6, 8};
for (int x : v)
	cout << x << '\n';
// this can be read as "for each int x in v"
// if all you need to do is look at each element in a vector in sequence
// use the range-for-loop, but if anything more complicated is needed
// its better to use the traditional for-statement.

//////////////////////
// GROWING A VECTOR //
//////////////////////

vector<double> v;	// start off with an empty vector

// v:[0][]

v.push_back(2.7);	// add an element with value 2.7 at the end of v
					// v now has one element v[0] == 2.7

// v: [1][]->[2.7]

v.push_back(5.6);	// add an element with value 5.6 at the end of v
					// v now has two elements v[1] == 5.6

// v: [2][]->[2.7][5.6]

// and so on ...

v.push_back(7.9)	// push_back is called a MEMBER-FUNCTION similar to size()

///////////////////////
// A NUMERIC EXAMPLE //
///////////////////////

// The basic technique for getting an unknown - possible large - amount of data
// into a computer.

// read some temperatures into a vector
int main()
{
	vector<double> temps;	// declare a vector to hold data
	for (double temp; cin >> temp;) // cin>>temp will be true if a value was read
		temps.push_back(temp);		// put temp into temps vector
}

// the for loop above will continue to run as long as cin>>temp is true
// and this condition will hold as long as a double is read correctly from
// standard input. Anything that isn't a double will terminate the input.

// could have also been done with a while loop but notice that this increases
// the scope of the temp variable

int main()
{
	double temp;
	while (cin >> temp)
		temps.push_back(temp);
	// temp might be used here.
}

// once the data is inside a vector it can be easily manipulated...
// compute the mean and median temperatures:
int main()
{
	vector<double> temps;
	for (double temp; cin >> temp)
		temps.push_back(temp);

	// compute mean temperature
	double sum = 0;
	for (double x : temps) sum += x; // add up all the temperatures
	cout << "Average temperature: " << sum / temps.size() << '\n';

	// compute the median temperature
	sort(temps); // sort temperatures
	cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
}

////////////////////
// A TEXT EXAMPLE //
////////////////////

// simple dictionary: list of sorted words
int main()
{
	vector<string> words;
	for (string temp; cin >> temp)
}
