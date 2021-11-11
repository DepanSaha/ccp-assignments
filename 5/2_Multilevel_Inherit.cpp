//Write a program that uses Multilevel Inheritance to implement class PERSONS, EMPLOYEE, MANAGER
#include<iostream>
using namespace std;
class person
{
	public:
		person()
		{
			cout<<"I am a Person.\n";
		}
};
class employee: public person
{
	public:
		employee()
		{
			cout<<"I am an Employee.\n";
		}
};
class manager: public employee
{
	public:		
		manager()
		{
			cout<<"I am also a Manager\n";
		}
};
int main()
{
	employee emp;
	return 0;
}
