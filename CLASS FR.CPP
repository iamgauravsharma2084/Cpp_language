#include<iostream>
using namespace std;
class A
{
    private:
	 int a;
	public:
	 friend class B;	
};
class B
{
	private:
	 int b;
	public:
	  void sedata(A &a1)
	  { 
	     int c;
	  	cout<<"Enter your number:-";
	  	cin>>a1.a>>b;
	  	c=a1.a+b;
	  	cout<<c;
	  }
};
main()
{
	 A a1;
    B b1;
    b1.sedata(a1);
}
