#include<iostream>
using namespace std;
main()
{
	int m[3][3],n[3][3],s[3][3],mul[3][3],d[3][3];
	int i,j,e;
	cout<<"Enter 1st Matirx elements\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>m[i][j];
	}
	cout<<"\nEnter 2nd Matrix elements\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cin>>n[i][j];
	}
	cout<<"Sum of the matrices are:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			s[i][j]=m[i][j]+n[i][j];
			cout<<s[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"Subtraction of the matrices are:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			d[i][j]=m[i][j]-n[i][j];
			cout<<d[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\nMultiplication of the Matrices are:\n";
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			mul[i][j]=0;
			for(e=0;e<3;e++)
				mul[i][j]+=m[i][e]*n[e][j];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			cout<<mul[i][j]<<"\t";
		cout<<"\n";
	}
}
