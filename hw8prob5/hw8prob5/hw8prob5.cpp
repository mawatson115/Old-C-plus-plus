#include<iostream>

using namespace std;


void upperstring(char str[]);


int main()
{
	int const upper={10};
	char str[upper];
	
		cout<<"Enter a String to convrt to upper case:" << endl;
		cin >> str;
		
		upperstring(str);
	
	return 0;

}

void upperstring(char str[])
{
	int i=0;
	char c = str[i];
	while(c!='\0')
	{
		c=str[i];
		if(str[i]>=97 && str[i] <=122)
		str[i] -= 0x20;
		i++;
	}
	str[i-1]='\0';
	cout<<"Upper case is: "<< str << endl;
	
}