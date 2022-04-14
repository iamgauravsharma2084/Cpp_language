#include<iostream>
#include<vector>
using namespace std;
class B;
class C;
class A
{
  private:
      int a;
  public:
  	friend void show(A,B,C);
};
class B
{
	 int b;
	public:
	friend void show(A,B,C);	
};
class C
{
	int c;
	public:
	  friend void show(A,B,C);  
};

void show(A a1,B b1,C c1)
{
	int s=0;
	a1.a=5;
	b1.b=5;
	c1.c=5;
	s=a1.a+b1.b+c1.c;
	cout<<s;
}

main()
{   
  B c1;
  A d1;
  C c2;
  show(d1,c1,c2);
}
