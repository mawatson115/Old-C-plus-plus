#include <iostream>
#include <string>

using namespace std;

void isVowel(char vowel);



int main()
{
	char letter;

	cout << "Please enter a letter. " << endl;
	cin >> letter;

	isVowel(letter);


return 0;
}

void isVowel(char vowel)
{
	if(vowel=='a' || vowel=='e' || vowel=='i' || vowel=='o' || vowel=='u')
	{
		cout << "The letter you entered is a  vowel." << endl;
	}
	else
		cout << "The letter you entered is not a vowel."  << endl;
}