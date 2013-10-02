#include <iostream>
#include <string>

using namespace std;

enum books {genesis, exodus, leviticus, numbers, deuteronomy};
void print(books b);

int main()
{
	books myfav;
	books yourfav;

	myfav=numbers;
	yourfav=genesis;

	if(myfav > yourfav)
	{
		cout << "My book was second." << endl;
	}
	else
		cout << "Your book was second." << endl;



	myfav=static_cast<books>(myfav + 1);
		//cout << myfav;
	print(myfav);


	return 0;
}

void print(books b)
{
	switch(b)
		{case 0:
	cout << "Genesis" << endl;
	break;
		case 1:
			cout << "Genesis" << endl;
			break;
		case 2:
			cout << "exodus" << endl;
			break;
		case 3:
			cout << "leviticus" << endl;
			break;
		case 4:
			cout << "numbers" << endl;
			break;
		case 5:
			cout << "deuteronomy" << endl;
			break;
	}
}