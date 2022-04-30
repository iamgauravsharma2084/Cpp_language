#include<iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cout<<"Enter your number:-";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
   
   for(i=0;i<n;i++)
   {
       if(a[i]<0)
       {
           cout<<-a[i]<<" ";
           sum=0;
       }
       else
       {
           cout<<a[i]<<" ";
       }
   }
   return 0;
}