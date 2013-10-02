#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double num;

	cout << "Please enter a decimal number to be rounded to the nearest two decimal places: " << endl;
	cin >> num;

    cout << setprecision(2) << fixed <<  num << '\n'; 
	


	return 0;
}