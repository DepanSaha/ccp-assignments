//Write a program that uses Hierarchical Inheritance to implement class 
//EMPLOYEE inherited by two classes CONTRACT and PERMANENT
#include<iostream>
using namespace std;
class Employee
{
	public:
		Employee()
		{
			cout<<"I am an Employee."<<endl;
		}
};
class contract: public Employee
{
	public:
		contract()
		{
			cout<<"I can be a contract-employee\n\n";
		}
};
class permenant: public Employee
{
	public:
		permenant()
		{
			cout<<"I can be a permenant-employee\n\n";
		}
};
int main()
{
	contract ct;
	permenant per;
	return 0;
}
