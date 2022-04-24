#include<iostream>
using namespace std;
main()
{
  int i;
  int j;
  char l;
  for(i=1;i<=4;i++)
  {
  	l='A';
  	for(j=1;j<=7;j++)
  	{
  	  if(j<=5-i||j>=3+i)
  	  {
		 cout<<l;
		 j<4?l++:l--;
       }
	   else
	   {
	
	     cout<<" ";	
	     if(j==4)
	     l--;
	  }
	  }
	   cout<<"\n";
  }
 

}
