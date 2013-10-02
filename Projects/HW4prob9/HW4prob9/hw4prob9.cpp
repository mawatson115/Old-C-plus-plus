#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int firstNum, secondNum;
int sum = 0;
int counter;

//Part a
cout << "Please enter two numbers.  The first must be less then the second." << endl;
cin >> firstNum >> secondNum;
cout << endl;

//Part b
if (firstNum % 2 == 0)
counter = firstNum + 1;
else
counter = firstNum;

cout << "Odd integers between " << firstNum << " and "
<< secondNum << " are: " << endl;

while (counter <= secondNum)
{
cout << counter << " ";
counter = counter + 2;
}

cout << endl;

//Part c
if (firstNum % 2 == 0)
counter = firstNum;
else
counter = firstNum + 1;


while (counter <= secondNum)
{
sum = sum + counter;
counter = counter + 2;
}

cout << "Sum of even integers between " << firstNum << " and "
<< secondNum << " = " << sum << endl;


return 0;
}