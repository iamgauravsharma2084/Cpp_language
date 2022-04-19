#include<iostream>
using namespace std;
int main()
{
    int n,i,k=0,l=0,arr1[10],arr2[20];
    cout<<"Enter your number:-";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
   for(i=0;i<n;i++)
   {
       if(arr[i]%2==0)
       {
           arr1[l]=arr[i];
           l++;
       }
       else
       {
           arr2[k]=arr[i];
           k++;
       }
   }
    cout<<"\nEven Number\n";
   for(i=0;i<l;i++)
   {
       cout<<arr1[i];
   }
   cout<<"\nOdd Number\n";
   for(i=0;i<k;i++)
   {
       cout<<arr2[i];
   }
   
    
    
    
}