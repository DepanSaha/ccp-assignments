#include<iostream>
using namespace std;
class distance
{
	private:
		int inc;
		int ft;
	public:
		void getdata();
		void showdata();
};
void distance::getdata()
{
	cout<<"Enter distance in foot: ";
	cin>>ft;
	cout<<"Enter distance in inch: ";
	cin>>inc;
}
void distance::showdata()
{
	int t;
	if(inc>12)
	{
		t=inc/12;
		ft=ft+t;
		inc=inc%12;
	}
	cout<<"Distance is "<<ft<<" foot "<<inc<<" inch(s)"<<endl;
}
int main()
{
	class distance d;
	d.getdata();
	d.showdata();
	return 0;
}
