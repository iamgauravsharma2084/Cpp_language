#include<iostream>
#include<vector>
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
	 int b;
	public:
	void fun(A& x)
	{
		x.a=9;
		b=1;
		int s;
		s=b+x.a;
		cout<<s;
	}
	
};

main()
{   
  B c1;
  A a1;
  c1.fun(a1);
}
