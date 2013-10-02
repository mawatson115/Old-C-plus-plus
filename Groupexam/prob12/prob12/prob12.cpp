//Team 3
#include<iostream>
#include<iomanip>
#include<cctype>

using namespace std;

//functions to get the information and print it out.
void initialize( char form[][6]);
void getData(char& ticketType, int& row, char& column);
void printForm(char form[][6], int row, char column);

int main()
{
    char ch, ticketType, column;
    int row;
    char form[13][6];

    initialize( form);
    cout << "This program assigns seats for a commercial airplane." << endl;
	cout <<	"All seats are currently available so choose wisely." << endl;
    cout << "Do you want to reserve a seat now? Enter 'y' for yes or 'n' for no." << endl;
    cin >> ch;
    
    ch = static_cast<char>(toupper(ch));
    while(ch == 'Y')     //main loop to reserve seats.
    { 

        getData(ticketType, row, column);
        printForm(form, row, column);
        
        cout << "Your seat has been reserved, do you wish to reserve another seat? Enter 'y' for yes or 'n' for no." << endl;
        cin >> ch;
        ch = static_cast<char>(toupper(ch));
        if(ch == 'N')
          return 0;     
    }

    
    return 0;
}

void initialize( char form[][6]) //int function to make the stars on all the seats.
{
     for(int i=0;i < 13;i++)
       for(int j=0;j<6;j++)
         form[i][j]='*';
}



void getData(char& ticketType, int& row, char& column) //function used to get the data from the person, such as which ticket type and their seat.
{          
    cout << "The airplane has 13 rows, with  six seats in each row." << endl;
         
    cout << "Enter ticket type," << endl;
    cout << "F for first class, " << endl;
    cout << "B for business class," << endl;
    cout << "E for economy class:" << endl;
    cin >> ticketType;

    ticketType = static_cast<char>(toupper(ticketType));
    while(ticketType != 'F' && ticketType != 'B' && ticketType != 'E')
    {
        cout << "Invalid ticket type." << endl;
	    cout << "Enter ticket type," << endl;
        cout << "F for first class, " << endl;
        cout << "B for business class," << endl;
        cout << "E for economy class:" << endl;
        cin >> ticketType;

        ticketType = static_cast<char>(toupper(ticketType));
     }      
    switch(ticketType)
    {
           case 'F':
                cout <<  "Row 1 and 2 are first class,\n";
                break;
           case 'B':
                cout <<  "row 3 throuh 7 are business class,\n";
                break;
           case 'E':
                cout <<  "row 8 through 13 are economy class." << endl; 
                break;
    }
                
    cout << "Enter the row number you want to sit: " << endl;
    cin >> row;  
    
    cout << "Enter the seat number (from A to F). " << endl;
    cin >> column;
    column = static_cast<char>(toupper(column)); 

	while(column != 'A' && column != 'B' && column != 'C' && column != 'D' && column != 'E' && column != 'F')
	{
		cout << "Invalid seat choose another." << endl;
		cout << "Enter the seat number (from A to F). " << endl;
		cin >> column;
		column = static_cast<char>(toupper(column));
	}
}    

void printForm(char form[][6], int row, char column) // function used to print out the form to the person after the seat was choosen.
{
    int i, j;
  
    if(form[row-1][static_cast<int>(column-65)]=='X')
   {
       cout << "This seat already assigned. Choose another seat: " << endl;
	   return;
       cin >> column;
       column = static_cast<char>(toupper(column));  
   }  
    form[ row-1 ] [static_cast<int>(column)-65]= 'X';
    
    cout << "* indicates that the seat is available; " << endl; 
    cout << "X indicates that the seat is occupied. " << endl;
    cout << setw(12) << "A" << setw(6) << "B" << setw(6) << "C" 
         << setw(6) << "D" << setw(6) << "E" << setw(6) << "F" << endl;
         
    for(i = 0; i < 13; i++)
    {
       cout << left << setw(3) << "Row " << setw(2)<< i+1;
       for(j = 0; j < 6; j++)
       {
          cout << right  << setw(6) << form [i][j];
       }
       cout << endl;
    }

}