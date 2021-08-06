#include <iostream>
#include<conio.h>
using namespace std;
class Complex
{
private:
int rl, img;
public:
void getdata()
{
cout<<"Enter real and imaginary no: ";
cin>>rl>>img;
}
void display()
{
cout<<rl<<" + "<<img<<"i"<<endl;
}
void operator--()
{
rl=rl-1;
img=img-1;
}
};
int main()
{
Complex n;
n.getdata();
cout << "n = ";
n.display();
--n;
cout<<"After Deccrement, n = ";
n.display();
return 0;
}
