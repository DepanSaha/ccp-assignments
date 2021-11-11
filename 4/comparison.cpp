//Write a program to overload comparison operators (>, <=, ==) for two objects of same type.
#include<iostream>
using namespace std;
class number
{
	private:
		int num;
	public:
		void get()
		{
			cout<<"Enter number: ";
			cin>>num;
		}
		bool operator>(number &ob)
		{
			return num>ob.num;
		}
		bool operator<=(number &ob)
		{
			return num<=ob.num;
		}
		bool operator==(number &ob)
		{
			return num==ob.num;
		}
};
int main()
{
	number n1,n2;
	n1.get();
	n2.get();
	cout<<"n1>n2 = ";
	if(n1>n2) cout<<"True\n";
	else cout<<"False\n";
	
	cout<<"n1<=n2 = ";
	if(n1<=n2) cout<<"True\n";
	else cout<<"False\n";
	
	cout<<"n1==n2 = ";
	if(n1==n2) cout<<"True\n";
	else cout<<"False\n";
	return 0;
}
