#include<iostream>
using namespace std;
inline int cube(int a)
{
	return (a*a*a);
}
int main()
{
	int s;
	cout<<"Enter side: ";
	cin>>s;
	cout<<"Cube of "<<s<<" is "<<cube(s);
	return 0;
}
