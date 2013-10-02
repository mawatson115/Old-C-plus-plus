#include <iostream> 
#include <iomanip>  
#include <cmath>    

using namespace std; 

const double pi = 3.14159;
double spherevolume(double radius);

int main()
{

	int radius;

	cout << "Please enter the radius" << endl;
	cin >> radius;

	cout << fixed << showpoint << setprecision(2);

	cout << "The volume is: " << spherevolume(radius) << endl;

   return 0;
} 

double spherevolume(double a)
{
	double volume=   4 * pi * pow(a,3) /3 ;
	return volume;

}