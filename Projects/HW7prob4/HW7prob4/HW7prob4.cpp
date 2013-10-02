#include <iostream>
#include <string>

using namespace std;
bool vowel(char ing);



int main()
{
	char str;
	string mynewstring=" ";


	cout << "Give me a string: " << endl;
	cin >> str;

	if (vowel(str)!=true)
	{
	   cout << str;
	}
	else
	cout << "there is no vowels" << endl;

	cout << "The new string is: " << mynewstring << endl;

	return 0;
}

bool vowel(char ing)
{
	switch(ing)
	{
	
		case 'a':
		cout << "";
		case 'b':
		cout << "b";
		case 'c':
		cout << "c";
		case 'd':
		cout << "d";
		case 'e':
		cout << "";
		case 'f':
		cout << "f";
		case 'g':
		cout << "g";
		case 'h':
		cout << "h";
		case 'i':
		cout << "";
		case 'j':
		cout << "j";
		case 'k':
		cout << "k";
		case 'l':
		cout << "l";
		case 'm':
		cout << "m";
		case 'n':
		cout << "n";
		case 'o':
		cout << "";
		case 'p':
		cout << "p";
		case 'q':
		cout << "q";
		case 'r':
		cout << "r";
		case 's':
		cout << "s";
		case 't':
		cout << "t";
		case 'u':
		cout << "";
		case 'v':
		cout << "v";
		case 'w':
		cout << "w";
		case 'x':
		cout << "x";
		case 'y':
		cout << "y";
		case 'z':
		cout << "z";



		return true;
		default:
		return false;
	}
}