#include <iostream>

using namespace std;
const double k = .0000000667;
int main ()
{
	double force;
	double m1;
	double m2;
	double d;

	cout << "Please enter two masses and a distance.  Separate them by spaces." << endl;
	cin >> m1 >> m2 >> d;

	force = k * ((m1 * m2) / (d * d));

	cout << "Your force is " << force << endl;

	return 0;


}