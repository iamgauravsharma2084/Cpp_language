#include<iostream>
using namespace std;
main()
{
  int i;
  int j;
  int l=0;
  for(i=1;i<=6;i++)
  {

  	for(j=1;j<=6;j++)
  	{
  		if(j==4&&i==3)
  		 cout<<"+ ";
  	 else
  	  if(j>=i)
		cout<<"* ";
	   else
	   cout<<"# ";	
	}
	   cout<<"\n";
  }
 

}
