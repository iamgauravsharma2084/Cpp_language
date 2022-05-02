#include<iostream>
using namespace std;
void add()
{
    int a,b,c;
    cout<<"enter your two number:-";
    cin>>a>>b;
    c=a+b;
    cout<<c<<endl;
}

void sub()
{
     int a,b,c;
    cout<<"enter your two number:-";
    cin>>a>>b;
    c=a-b;
    cout<<c<<endl;
}

void mul()
{
     int a,b,c;
    cout<<"enter your two number:-";
    cin>>a>>b;
    c=a*b;
    cout<<c<<endl;
}


void divv()
{
     int a,b,c;
    cout<<"enter your two number:-";
    cin>>a>>b;
    c=a/b;
    cout<<c<<endl;
}

void sqr()
{
    int a,b;
  cout<<"Enter your number:-";
  cin>>a;
  b=a*a;
  cout<<b<<endl;
}
void clrs()
{
     cout<<"                                                                                                                ";
}
int main()
{
    while(1)
    {
     int n;
    cout<<"\nNo:-1.Addition"<<endl;
    cout<<"No:-2.Subtraction"<<endl;
    cout<<"No:-3.Multiplication"<<endl;
    cout<<"No:-4.Division"<<endl;
    cout<<"No:-5.Square"<<endl;
    cout<<"No:-6.Exit"<<endl;
    cout<<"Enter your choice:-";
    cin>>n;
    switch(n)
    {
        case 1:
           add();
           break;
         case 2:
              sub();
            break;
        case 3:
            mul();
             break;
        case 4:
            divv();
             break;
        case 5:
              sqr();
              break;
        case 6:
             exit(0);
        default:
            cout<<"Something is wrong..!!";
     }
    }
}