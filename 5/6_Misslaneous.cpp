#include<iostream>
using namespace std;
class Students
{};
class Arts: public Students
{
	public:
		Arts()
		{cout<<"I am a Arts student\n\n";}
};
class Engineering: public Students
{
	public:
		Engineering()
		{cout<<"I am an Engineering student\n";}
};
class Medical: public Students
{
	public:
		Medical()
		{cout<<"I am a Medical student\n\n";}
};
class Mech: public Engineering
{
	public:
		Mech()
		{cout<<"I am from Mechanical Department\n\n";}
};
class Elec: public Engineering
{
	public:
		Elec()
		{cout<<"I am from Electrical Department\n\n";}
};
class Civil: public Engineering
{
	public:
		Civil()
		{cout<<"I am from Civil Department\n\n";}
};
int main()
{
	Arts a;
	Elec e;
	return 0;
}
