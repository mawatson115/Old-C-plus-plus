#include <iostream>
#include <string>

using namespace std;

//funcation headers go here...
void add(int a, int b, string name);

int add2(int a, int b);


int main()
{
	cout << "The awnser is " << add2(12,12) << endl;
	

	return 0;
}


//functions go after main

void add(int a, int b, string name)
{

	int c=add2(a,b);
	cout << "dear " << name << " The answer is " << c << endl;

}

int add2(int a, int b)
{
	return a+b;
	//int c=a+b
	//return c;
}