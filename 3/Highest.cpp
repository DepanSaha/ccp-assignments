#include<iostream>
using namespace std;
class student
{
private:
	int roll;
	char name[21];
	double marks;
public:
	void getdata()
	{
		cout<<"Roll: ";
		cin>>roll;
		cin.ignore();
		cout<<"Name: ";
		cin.getline(name,20);
		cout<<"Marks: ";
		cin>>marks;
	}
	int compare(student t[], int p)
	{
		int i,r;
		marks=0;
		for(i=0;i<p;i++)
		{
			if(t[i].marks>marks)
			{
				marks=t[i].marks;
				r=i;
			}
		}
		return r;
	}
	void display()
	{
		cout<<"Roll : "<<roll<<"\n";
		cout<<"Name : "<<name<<"\n";
		cout<<"Marks: "<<marks<<"\n";
	}
};
int main()
{
	student stu[10];
	student t;
	int i,n,r;
	cout<<"Enter no. of students: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter Student"<<i+1<<" details:\n";
		stu[i].getdata();
	}
	r=t.compare(stu,n);
	cout<<"\nStudent who got highest mark->"<<endl;
	stu[r].display();
	return 0;
}
