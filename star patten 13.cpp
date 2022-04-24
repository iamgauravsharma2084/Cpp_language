#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l=0;
  
  for(i=1;i<=9;i++)
  {
  	 i<=5?l++:l--;
  	for(j=1;j<=9;j++)
  	{   
	if(i==5&&j==5)
  	 {
  	 	cout<<"G";
	   }
	else
	{
	
  	  if(j<=6-l||j>=4+l)
  	  {
  	  	cout<<"*";
  	  ///	s=1;
      }
	   else
	   {
	   
	     cout<<" ";	
	      
	   }
   }
}

	 
	   cout<<"\n";
	   
  }
 

}
