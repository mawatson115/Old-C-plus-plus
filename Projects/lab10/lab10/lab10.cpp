#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct menuItemType
{
	string menuItem;
	double menuPrice;
};

void printCheck(int compMenuList[], int counter2);
void getData(int compMenuList[], int& counter1);
void showMenu();

int main()
{
	int menuSelection[8];
	int counter = 0;

	showMenu();

	getData(menuSelection, counter);
	printCheck(menuSelection, counter);


	return 0;
}


void showMenu()
{
	cout << "Welcome to Johnny's Resturant." << endl;
	cout << endl;
	cout << "(1)Plain Egg\t\t$1.45" << endl;
	cout << "(2)Bacon and Egg\t$2.45" << endl;
	cout << "(3)Muffin\t\t$0.99" << endl;
	cout << "(4)French Toast\t\t$1.99" << endl;
	cout << "(5)Fruit Basket\t\t$2.49" << endl;
	cout << "(6)Cereal\t\t$0.69" << endl;
	cout << "(7)Coffee\t\t$0.50" << endl;
	cout << "(8)Tea\t\t\t$0.75" << endl;
	cout << endl;
	cout << "Enter the number corresponding with your choice then press the space bar. Enter end to stop." << endl;
	cout << endl;

}

void getData( int compMenuList[], int& counter1)
{
	int items;
	counter1 = 0;
	cout << "How many items do you wish to order? " << endl;
	cin >> items;
	cout << "Enter the menu choice(s): ";


	for(counter1 == items; counter1 < items;)
	{
		cin >> compMenuList[counter1];
		
		if(compMenuList[counter1] == 'end')
			break;
		else
		counter1++;
	}

	

}

void printCheck(int compMenuList[], int counter2)
{
	menuItemType menuList[8];
	int i;
	int j;
	double sum = 0;
	double amountDue;
	double taxAmount;

	for(i = 0; i < counter2; i++)
	{
		switch(compMenuList[i])
		{
		case 1:
			menuList[i].menuItem = "Plain Egg";
			menuList[i].menuPrice = 1.45;
			break;
		case 2:
			menuList[i].menuItem = "Bacon and Egg";
			menuList[i].menuPrice = 2.45;
			break;
		case 3:
			menuList[i].menuItem = "Muffin";
			menuList[i].menuPrice = 0.99;
			break;
		case 4:
			menuList[i].menuItem = "French Toast";
			menuList[i].menuPrice = 1.99;
			break;
		case 5:
			menuList[i].menuItem = "Fruit Basket";
			menuList[i].menuPrice = 2.49;
			break;
		case 6:
			menuList[i].menuItem = "Cereal";
			menuList[i].menuPrice = 0.69;
			break;
		case 7:
			menuList[i].menuItem = "Coffee";
			menuList[i].menuPrice = 0.50;
			break;
		case 8:
			menuList[i].menuItem = "Tea";
			menuList[i].menuPrice = 0.75;
			break;
		default:
			break;
		}
	}

	
	cout << "Welcome Johnny's Resturant" << endl;
	cout << endl;

	for(j = 0; j < counter2; j++)
	{
		
		cout << menuList[j].menuItem <<  setw(10)  << "$" << menuList[j].menuPrice << endl;

		sum = sum + menuList[j].menuPrice;
	}

	taxAmount = sum * 0.05;
	amountDue = (sum * 0.05) + sum;

	cout  << "Tax"  << setw(10)  << "$" << taxAmount << endl;
	cout  << "Amount Due" << setw(10)  << "$" << amountDue << endl;
}