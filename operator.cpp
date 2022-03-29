#include<iostream>
#include<string.h>
using namespace std;
class A
{
  private:
  	int a;
  	int b;
  public:
  	  void setadata()
  	  {
  	     cin>>a;
		  cin>>b  ;	
	 }
	 
	 
	 void display()
	 {
	 	cout<<a<<b;
	 }
	 
	 A operator + (A x)
	 {
	 	A z;
	 	z.a=a+x.a;
	 	z.b=b+x.b;
	 	return z;
	 }
};
main()
{
	A a,b,c;
	a.setadata();
	cout<<"______________________________________";
	b.setadata();
    c=a+b;
    c.display();
	
	
}

