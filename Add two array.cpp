#include<iostream>
using namespace std;
int main()
{
    int n,i,m,j,l=0,temp;
    int arr[100];
    cout<<"Enter your number:-";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    cout<<"Enter 2 your number:-";
    cin>>m;
    int ar[m];
    for(i=0;i<m;i++)
    {
       cin>>ar[i]; 
    }

   for(i=0;i<n;i++)
   {
       arr[i]=a[i]+ar[i];
   }
   
   for(i=0;i<n;i++)
   {
       cout<<arr[i]<<endl;
   }
   
   
   
   
   
   
   
   
   
   
  
   return 0;
}