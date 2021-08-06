#include<iostream>
using namespace std;

static int cnst=0;
static int dst=0;

class sample
{
	public:
		sample()
		{
			cout<<"Object created\n";
			cnst++;
		}
		~sample()
		{
			cout<<"Object destroyed\n";
			dst++;
		}
};

int main()
{
	sample a,o;
	sample p;
	return 0;
}
