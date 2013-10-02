#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int us;
	int euros;
	int yen;
	int pesos;
	char number;
	double currency;

	cout << "Enter How many U.S. Dollars you want to convert: " << endl;
	cin >> us;

	cout << "Please select the number next to the currency you wish to convert to: " << endl;
	cout << "1. Euros" << endl;
	cout << "2. Yen"   << endl;
	cout << "3. Pesos"  << endl;

	cin >> number;

	if (number=='1')
	{
		currency=us*.7223; //This is the current conversion rates from yahoo.
		cout << "Your conversion total is: " << currency << " Euros." << endl;
	}
	else if (number=='2')
	{
		currency=us*76.795; //This is the current conversion rates from yahoo.
			cout << "Your conversion total is: " << currency << " Yen." << endl;
	}

	else if (number=='3')
	{
		currency=us*12.9; //This is the current conversion rates from yahoo.
		cout << "Your conversion total is: " << currency << " Pesos." << endl;
	}

	else
	{
	cout << "You entered a wrong selection." << endl;
	cout << "Your US currency is: " << us << endl;
	}




	return 0;
}