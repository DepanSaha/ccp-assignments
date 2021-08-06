#include <iostream>
using namespace std;
class Complex
{
private:
int rl, img;
public:
void getdata()
{
cout<<"Enter real no: ";
cin>>rl;
cout<<"Enter imaginary no.: ";
cin>>img;
}
void display()
{
cout << rl << " + " << img<< "i" << endl;
}
void operator++(int i)
{
rl=rl+1;
}
};
int main()
{
Complex n;
n.getdata();
cout << "n = ";
n.display();
n++;
cout << "After increment n = ";
n.display();
return 0;
}
