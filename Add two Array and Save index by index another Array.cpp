#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0,l=0,arr2[20];
    cout<<"Enter your number:-";
    cin>>n;
    int arr[n];
    int arr1[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
   for(i=0;i<n;i++)
   {
       cin>>arr1[i];
   }
   
   for(i=0;i<n;i++)
   {
       arr2[i]=arr[i]+arr1[i];
   }
   
   
    for(i=0;i<n;i++)
   {
       cout<<arr[i]<<"+"<<arr1[i]<<"="<<arr2[i]<<endl;
   }
   
   
    
    
    
}