#include<iostream>
#include<string.h>
using namespace std;
main()
{
	 string s1,s2,tem;
	 int j;
	 cout<<"Enter 1 string:-";
	 getline(cin,s1);
	// cout<<"Enter 2 string:-";
	// getline(cin,s2);
	
	 for(j=0;j<s1.size();j++)
	 {
	   if(s1[j]>='a'&&s1[j]<='z'|| s1[j]>='A'&&s1[j]<='Z')
	   {
          tem=tem+s1[j];	   	
	   }	
	 }
	 cout<<"S:-"<<tem;
}
