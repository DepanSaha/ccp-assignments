#include<iostream>
using namespace std;
class complex
{
	private:
		int real;
		int imag;
	public:
		complex add(complex,complex);
		void getdata();	
		void showdata();
};
void complex::showdata()
{
	cout << "the Complex No is :";
	cout<< real << " + i" << imag <<endl;
}
void complex::getdata()
{
	cout<< "\nEnter real part of the No.";
	cin>>real;
	cout<< "\nEnter imaginary part of the No.";
	cin>>imag;
}
complex complex::add(complex c1, complex c2)
{
	complex t;
	t.real = c1.real + c2.real;
	t.imag = c1.imag + c2.imag; 
	return t;
}
int main()
{
	complex c1,c2,c3;
	cout << "Enter First complex No."<<endl;
	c1.getdata();
	cout << "Enter Second complex No."<<endl;
	c2.getdata();
	c1.showdata();
	c2.showdata();
	c3=c3.add(c1,c2);
	cout << "\n The Addition of ";
	c3.showdata();
return 0;
}
