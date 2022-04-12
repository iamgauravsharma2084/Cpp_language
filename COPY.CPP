#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class A
{
   private:
      int a,b;
   public:
      A(int a,int b)
      {
	this->a=a;
	this->b=b;
      }
     void showdata()
     {
      cout<<"A:-"<<a<<"\n"<<"B:-"<<b;
     }
     A(A &s)
     {
	a=s.a;
	b=s.b;
     }
};
void main()
{
 clrscr();
   A a1(2,8);
   A a2(a1);
   a2.showdata();
  getch();
  }
