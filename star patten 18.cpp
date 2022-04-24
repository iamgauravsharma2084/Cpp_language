#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l;
 int s;
  for(i=1;i<=5;i++)
  {
  	l=1;
  	
  	for(j=1;j<=9;j++)
  	{
  		s=15;
  	  if(j>=6-i&&j<=4+i&&l==1)
  	  {
			 cout<<i+j;
			 l=0;
			 
      }
	   else
	   {
	   
	     cout<<"  ";	
	     l=1;
	     
	   }
	  }
	   cout<<"\n";
  }
 

}
