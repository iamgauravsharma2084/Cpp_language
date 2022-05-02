#include<iostream>
using namespace std;
class A
{
    private:
      int a,b;
    public:
       void setdata()
       {
           cout<<"Enter your Number:-";
           cin>>a>>b;
         
       }
       void display()
       {
           cout<<a<<" + "<<"i"<<b<<endl;
           cout<<"Sum of complex number : "<<a<<" + "<<"i"<<b;
       }
       A add(A z)
       {
           A temp;
           temp.a=a+z.a;
           temp.b=b+z.b;
           return temp;
       }
};
int main()
{
    A obj,obj2,obj3;
    obj.setdata();
    obj2.setdata();
    obj3=obj.add(obj2);
    
    
    
    obj3.display();
}