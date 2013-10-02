#include <iostream>
#include <string>

using namespace std;
const int liter = 3.78;
int main()

{
	double milk;
	int cartons;
	double cost;
	double profit;

	cout << "What is the total amount of milk produced today? " << endl;
	cin >> milk;

	cartons = milk/liter;
		cout << "You will need: " << cartons << " cartons to hold your milk." << endl;

	cost = cartons * .38;
	profit = cost - (cartons * .27);

	cout << "Your cost for producing this milk is: $" << cost << endl;
	cout << "Your total profit for producing this milk is: $" << profit << endl;

	return 0;

}