#include<iostream>
#include<string.h>
using namespace std;
main()
{
	int n,a=-1,b=1,c,i;
	cout<<"Enter your number:-";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   c=a+b;
	   cout<<c<<" ";
	   a=b;
	   b=c;
	   	
	}
}
