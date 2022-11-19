#include<iostream>
using namespace std;
int getdigit();
int main()
{
	int c;
	c=getdigit();
	cout<<"\n you Entered:"<<c;
	return 0;
}
int getdigit()
{
	int nextnum;
	bool digitread=false;//
	while(!digitread)
	{
		cout<<"\n Enter adigit numbers:";
		cin>>nextnum;
		digitread=(0<nextnum);
	}
	return nextnum;
}