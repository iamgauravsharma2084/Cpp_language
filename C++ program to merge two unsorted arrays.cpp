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
        arr[i]=a[i];
       
    }
   for(j=0;j<m;j++)
   {
       arr[n+j]=ar[j];
      
   }
   
    for(i=0;i<n+m;i++)
   {
       cout<<arr[i]<<" ";
   }
   cout<<"\n****************************Sort**************************\n";
   for(i=0;i<n+m;i++)
   {
       for(j=i+1;j<n+m;j++)
       {
           if(arr[i]>=arr[j])
           {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   
   cout<<endl;
   for(i=0;i<n+m;i++)
   {
       cout<<arr[i]<<" ";
   }
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
  
   return 0;
}