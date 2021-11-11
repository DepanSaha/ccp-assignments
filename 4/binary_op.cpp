//Write a program to overload binary + , - , != operators for binary numbers
#include<iostream>
using namespace std;
class binary
{
	private:
		int *bn;
	public:
		binary(){}
		binary(int n)
		{
			bn= new int[5];
			for(int i=4;i>=0;i--)
			{
				bn[i]=n%10;
				n/=10;
			}
		}
		binary operator+ (binary &ob)
		{
			binary res;
			res.bn= new int[5];
			int i,temp=0,cr=0;
			for(i=4;i>=0;i--)
			{
				temp=this->bn[i]+ob.bn[i]+cr;
				if(temp==0||temp==1)
				{
					res.bn[i]=temp;
					if(cr==1) cr=0;
				}
				if(temp==2)
				{
					res.bn[i]=0;
					if(cr==1) cr=0;
					if(cr==0) cr=1;
				}
				if(temp==3)
				{
					res.bn[i]=1;
					cr=1;
				}
			}
			if(cr==1) res.bn[i]=cr;
			else res.bn[i]=0;
			return res;
		}
		binary operator- (binary &ob)
		{
			binary res;
			res.bn= new int[5];
			int i,temp=0,br=0;
			for(i=4;i>=0;i--)
			{
				temp=this->bn[i]-ob.bn[i]-br;
				if(temp==0)
				{
					res.bn[i]=temp;
					if(br==1) br=0;
				}
				if(temp==1) res.bn[i]=1;
				if(temp==-1)
				{
					res.bn[i]=1;
					br=1;
				}
				if(temp==-2)
				{
					res.bn[i]=0;
					br=1;
				}
			}
			if(br==1) res.bn[i]=br;
			else res.bn[i]=0;
			return res;
		}
		int operator!= (binary &ob)
		{
			for(int i=4;i>=0;i--)
			{
				if(this->bn[i]!=ob.bn[i]) return 1;
			}
			return 0;
		}
		void show()
		{
			for(int i=0;i<5;i++)
				cout<<bn[i];
			cout<<"\n";
		}
};
int main()
{
	cout<<"1st Binary no->\n";
	binary n1= 1110;
	n1.show();
	cout<<"2nd Binary no->\n";
	binary n2= 1011;
	n2.show();
	binary p;
	cout<<"Addition of the binary numbers->\n";
	p=n1+n2;
	p.show();
	cout<<"Subtraction of the binary numbers->\n";
	p=n1-n2;
	p.show();
	cout<<"Is n1!=n2:  ";
	if(n1!=n2) cout<<"Yes.";
	else cout<<"No.";
	return 0;
}
