#include<iostream>
using namespace std;
main()
{
	int a[20];
	int j;
	int b;
	int c;
	int l;
	int count=0;
	int sum=0;
	cout<<"Enter your number:-";
	cin>>b;
	for(j=0;j<=b;j++)
	{
     cin>>a[j];
    }

 	for(j=0;j<=b;j++)
 	{
 	  for(l=j+1;l<=b;l++)
 	  {
 	  	if(a[j]==a[l])
 	  	{
 	  	   sum=a[j];
			 cout<<"Dupl:-"<<sum<<"\n";
			 sum=0;	
 	  	   count++;	
 	  	   break;
		}
	   }
	 }
	 cout<<count;
}
