//Overload arithmetical binary operators (+, -, *) for complex numbers.
#include<iostream>
using namespace std;
class COMpleX
{
	private:
		int rl,ig;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary no.: ";
			cin>>rl>>ig;
		}
		void showdata()
		{
			cout<<rl<<"+"<<ig<<"i"<<"\n\n";
		}
		COMpleX operator+(COMpleX &ob1)
		{
			COMpleX t;
			t.rl=rl+ob1.rl;
			t.ig=ig+ob1.ig;
			return t;
		}
		COMpleX operator-(COMpleX &ob1)
		{
			COMpleX t;
			t.rl=rl-ob1.rl;
			t.ig=ig-ob1.ig;
			return t;
		}
		COMpleX operator*(COMpleX &ob1)
		{
			COMpleX t;
			t.rl=(rl*ob1.rl)-(ig*ob1.ig);
			t.ig=(rl*ob1.ig)+(ig*ob1.rl);
			return t;
		}
};
int main()
{
	COMpleX c1,c2,r;
	cout<<"1st number->\n";
	c1.getdata();
	cout<<"2nd number->\n";
	c2.getdata();
	cout<<"Sum of two complex number->\n";
	r=c1+c2;
	cout<<"c1+c2 = ";
	r.showdata();
	cout<<"Subtraction of two complex number->\n";
	r=c1-c2;
	cout<<"c1-c2 = ";
	r.showdata();
	cout<<"Multiplication of two complex number->\n";
	r=c1*c2;
	cout<<"c1*c2 = ";
	r.showdata();
	return 0;
}
