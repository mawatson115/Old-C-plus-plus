#include <iostream>

using namespace std;

int main()
{
	double grade1;
	double grade2;
	double grade3;
	double grade4;
	double grade5;
	double total;

	cout << "Enter the grade you recieved on Test 1. ";
	cin >> grade1;
	cout << endl;

	cout << "Enter the grade you recieved on Test 2. ";
	cin >> grade2;
	cout << endl;

	cout << "Enter the grade you recieved on Test 3. ";
	cin >> grade3;
	cout << endl;

	cout << "Enter the grade you recieved on Test 4. ";
	cin >> grade4;
	cout << endl;

	cout << "Enter the grade you recieved on Test 5. ";
	cin >> grade5;
	cout << endl;

	total = (grade1 + grade2 + grade3 + grade4 + grade5) / 5;

		cout << "Your average grade is " 
			<< total  << endl;

	return 0;
}