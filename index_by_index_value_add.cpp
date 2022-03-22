#include<iostream>
using namespace std;
main()
{
	int A[20];
	int B[20];
	int C[20];
	int n;
	int j;
		int sum=0;
	cout<<"Enter your number:-";
	cin>>n;
	cout<<"Enter frist Arrya:-\n";
	for(j=0;j<n;j++)
	{
		cin>>A[j];
	}
	cout<<"Enter s Arrya:-\n";
	for(j=0;j<n;j++)
	{
		cin>>B[j];
	}
	
	
	for(j=0;j<n;j++)
	{
	   C[j]=A[j]+B[j];	
	}
	
	for(j=0;j<n;j++)
	{
		cout<<C[j]<<"\n";
		sum=sum+C[j];
		
		
	}
	
	cout<<"Sum:-"<<sum;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
