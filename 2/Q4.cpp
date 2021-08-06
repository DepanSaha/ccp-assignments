#include<iostream>
using namespace std;
class Employee
{
	private:
		char emp_name[21];
		int id;
	public:
		void getdata();
		void printdata();
};
void Employee::getdata()
{
	cout<<"Enter id: ";
	cin>>id;
	cin.ignore();
	cout<<"Enter Employee Name: ";
	cin.getline(emp_name,20);
}
void Employee::printdata()
{
	cout<<"Employee id: "<<id<<endl;
	cout<<"Employee Name: "<<emp_name<<endl;
}
int main()
{
	class Employee manager[2],scientist,labour[5];
	int i;
	cout<<"Managers info.\n";
	for(i=0;i<2;i++)
		manager[i].getdata();
	cout<<"\nScientists info.\n";
	scientist.getdata();
	cout<<"\nLabours info.\n";
	for(i=0;i<5;i++)
		labour[i].getdata();
	cout<<"\nManagers\n";
	for(i=0;i<2;i++)
		manager[i].printdata();
	cout<<"\nScientist\n";
	scientist.printdata();
	cout<<"\nLabours\n";
	for(i=0;i<5;i++)
		labour[i].printdata();
	return 0;
}
