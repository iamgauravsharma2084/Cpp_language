#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l;
  for(i=1;i<=7;i++)
  {
  	
  	for(j=1;j<=8;j++)
  	{
  	  j<=4?l++:l--;
  	  if(j<=i||j>=9-i)
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
