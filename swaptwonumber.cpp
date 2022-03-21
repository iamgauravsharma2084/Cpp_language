#include<iostream>
#include<string.h>
using namespace std;
void swap(int &,int &);
main()
{
	 int a,b;
	 cout<<"Enter your numbar:-";
	 cin>>a>>b;
	  cout<<"A:-"<<a<<" "<<"B:-"<<b<<endl;
	 swap(a,b);
	 cout<<"swap numbar"<<endl;
	 cout<<"A:-"<<a<<" "<<"B:-"<<b<<endl;
}
void swap(int&A,int&B)
{
	 int t;
	 t=A;
	 A=B;
	 B=t;


}
