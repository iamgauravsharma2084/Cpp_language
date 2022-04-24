#include<iostream>
using namespace std;
class B;
class A
{
    private:
	 int a;
	public:
	 friend void setdata(A,B);	
};
class B
{
	private:
	 int b;
	public:
	 friend void setdata(A,B);	 
};
void setdata(A x1,B x2)
{
	int c;
	cout<<"Enter your number:-";
	cin>>x1.a>>x2.b;
	c=x1.a+x2.b;
	cout<<c;
}
main()
{
	A a1;
    B b1;
    setdata(a1,b1);
}
