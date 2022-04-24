#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l=0;
  
  for(i=1;i<=12;i++)
  {
  	i<=6?l++:l--;
  	for(j=1;j<=7;j++)
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
	   cout<<"\n";
}
	   
  }
 


