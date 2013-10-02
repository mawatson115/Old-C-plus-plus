// Exercise 10.16: GasPump.cpp
// Calculates gas prices based on the number of gallons and grade.
#include <iostream> // required to perform C++ stream I/O
#include <iomanip>  // required for parameterized stream manipulators

using namespace std; // for accessing C++ Standard Library members

// calculate and display the total price based on gas grade
void totalSale( int grade, double gallons )
{
   cout << fixed << setprecision( 2 ); // format output
   cout << "\nTotal is: $";

   // determine the grade selected and output total
   switch ( grade )
   {
      case 1:
         cout << ( 1.61 * gallons ) << "\n" << endl;
         break;

      case 2:
         cout << ( 1.67 * gallons ) << "\n" << endl;
         break;

      case 3:
         cout << ( 1.77 * gallons ) << "\n" << endl;
         break;
   } // end switch

} // end function total

// function main begins program execution
int main()
{
   // define variables
   double gallons; // number of gallons of gas
   int response;   // number corresponding to gas grade

   cout << "\nEnter number of gallons: ";
   cin >> gallons; // retrieve number of gallons

   // verify that the number of gallons is greater than 0
   if ( gallons <= 0 )
   {
      cout << "\nGallons must be greater than 0\n" << endl;

      return 1; // indicate that program ended erroneously

   } // end if

   // display menu of gasoline grades
   cout << "\nSelect gasoline grade" << endl;
   cout << "1 - Regular @ $1.61/gallon" << endl;
   cout << "2 - Special @ $1.67/gallon" << endl;
   cout << "3 - Super+ @ $1.77/gallon" << endl;
   cout << "Enter selection: ";
   cin >> response; // input gasoline grade

   // ensure that the user entered a valid response
   if ( ( response <= 0 ) || ( response > 3 ) )
   {
      cout << "\nSelection must be between 1 and 3\n" << endl;

      return 1; // indicate that program ended erroneously

   } // end if

   totalSale( response, gallons ); // display total

   return 0; // indicate that program ended successfully

} // end function main

