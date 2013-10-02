#include <iostream>
using namespace std;

void fillarray(double[]);
void printarray(double[]);

int main()
{
	double alpha[50];
	fillarray(alpha);
	printarray(alpha);
	return 0;
}

void fillarray(double arr[])
{
	for(int i = 0; i < 50; i++)
	{
		if (i < 25)
			arr[i] = i*i;
		else
			arr[i] = 3*i;
	}
	return;
}

void printarray(double arr[])
{
	for(int i = 0; i < 50; i++)
	{
		cout << arr[i] << " ";
		if((i+1)% 10 == 0)
			cout << endl;
	}
	return;
}
