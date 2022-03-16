#include<iostream>
using namespace std;
main()
{
	 int a[10]intiints,n;
	 cout<<"Who to enter numbar:-";
	 cin>>n;
	 cout<<"Enter your numbar:-";
	 for(i=1;i<=n;i++)
	 cin>>a[i];
	  s=a[1];
	for(i=1;i<=n;i++)
	{
    if(s<=a[i])
	 s=a[i];
    }
    cout<<s;
}
