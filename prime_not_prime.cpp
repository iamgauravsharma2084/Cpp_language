#include<iostream>
using namespace std;
main()
{
	 int n,i,a;
	 cout<<"Enter your numbar:-";
	 cin>>n;
	 for(i=2;i<=n-1;i++)
	 {
     if(n%i==0)
	 break;
    }
	 if(n==i)
		 cout<<n<<" This is a prime numbar";
	 else
		  cout<<n<<" 2This is not prime numbar";

}
