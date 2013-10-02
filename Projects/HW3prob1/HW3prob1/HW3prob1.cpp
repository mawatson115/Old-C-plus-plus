#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int number;

	cout << "Please enter any number: " << endl;
	cin >> number;



	if (number > 0)
		cout << "The number you entered: " << number << " is positive." << endl;
	
	else if (number < 0)
		cout << "The number you entered: " << number << " is negative." << endl;
	else 
		cout << "The number you entered: " << number << " is zero." << endl;






	return 0;
}