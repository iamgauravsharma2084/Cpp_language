#include<iostream>
using namespace std;
main()
{
  int i;
  int j;
  for(i=1;i<=4;i++)
  {

  	for(j=1;j<=7;j++)
  	{
  		if(i==2&&j==4)
	      {
	      	cout<<"& ";
		  }
		else
		{
	
  	      if(j>=i&&j<=8-i)
	    	cout<<"* ";
	      else
	      
	     cout<<"  ";
	}
	  
		 	
	}
	   cout<<"\n";
  }
 

}
