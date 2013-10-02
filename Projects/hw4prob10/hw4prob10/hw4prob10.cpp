#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int firstNum, secondNum;
int sum = 0;


//Part a
cout << "Please enter two numbers.  The first must be less then the second." << endl;
cin >> firstNum >> secondNum;
cout << endl;


//Part c

for(int counter=firstNum; counter <= secondNum; counter++)
{

if (counter % 2 == 0)
{
	counter;
}
else
{
counter  + 1;
}
sum = sum + counter;

}



cout << "Sum of even integers between " << firstNum << " and "
<< secondNum << " = " << sum << endl;


return 0;
}