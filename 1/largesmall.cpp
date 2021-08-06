#include<iostream>
using namespace std;
main()
{
	int a,b,c,l,s;
	cout<<"Enter three numbers: ";
	cin>>a>>b>>c;
	l=a;
	if(b>l) l=b;
	if(c>l) l=c;
	s=a;
	if(b<s) s=b;
	if(c<s) s=c;
	cout<<"Largest  number- "<<l<<"\n";
	cout<<"Smallest number- "<<s<<"\n";
}
