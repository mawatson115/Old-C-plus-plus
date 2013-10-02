#include <iostream>
#include <string>

using namespace std;

//enum types

//structs
struct Student
{
	double GPA;
	string first;
	string last;

};

//function headers
void printStudent(Student s);
void upgrade(Student& s);
void printArrays(Student s[]);

int main()
{

	Student s1, s2, s3;
	Student s[14];
	s[0]=s1;
	s[1]=s2;


	s1.first = "Desi";
	s1.last="spann";
	s1.GPA = 4.0;

	//cout << s1.first << s1.last << s1.GPA << endl;
	printStudent(s1);
	cout << "Please enter your name (First, last then GPA)" << endl;
	cin >> s[2].first >> s[2].last >> s[2].GPA;
	//cout << s2.first << s2.last << s2.GPA << endl;
	
	upgrade(s2);
	printArrays(s);
	
	return 0;
}

void printStudent(Student s)
{

	cout << s.first  << s.last << s.GPA;
}

void upgrade(Student& s)
{

	s.GPA=4.0;


}
void printArrays(Student s[])
{
	for(int i=0; i < 14; i++)
	{
		cout << s[i].first << s[i].last << s[i].GPA;
	}

}