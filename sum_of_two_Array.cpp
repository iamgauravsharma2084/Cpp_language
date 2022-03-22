#include<iostream>
using namespace std;
main()
{
	int A[20];
	int B[20];
	int C[20];
	int j;
	int b;

	int sum=0;
	cout<<"Enter your number";
	cin>>b;
	cout<<"Enter your Frist Array";
	for(j=0;j<b;j++)
	{
     cin>>A[j];
    }
    cout<<"Enter your 2 Array";
	for(j=0;j<b;j++)
	{
     cin>>B[j];
    }


  for(j=0;j<b;j++)
  {
  	sum=sum+A[j]+B[j];
  }

  cout<<"\n"<<sum;
}
