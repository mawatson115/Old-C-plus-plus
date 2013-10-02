#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int num;
	int guess;

	num = (rand() + time(0)) % 100;
	
	int count = 0;
	while (count < 5)
	{
		cout << "Enter an integer greater than or equal to 0 and less than 100: " << endl;
		cin >> guess;

		if (guess == num)
		{
			cout << "You guessed the correct number." << endl;
			cout << "YOU WIN!!!!!!!!!!!!" << endl;
			break;
		}
		else if (guess < num)
			cout << "Your guess is lower than the number. \n Guess again!" << endl;
		
		else 
			cout << "Your guess is higher than the number. \n Guess again!" << endl;
	
		count++;
		
	}
	
	if (count==5)
	{
		cout << "Your 5 tries are up! You Lose!" << endl;
	}

	return 0;
}