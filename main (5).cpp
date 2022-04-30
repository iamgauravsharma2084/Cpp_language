#include<iostream>
using namespace std;
int main()
{
    int n,de,i,j;
    cout<<"enter your  number:-";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
       cin>>arr[i]; 
    }
    cout<<"Prime Number:-"<<endl;
   for(i=0;i<n;i++)
   {
       for(j=2;j<n;j++)
       {
           if(arr[i]%j==0)
           {
               break;
           }
       }
       if(arr[i]==j)
       {
           cout<<arr[i]<<" ";
       }
   }
}
