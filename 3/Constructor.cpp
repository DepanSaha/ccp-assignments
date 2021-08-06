//Create Complex class, default, parameterized and copy constructor
#include<iostream>
using namespace std;
class COMPLEX
{
	private:
		int rl;
		int img;
	public:
		COMPLEX(){}
		COMPLEX(int a, int b)
		{
			rl=a;
			img=b;
		}
		COMPLEX(COMPLEX &p)
		{
			rl=p.rl;
			img=p.img;
		}
		void show()
		{
			cout<<"Complex number: "<<rl<<" + "<<img<<"i"<<"\n\n";
		}
};
int main()
{
	COMPLEX c1;
	cout<<"Default Constructor for Complex class->\n";
	c1.show();
	COMPLEX c2(5,7);
	cout<<"Parameterized Constructor for Complex class->\n";
	c2.show();
	COMPLEX c3(c2);
	cout<<"Copy Constructor for Complex class->\n";
	c3.show();
	return 0;
}
