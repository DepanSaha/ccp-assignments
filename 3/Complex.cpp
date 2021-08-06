#include<iostream>
using namespace std;
class Complex
{
	private:
		int r;
		int img;
	public:
		void getdata();
		void showdata();
		Complex add(Complex& );
		Complex sub(Complex& );
		Complex mul(Complex& );
};
void Complex::getdata()
{
	cout<<"Enter real no.: ";
	cin>>r;
	cout<<"Enter imaginary no.: ";
	cin>>img;
}
void Complex::showdata()
{
	cout<<r<<" + "<<img<<"i"<<endl;
}
Complex Complex::add(Complex &a)
{
	Complex temp;
	temp.r=a.r+r;
	temp.img=a.img+img;
	return temp;
}
Complex Complex::sub(Complex &b)
{
	Complex temp;
	temp.r=r-b.r;
	temp.img=img-b.img;
	return temp;
}
Complex Complex::mul(Complex &p)
{
	Complex tp;
	tp.r=(r*p.r)-(img*p.img);
	tp.img=(r*p.img)+(img*p.r);
	return tp;
}
int main()
{
	Complex n1,n2,t;
	cout<<"Enter 1st Complex number: \n";
	n1.getdata();
	n1.showdata();
	cout<<"Enter 2nd Complex number: \n";
	n2.getdata();
	n2.showdata();
	cout<<"Addition of two complex numbers->\n";
	t=n1.add(n2);
	t.showdata();
	cout<<"Subtraction of two complex numbers->\n";
	t=n1.sub(n2);
	t.showdata();
	cout<<"Multiplication of two complex numbers->\n";
	t=n1.mul(n2);
	t.showdata();
}
