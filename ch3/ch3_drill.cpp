// CH 3 Drill
// Write a program that produces a form letter based on user input.


#include "../std_lib_facilities.h"

int main()
{
	cout << "Enter the name and age of the person you want to write to: \n";
	string first_name = "?";
	int age = 0;
	cin >> first_name >> age;
	cout << "Enter the name of a friend of yours: \n";
	string friend_name = "?";
	cin >> friend_name;
	char friend_sex = 0;
	cout << "Enter 'm' if your friend is male and 'f' if your friend is female.\n";
	cin >> friend_sex;

	cout << "Dear " << first_name << ",\n";
	cout << "\n";
	cout << "\tI hope you are well. Lorem ipsum dolor sit amet, consectetur\n";
	cout << "eiusmod tempor incididunt ut labore et dolore magna aliqua.\n";
	cout << "Massa ultricies mi quis hendrerit. Erat velit scelerisque in\n";
	cout << "\n";
	cout << "\tHave you seen " << friend_name << " lately? Lorem ipsum dolor sit amet, consectetur\n";
	cout << "eiusmod tempor incididunt ut labore et dolore magna aliqua.\n";
	cout << "Massa ultricies mi quis hendrerit. Erat velit scelerisque in\n";
	cout << "\n";
	cout << "\tI hope you are well. Lorem ipsum dolor sit amet, consectetur\n";
	cout << "eiusmod tempor incididunt ut labore et dolore magna aliqua.\n";
	cout << "Massa ultricies mi quis hendrerit. Erat velit scelerisque in\n";

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	if (friend_sex == 'f')
		cout << "\tIf you see " << friend_name << " please ask her to call me.\n";

	cout << "\n";
	cout << "\tI hear you just had a birthday and you are " << age << " years old.";

	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");


	return 0;
}