#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double mass;
	double density;
	double volume;
	
	
	
	cout << "Please input the mass in grams: " << endl;
	cin >> mass;
	cout << "Please input the density in grams: " << endl;
	cin >> density;


	volume=mass/density;

   	cout << fixed << showpoint;
	cout << setprecision(2);

	cout << "The Volume of is: " << volume << endl;



	return 0;
}