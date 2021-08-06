#include<iostream>
using namespace std;
main()
{
	int a=0,b=1,s=0,t,i;
	cout<<"Enter no. of terms: ";
	cin>>t;
	cout<<a<<" "<<b<<" ";
	for(i=1;i<=t-2;i++)
	{
		s=a+b;
		a=b;
		b=s;
		cout<<s<<" ";
	}
}

