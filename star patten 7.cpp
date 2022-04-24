#include<iostream>
using namespace std;
main()
{
  int i;
  int j;
  char l=0;
  for(i=1;i<=7;i++)
  {
  	i<=4?l++:l--;
  	for(j=1;j<=4;j++)
  	{
  	  if(j<=l)
  	  
  	     cout<<"*";
	   else
	   cout<<" ";	
	}
	   cout<<"\n";
  }
 

}
