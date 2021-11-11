//Write a program that implements hybrid inheritance. Classes STUDENT and FACULTY inherit the class PERSON. FACULTY must be 
//inherited by the class PUBLICATIONS.
#include<iostream>
using namespace std;
class PersoN
{
	public:
		PersoN()
		{
			cout<<"I am a Person\n";
		}
};
class Student: public PersoN
{
	public:
		Student()
		{
			cout<<"I am a Student\n";
		}
};
class faculty: public PersoN
{
	public:
		faculty()
		{
			cout<<"I am a Faculty Person\n";
		}
};
class publications: public faculty
{
	public:
		publications()
		{
			cout<<"I am from publications\n\n";
		}
};
int main()
{
	publications pb;
	Student s;
	return 0;
}





