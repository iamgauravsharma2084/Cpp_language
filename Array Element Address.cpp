#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout<<"Enter your number:-";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
    for(i=0;i<n;i++)
    {
        cout<<"Value:-"<<a[i]<<" :- "<<&a[i]<<endl;
        
    }
   return 0;
}