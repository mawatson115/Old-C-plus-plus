#include <iostream> 
#include <iomanip>  

using namespace std; 


int main()
{
   
   int total = 0;      
   int gradeCount = 0;
   int grade;          

   
   cout << "\nEnter grade (-1 to end): ";
   cin >> grade;

   while ( grade != -1)
   {
 

	  if (grade > 100 || grade < -1)
	  { 
		  cout << "Input error: Please enter a number between 0 and 100 or -1 to end." << endl;
		  cin >> grade;
	  }
	  else
	 { 
	  total += grade; 
      gradeCount++; 

      
      cout << "Enter grade (-1 to end): ";
      cin >> grade;
	  }
   } 


   if ( gradeCount == 0 )
   {
      cout << "\nNo grades were entered.\n" << endl;
   } 
   else 
   {
   
      double average = static_cast< double >( total ) / gradeCount;

   
      cout << fixed << setprecision( 1 );
      cout << "\nAverage grade: " << average << endl << endl;
   } 

   return 0; 

} 



