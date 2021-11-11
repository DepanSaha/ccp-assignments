/*Write a program to implements the concept of virtual base class
------------
Suppose, a class 'A' has public data member 20. Class 'B' and 'C' will inherit 20 from class 'A'. 
But 'D' will inherit 20 from both 'B' and 'C'which leads to ambiguity.
To resolve this, we need to make 'A' as a virtual base class.
*/
#include<iostream>
using namespace std;
class A
{
	public:
		A(){
			cout<<"I have a data member 10\n";
		}
};
class B: virtual A
{};
class C: virtual A
{};
class D: public B, public C
{};
int main()
{
	D d1;
	return 0;
}
