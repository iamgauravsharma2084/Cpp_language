#include<iostream>
using namespace std;
class B;
class A
{
   private:
   	  int a;
   	public:
   		void add()
   		{
   			cout<<"Enter your number:-";
   			cin>>a;
		}  
   	friend void Fun(A,B);
};
class B:A
{
    private:
   	  int b;
   	public:
   		void ad()
   		{
   			cout<<"Enter your number:-";
   			cin>>b;
		}  
   	friend void Fun(A,B);
};
void Fun(A x,B y)
{
	int c;
	c=x.a+y.b;
	cout<<c;
}
main()
{
	 A a;
	 B b;
	 a.add();
	 b.ad();
	Fun(a,b);
}
