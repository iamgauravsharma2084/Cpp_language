#include<iostream>
using namespace std;
int main()
{
    int *p,n,i,sum=0;
    cout<<"Enter your number:-";
    cin>>n;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        cin>>*(p+i);
    }
    for(i=0;i<n;i++)
    {
    cout<<*p+i<<" ";
    sum=sum+*(p+i);
    }
    cout<<"\nSum:-"<<sum;
}