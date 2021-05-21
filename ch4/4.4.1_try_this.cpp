#include "../std_lib_facilities.h"

int main()
{
	// Program that converts yen ('y'), kroner('k'), and pounds('p')
	// into dollars.

	// exchange rates as at May 20, 2021
	constexpr double cdn_to_usd = 0.82960;
	constexpr double sek_to_usd = 0.12049;
	constexpr double jpy_to_usd = 0.00919;
	constexpr double gbp_to_usd = 1.41914;

	// get input from the user:
	// 	amount 	-> amount of money to convert
	//	units	-> value to convert into USD
	//			-> 'c' -> CAD Canadian Dollars
	//			-> 'y' -> JPY Japanese Yen
	//			-> 'k' -> SEK Swedish Kroner
	//			-> 'p' -> GBP British Pounds
	double amount = 0;
	char units = '?';

	cout << "Please enter a value followed by its currency (c, y, k, p):\n";
	cin >> amount >> units;

	if (units == 'c')
		cout << amount << " in CAD converts to: $" << amount * cdn_to_usd << " in USD.\n";
	else if (units == 'y')
		cout << amount << " in JPY converts to: $" << amount * jpy_to_usd << " in USD.\n";
	else if (units == 'k')
		cout << amount << " in SEK converts to: $" << amount * sek_to_usd << " in USD.\n";
	else if (units == 'p')
		cout << amount << " in GBP converts to: $" << amount * gbp_to_usd << " in USD.\n";
	else
		cout << " Sorry, I don't recognize a unit called " << units << "\n";

	return 0;
}