#include<iostream>
using namespace std;
int main()
{
    int n,i,j,count=0;
    cout<<"Enter your number:-";
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
       cin>>a[i]; 
    }
   
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;i++)
        {
            if(a[i]==a[j])
            {
                cout<<"This is a Duplicate:-"<<a[i]<<" "<<endl;
                count++;
                break;
            }
        }
     }
     cout<<count;
   return 0;
}