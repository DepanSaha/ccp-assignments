#include<iostream>
using namespace std;
main()
{
	int num,temp,d,pal=0;
	cout<<"Enter the number: ";
	cin>>num;
	temp=num;
	while(num>0)
	{
		d=num%10;
		pal=pal*10+d;
		num/=10;
	}
	if(temp==pal)
		cout<<temp<<" is a palindrome number.";
	else
		cout<<temp<<" is not a palindrome number.";
}
