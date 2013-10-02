#include <iostream>
#include <string>

using namespace std;

bool isVowel(char vowel);



int main()
{
	char letters;
	int num=0;


	cout << "Please enter a sequence of letters to see how many vowels you have.  Enter 1 when your finish. " << endl;


	do
	{
		cin >> letters;
		if (isVowel(letters)==true)
			num =num++;
	}while(letters!= '1');

	cout << "The number of vowels in your sequence is: " << num << endl;

return 0;
}

bool isVowel(char vowel)
{
	
	if(vowel == 'a' || vowel == 'e' || vowel == 'i' || vowel == 'o' || vowel == 'u')
	
		return true;
	else
		return false;
	
}