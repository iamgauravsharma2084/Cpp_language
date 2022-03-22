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
	cout<<"*****************Enter A Matric*************************\n";
	for(int i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>A[i][j];
		}
	}
   cout<<"*****************Enter B Matric*************************\n";
	for(int i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			cin>>B[i][j];
		}
	}
cout<<"**************************Add****************************\n";	

    for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
    	{
    		C[i][j]=A[i][j]+B[i][j];			
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
	cout<<"**************************Sub****************************\n";
	 for(i=0;i<a;i++)
    {
    	for(j=0;j<b;j++)
    	{
    		C[i][j]=A[i][j]-B[i][j];			
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
