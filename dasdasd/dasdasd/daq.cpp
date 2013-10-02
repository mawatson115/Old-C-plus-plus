#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

void initialize(char form[][4]);
void getData(int& row, char& column);
void printForm(char form[][4], int row, char column);

int main()
{
	char ans, column;
	int row;
	char form[7][4];

	initialize( form);
	cout<<"\t\t\t\tPASSENGERS SEAT!"<<endl;
   do
   {
   	getData(row, column);
   	printForm(form, row, column);

   	cout<<"\nDo you want to find another seat?"<<endl;
      cin>>ans;
   }while (ans == 'y');
   cin.get();
	cin.get();
	return 0;
}

void initialize(char form[][4])
{
	 for(int i=0; i < 7;i++)
	   for(int j=0;j<4;j++)
		 form[i][j]='-';
}



void getData(int& row, char& column)
{
	cout << "Enter the row number you want to sit: " << endl;
	cin >> row;
   if (row > 0 && row < 5 )
   {
		cout << "Enter the seat number (from A to D). " << endl;
		cin >> column;
		column = static_cast<char>(toupper(column));
   }
   else
   	cout<<"Invalid!"<<endl;
}

void printForm(char form[][4], int row, char column)
{
	int i, j;
   char ans;

	if(form[row-1][static_cast<int>(column-65)]=='X')
   {
	   cout << "This seat already assigned. Choose another seat: " << endl;
	   cin >> ans;
	   if (ans == 'y')
      {
      	getData(row, column);
   		printForm(form, row, column);
      }
      else
      	cout<<"Thank You!";
   }

   form[row-1] [static_cast<int>(column)-65]= 'X';
	cout << "- indicates that the seat is available; " << endl;
	cout << "X indicates that the seat is occupied. " << endl;
	cout << setw(6) << "A" << setw(5) << "B" << setw(5) << "C"
		 << setw(5) << "D" << endl;

	for(i = 0; i < 7; i++)
	{
	   cout<<(i+1);
	   for(j = 0; j < 4; j++)
	   {
		  cout<< setw(5) <<form [i][j];
	   }
	   cout << endl;
	}

}

