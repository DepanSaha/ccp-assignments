#include<iostream>
using namespace std;
int main()
{
	int num,temp=0,d;
	cout<<"Enter a number: ";
	cin>>num;
	while(num>0)
	{
		d=num%10;
		temp=temp*10+d;
		num=num/10;
	}
	while(temp>0)
	{
		d=temp%10;
		switch(d)
		{
			case 1:
				cout<<" One";
				break;
			case 2:
				cout<<" Two";
				break;
			case 3:
				cout<<" Three";
				break;
			case 4:
				cout<<" Four";
				break;
			case 5:
				cout<<" Five";
				break;
			case 6:
				cout<<" Six";
				break;
			case 7:
				cout<<" Seven";
				break;
			case 8:
				cout<<" Eight";
				break;
			case 9:
				cout<<" Nine";
				break;
			case 0:
				cout<<" Zero";
				break;
		}
		temp=temp/10;
	}
	return 0;
}
