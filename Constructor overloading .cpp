#include<iostream>
using namespace std;
class A
{
    public:
     A(int a,int b)
     {
         if(a>b)
         {
             cout<<"A:-"<<a<<endl;
         }
         else
         {
             cout<<"B:-"<<b;
         }
     }
     
     
     A(int x)
     {
         cout<<endl;
         cout<<"X:-"<<x*x;
     }
};
int main()
{
    A OBJ(2,3);
    A obj(2);
}