#include<iostream>
using namespace std;
int main()
{
    int a,b,i;
    cout<<"enter your two number:-";
    cin>>a>>b;
    for(i=a<b?a:b;i<a*b;i--)
    
     if(a%i==0&&b%i==0)
        break;
    cout<<i;
}