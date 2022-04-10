#include<iostream>
#include<string.h>
using namespace std;
main()
{
 int *p;
 int n;
 int i;
 int j;
 int temp;
 cout<<sizeof(p);
 cout<<"enter your number:-";
 cin>>n;
 p=new int[n];
 for(i=0;i<n;i++)
 {
 	cin>>p[i];
 }
 
 for(i=0;i<n;i++)
 {
 	for(j=i+1;j<n;j++)
 	{
 		if(p[i]>p[j])
 		{
 			temp=p[i];
 			p[i]=p[j];
 			p[j]=temp;
		 }
	 }
 }
 
 
 
 
 
 
 for(i=0;i<n;i++)
 {
 	cout<<p[i]<<" ";
 }
 cout<<sizeof(p);
 delete p; 
 
 
 
 
 
 
 
 
 
}
