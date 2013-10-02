#include <iostream>
#include <iomanip>
#include <string>

using namespace std;







int main()
{

int x,y;
int ticket;
const int row= 13,seat= 6;

char plane[row][seat];

userInput();

cout<<"\t\tAirplane Seat Arrangement"<<endl;
cout<<"\tA\tB\tC\tD\tE\tF"<<endl;

for (y=1;y<=13;y++)
cout<<"Row "<<y<<"\t";

for(x=0;x<=5;x++)
{ plane[y][x]='*';
cout<<plane[y][x]<<"\t";
}
cout<<endl;


cout<<"Congratulations!! You Now Have A Seat...."<< endl;




	return 0;
}

