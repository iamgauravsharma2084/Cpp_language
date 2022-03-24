#include<iostream>
using namespace std;
main()
{
	char a[20];
	int j;
	int aa=0;
	int b=0;
	int c=0;
	int d=0;
	cout<<"Enter your str:-";
	gets(a);
	for(j=0;a[j]!='\0';j++)
	{
		if(a[j]=='a'||a[j]=='u'||a[j]=='i'||a[j]=='e'||a[j]=='o' ||a[j]=='A'||a[j]=='U'||a[j]=='E'||a[j]=='O')
		{
		aa++;	
		}
		else if(a[j]>='a'&&a[j]<='z'||a[j]>='A'&&a[j]<='Z')
		{
			b++;
		}
		else if(a[j]>='0'&&a[j]<='9')
		{
			c++;
		}
		else 
		{
			d++;
		}
	}
	
	
	cout<<"v:-"<<aa<<"\n";
	cout<<"C:-"<<b<<"\n";
	cout<<"Num:-"<<c<<"\n";
	cout<<"s:-"<<d<<"\n";
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
