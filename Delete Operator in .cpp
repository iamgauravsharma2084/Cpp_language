#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter your number:-";
    cin>>n;
    int *p=new int[n];
    cout<<"Enter "<<n<<" Number:-"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
    }
    cout<<"Array Display"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<p[i]<<" ";
    }
    
    cout<<endl;
    cout<<"Sum of Array:-";
    for(i=0;i<n;i++)
    {
        sum=sum+p[i];
    }
    cout<<sum;
    delete p;
}