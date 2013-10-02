#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	
	double colonial;
	double split;
	double single;
	
	double cc;
	double ca;
	double splitc;
	double splita;
	double singlec;
	double singlea;
	double cprice;
	double splitprice;
	double singleprice;

	cout << "Please enter the base price for the colonial house: " << endl;
	cin >> cc;
	cout << "Please enter the finished area in square feet for the colonial house: " << endl;
	cin >> ca;

	cout << "Please enter the base price for the split-entry house: " << endl;
	cin >> splitc;
	cout << "Please enter the finished area in square feet for the split-entry house: " << endl;
	cin >> splita;

	cout << "Please enter the base price for the single-story house: " << endl;
	cin >> singlec;
	cout << "Please enter the finished area in square feet for the single-story house: " << endl;
	cin >> singlea;


	cprice=cc/ca;
	splitprice=splitc/splita;
	singleprice=singlec/singlea;

	cout << setprecision(2) << fixed;


	if (cprice < splitprice && cprice < singleprice)
	{
		cout << "The Colonial is the cheapest at: $" << cprice << " price per square foot." << endl;
	}

	else if (splitprice < cprice && splitprice < singleprice)
	{
		cout << "The Split-entry house is the cheapest at: $" << splitprice << " price per square foot." << endl;
	}
	else
		cout << "The Single-level house is the cheapest at: $" << singleprice << " price per square foot." << endl;


	return 0;
}