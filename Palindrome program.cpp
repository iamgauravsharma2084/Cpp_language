#include<iostream>
#include<string.h>
using namespace std;
main()
{
   int n,s,a,x=0;
   cout<<"Enter your number:-";
   cin>>n;
   s=n;
   while(n!=0)
   {
   	 a=n%10;  
   	 x=x*10+a;
   	 n=n/10;
   }
   //cout<<x;
   if(s==x)
   {
   	cout<<"Palindrome Number:";
   }
   else
   {
   	cout<<"Palindrome not number";
   }
  
}
