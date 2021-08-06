#include<iostream>
using namespace std;
main()
{
	int num,i;
	cout<<"Enter number: ";
	cin>>num;
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			break;
	}
	if(i==num)
		cout<<num<<" is a Prime number";
	else
		cout<<num<<" is not a Prime numnber";
}
