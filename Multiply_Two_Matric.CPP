#include<iostream>
using namespace std;
main()
{
	int A[20][20];
	int B[20][20];
	int C[20][20];
	int i;
	int a;
	int b;
	int j;
	cout<<"Enter your Row:-";
	cin>>a;
	cout<<"Enter your Col:-";
	cin>>b;
	for(int i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>A[i][j];
		}
	}
cout<<"******************************************";
	for(int i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>B[i][j];
		}
	}
	
	int mul=0;
	int l;
    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
    	{
    		mul=0;
    	   for(l=0;l<a;l++)
		   {
		   	 mul=mul+A[i][l]*B[l][j];
		   	 C[i][j]=mul;
			}	
			
		}
	}
	
	
	
   for(int i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cout<<C[i][j]<<"\t";
		}
		cout<<"\n";
	}
	






}
