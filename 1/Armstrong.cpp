#include<iostream>
using namespace std;
main()
{
	int n,r,sum=0,temp;
	cout<<"Enter number: ";
	cin>>n;
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	cout<<"Armstrong"<<endl;
	else
	cout<<"Not Armstrong"<<endl;
}