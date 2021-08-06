#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		void Getdata();
		void Showdata();
		Complex(){}  /*Do Nothing Constructor. It is given when a constructor is defined with parameters
					   and it will used for those who dosen't have parameters.*/
		Complex(Complex m,Complex n)
		{
			real=m.real+n.real;
			img=m.img+n.img;
		}
};
void Complex::Getdata()
{
	cout<<"Enter real no.: ";
	cin>>real;
	cout<<"Enter imaginary no.: ";
	cin>>img;
}
void Complex::Showdata()
{
	cout<<real<<" + "<<img<<"i";
}
int main()
{
	Complex n1,n2;
	cout<<"Input 1st Complex no.-"<<endl;
	n1.Getdata();
	cout<<"Input 2nd Complex no.-"<<endl;
	n2.Getdata();
	Complex s=Complex(n1,n2);
	cout<<"\n\nAddition of both complex numbers"<<endl;
	s.Showdata();
	return 0;
}
