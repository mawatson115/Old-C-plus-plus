// Exercise 3.13: TemperatureConversion.cpp
// Application that converts a Celsius temperature to its equivalent
// Fahrenheit temperature.
#include <iostream> // required to perform C++ stream I/O

using namespace std; // for accessing C++ Standard Library members

// function main begins program execution
int main()
{  
	double celsius, far;

	cout << "Please enter the celsius temperature: " << endl;
	cin >> celsius;

	far = 9.0 / 5.0 * celsius + 32;

	cout << "The temperature in Fahrenheit is: " << far << endl;

   return 0; // indicate that program ended successfully

} // end function main


 /**************************************************************************
  * (C) Copyright 1992-2005 by Deitel & Associates, Inc. and               *
  * Pearson Education, Inc. All Rights Reserved.                           *
  * DISCLAIMER: The authors and publisher of this book have used their     *
  * best efforts in preparing the book. These efforts include the          *
  * development, research, and testing of the theories and programs        *
  * to determine their effectiveness. The authors and publisher make       *
  * no warranty of any kind, expressed or implied, with regard to these    *
  * programs or to the documentation contained in these books. The authors *
  * and publisher shall not be liable in any event for incidental or       *
  * consequential damages in connection with, or arising out of, the       *
  * furnishing, performance, or use of these programs.                     *
  **************************************************************************/
