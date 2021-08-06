#include<iostream>
using namespace std;
class Distance
{
	private:
		int inc;
		int ft;
	public:
		Distance add(Distance, Distance);
		Distance subtract(Distance, Distance);
		void getdata();
		void showdata();
};
void Distance::getdata()
{
	cout<<"Enter distance in foot: ";
	cin>>ft;
	cout<<"Enter distance in inch: ";
	cin>>inc;
}
void Distance::showdata()
{
	cout<<"Distance is->\n";
	cout<<ft<<" foot and "<<inc<<" inch\n\n";
}
Distance Distance::add(Distance a, Distance b)
{
	Distance temp;
	temp.ft=a.ft+b.ft+((a.inc+b.inc)/12);
	temp.inc=(a.inc+b.inc)%12;
	return temp;
}
Distance Distance::subtract(Distance a, Distance b)
{
	Distance temp;
	a.inc=(a.ft*12)+a.inc;
	b.inc=(b.ft*12)+b.inc;
	temp.inc=a.inc-b.inc;
	temp.ft=temp.inc/12;
	temp.inc%=12;
	return temp;
}
int main()
{
	Distance s,d,t,l;
	cout<<"Enter 1st distance:"<<endl;
	s.getdata();
	cout<<"Enter 2nd distance:"<<endl;
	d.getdata();
	cout<<"Additioning distances:"<<endl;
	l=t.add(s,d);
	l.showdata();
	cout<<"Subtracting distances:"<<endl;
	l=t.subtract(s,d);
	l.showdata();
}
