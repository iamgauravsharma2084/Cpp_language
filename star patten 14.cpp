#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l=0;
  
  for(i=1;i<=12;i++)
  {
  	i<=7?l++:l--;
  	for(j=1;j<=7;j++)
  	{   
  	if(i>=7&&j<=3)
  	{
  		cout<<" ";
	  }
	  else
	  {
	  
	if(j>=8-l)
  	 {
  	  	cout<<"* ";
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
 


