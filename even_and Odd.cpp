#include<iostream>
using namespace std;
main()
{
	
	int n;
	int j;
		int x=0;
			int y=0;
	int sum=0;
	cout<<"Enter your number:-";
	cin>>n;
	int A[n];
	int B[n];
	int C[n];
	
	for(j=0;j<n;j++)
	{
		cin>>A[j];
	}
	
	for(j=0;j<n;j++)
	{
	  if(A[j]%2==0)
	  {
	  	B[x]=A[j];
	  	x++;
	  }	
	  else
	  {
	  	C[y]=A[j];
	  	y++;
	  }
	}
	cout<<"******************Even*********************\n";
	for(j=0;j<x;j++)
	{
		cout<<B[j]<<"\n";
	}
	cout<<"******************Odd*********************\n";
	for(j=0;j<y;j++)
	{
		cout<<C[j]<<"\n";
	}
	
	
	
	
	
}
