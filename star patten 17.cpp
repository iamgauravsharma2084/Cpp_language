#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l=1;
  for(i=1;i<=5;i++)
  {
  	for(j=1;j<=5;j++)
  	{
  	  if(j<=i)
  	  {
			 cout<<l++<<" ";
			 
      }
	   else
	   {
	   
	     cout<<" ";	
	     
	   }
	  }
	   cout<<"\n";
  }
 

}
