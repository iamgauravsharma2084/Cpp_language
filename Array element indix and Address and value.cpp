#include<iostream>
using namespace std;
int main()
{
    int n,i,se,flag=0;
    cout<<"Enter your number:-";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    cout<<"enter your search:-";
    cin>>se;
    for(i=0;i<n;i++)
    {
        if(a[i]==se)
        {
            cout<<"Indix:-"<<i<<"\nValue:-"<<a[i]<<"\nAddress:-"<<&a[i];
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Element Not Found";
    }
   return 0;
}