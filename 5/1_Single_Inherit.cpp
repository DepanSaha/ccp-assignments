//Write a program in which class BATSMAN inheritance class PERSON. Using Single Inheritance
#include<iostream>
using namespace std;
class Person
{
	public:
		Person()
		{
			cout<<"I am a Person.\n";
		}
};
class Batsman: public Person
{
	public:
		Batsman()
		{
			cout<<"I am also a Batsman.\n";
		}
};
int main()
{
	Batsman b;
	return 0;
}
