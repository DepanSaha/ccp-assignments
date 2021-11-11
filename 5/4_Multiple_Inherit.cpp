//Write a program that uses Multiple inheritance to implement class SCIENTIST from two base class STUDENT and EMPLOYEE
#include<iostream>
using namespace std;
class student
{
	public:
		student()
		{
			cout<<"A student can be scientist"<<endl;
		}
};
class EmPloyee
{
	public:
		EmPloyee()
		{
			cout<<"An employee can be scientist"<<endl;
		}
};
class scientist: public student, public EmPloyee
{
	public:	
		scientist()
		{
			cout<<"I am a scientist";
		}
};
int main()
{
	scientist sc;
	return 0;
}
