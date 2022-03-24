#include<iostream>
using namespace std;
main()
{
	string a;
	string b;
	string c;
	
	cout<<"Enter your number:-";
	getline(cin,a);
	cout<<"Enter your number:-";
	getline(cin,b);
	c=a;
	a=b;
	b=c;
	
	
	cout<<"A:-"<<a;
	cout<<"\nB:-"<<b;
	
}
