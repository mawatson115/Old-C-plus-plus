#include <iostream>
#include <string>


using namespace std;

int main()
{
	//counter controlled
	
	int count = 0;
	while (count < 10)
	{
		cout << "Computers rock" << count << endl;
		count++;
		
	}

	//sentinel controlled

	char  characters;
	cout << "Enter Characters when you are done enter a p" << endl;
	cin >> characters;

	while(characters !='p')
	{

		cout << characters << endl;
		cin >> characters;


	}

	//flag controlled

	bool done = false;

	
	while (!done)
	{
	cout << "Please enter a name.  I will stop asking when you give me a good name" << endl;
	string name;
	cin>> name;
		if(name == "Kip")
			done = true;
		


	}

	for (int i =0; i < 100; i++)
	{
		cout << "The count is: " << i << endl;
	}





return 0;
}