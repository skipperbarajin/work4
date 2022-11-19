#include<iostream>
using namespace std;
int main()
{
	int a,b,temp;
	cout<<"\n Enter your number1:";
	cin>>a;
	cout<<"\n Enter your number2:";
	cin>>b;
	while(true){
		if(b==0)break;
		temp=a%b;
		a=b;
		b=temp;
	}
	cout<<"GCD(BMM) is:"<<a;
	return 0;
}
