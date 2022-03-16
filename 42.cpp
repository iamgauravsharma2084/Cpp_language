#include<iostream>
#include<math.h>>
using namespace std;
main()
{
	 int a,c=0,b,d,i=0;
	 cout<<"Enter your numbar:-";
	 cin>>a;
	 while(a>0)
	 {
	 	 
		 b=a%10;
		 d=pow(2,i);
		 c=c+d*b;
		 a=a/10;
		 i++;
	 }
	   
	   cout<<c;
}
