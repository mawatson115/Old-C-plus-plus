// Exercise 10.13: MilesPerGallon.cpp
// Calculates miles per gallon based on user input.
#include <iostream> 
#include <iomanip>   

using namespace std; 

double milesPerGallon(double milesDriven, double gallonsUsed); 

// function main begins program execution
int main()
{
   // define variables
   double miles;   // miles driven
   double gallons; // gallons consumed
   
   // prompt user for and input miles driven
   cout << "\nEnter miles driven: ";
   cin >> miles;

   // prompt user for and input gallons used
   cout << "Enter gallons used: ";
   cin >> gallons;


   // calculate and display miles per gallon
   cout << "\nMiles per gallon: " << fixed << setprecision( 2 )
        << milesPerGallon(miles,gallons) << "\n" << endl;

   return 0; // indicate that program ended successfully

} // end function main


double milesPerGallon(double milesDriven, double gallonsUsed)
{
	return milesDriven/gallonsUsed;
	 
}