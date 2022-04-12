#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class B;
class A
{
  int a;
  friend void fun(A,B);
  public:
  void FF()
  {
   a=8;
  }
};
class B
{
  int b;
  public:
   void f()
   {
    b=2;
   }
  friend void fun(A,B);
};
void fun(A a1,B b1)
{
   int c;
   c=a1.a+b1.b;
   cout<<c;
}

void main()
{
   A a;
   B b;
   clrscr();
   a.FF();
   b.f();
   fun(a,b);
   getch();
}