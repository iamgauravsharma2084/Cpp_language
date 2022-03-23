#include<iostream>
#include<string.h>
using namespace std;
main()
{
	 string s1,s2,tem;
	 cout<<"Enter 1 string:-";
	 getline(cin,s1);
	 cout<<"Enter 2 string:-";
	 getline(cin,s2);
	 tem=s1;
	 s1=s2;
	 s2=tem;
	 cout<<s1<<" ";
	 cout<<s2;
}
