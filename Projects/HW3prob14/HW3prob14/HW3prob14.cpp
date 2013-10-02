#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int account;
	int minutes;
	int day;
	int night;
	
	char code;
	char r;
	char R;
	char p;
	char P;

	double regularcharge;
	double premiumcharge;
	double nightcharge;
	double daycharge;
	double minuteservice;
	

	
	
	
	cout << "Please enter your account number: " << endl;
	cin >> account;



	cout << "Please enter your service code:" 
		 << "R or r for Regular: "
		 << "P or p for Premium: ";
	cin >> code;
	cout << endl;


	if (code=='r'||code=='R')

		{
				cout << "Please enter how many minutes of service you used: " << endl;
				cin >> minutes;

		 if (minutes <= 50)
                     {
 
                     regularcharge = 10;
	 
	                     }
	 
	                    else if (minutes > 50)
	 
	                     {
	 
	                   regularcharge = 10 + (minutes - 50) * .20;
	 
	                    }
	}

	else if (code=='p'||code=='P')
		{

	 cout << "Enter the number of minutes that was used during the day: \n";
	 cin >> day;
	 
	 cout << "Enter the number of minutes that was used during the night: \n";
     cin >> night;
 
	if (day <= 75)
	 
	   {
	 
	     daycharge = 0;
 
	   }
	
	   else if (day > 75)
 
      {
	 
        daycharge = (day - 75) * .10;
	  }
	
	  if (night <= 100)
                   
	  {
	 
	   nightcharge = 0;
	 
	  }
	 
	   else if (night > 100)
 
	  {
	 
       nightcharge = (night - 100) * .05;
 
      }
	   
	 
	   premiumcharge = daycharge + nightcharge + 25;
	}

	
	else
	{
		cout << "invalid service type." << endl;
	}

	cout << "Account number: " << account << endl;
	cout << "Type of service: " << code << endl;

	cout << setprecision(2) << fixed;

	if (code=='r'||code=='R')
	cout << "Your Bill total is: " << regularcharge << endl;
	else if (code=='p'||code=='P')
	cout << "Your Bill total is: " << premiumcharge << endl;
	else
	cout << "You have entered an invalid service type, please try again." << endl;


	return 0;
}