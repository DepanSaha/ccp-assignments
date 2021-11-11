//Define a class string. Use overload == operator to compare two sring
#include<iostream>
#include<string.h>
using namespace std;
class STRING
{
	private:
		char *str;
		int len;
	public:
		STRING(){}
		STRING(char s[])
		{
			len= strlen(s);
			str= new char[len+1];
			strcpy(str,s);
		}
		int operator==(STRING &obj)
		{
			int p=strcmp(str, obj.str);
			if(p==0) return 1;
			else return 0;
		}
};
int main()
{
	char ch[25];
	STRING s1,s2;
	cout<<"Enter 1st string: ";
	cin.getline(ch,24);
	s1=STRING(ch);
	cout<<"Enter 2nd string: ";
	cin.getline(ch,24);
	s2= STRING(ch);
	if(s1==s2) cout<<"Strings are same.";
	else cout<<"String are different.";
	return 0;
}
