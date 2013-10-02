// Exercise 13.13: CafeteriaSurvey.cpp
// Application that asks 20 users to enter a rating of the quality of
// food in the student cafeteria and displays a histogram of the
// data. User can add ratings between the values of 1 and 10, with
// 1 being "awful" and 10 being "excellent."
#include <iostream> // required to perform C++ stream I/O

using namespace std; // for accessing C++ Standard Library members

// function main begins program execution
int main()
{
   // define variables
   int input; // stores response
   int responseCounter = 0; // tracks number of responses

   while ( responseCounter < 20 )
   {
      // get input
      cout << "\nRate cafeteria food (scale of 1 to 10): ";
      cin >> input;

      // display error message if input is out of range
      if ( true )
      {
         cout << "\nError: Specify a number within the valid range."
              << endl;
      } // end if
      // otherwise, update counters
      else
      {

      } // else

   } // end while

   // after 20 ratings have been entered, display histogram
   cout << "\nRating\tFrequency:" << endl;

   // iterate over each array element
   for ( int i = 1; i <= ( SIZE - 1 ); i++ )
   {
      cout << i << "\t"; // display current rating level

      cout << endl; // begin output for next iteration on a new line

   } // end outer for loop
 
   cout << "\n"; // insert newline for readability
   return 0; // indicates successful termination

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
