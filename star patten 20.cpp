#include<iostream>
using namespace std;
main()
{
  int i;
 int j;
 int l;
  for(i=1;i<=7;i++)
  {
  	i<=4?l++:l--;
  	for(j=1;j<=7;j++)
  	{
  	   if(j==4&&i==4)
		 {
		 	cout<<"+ ";
		}	
       else
    	{
	
  	     if(j>=l&&j<=8-l)
  	     {
			 cout<<"* ";
			 
          }
	   else
	   {
	   
	     cout<<"| ";	
	      
        }	  
    }
}
	   cout<<"\n";
  }
}
 


