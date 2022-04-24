#include<iostream>
using namespace std;
main()
{
  int i;
  int j;
  int l=0;
  for(i=1;i<=7;i++)
  {
  	l=7-i;
  	//i<=4?l++:l--;
  	for(j=1;j<=7;j++)
  	{
  	  if(j==i||j>=8-i)
  	  {
		cout<<l;
		l--;
     }
	   else
	   cout<<" ";	
	}
	   cout<<"\n";
  }
 

}
