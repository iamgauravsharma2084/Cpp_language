#include<iostream>
using namespace std ;
void search(int L[],int n,int item)
{
    int l=0,u=n-1,m;
    while(l<=u)
    {
        m=(l+u)/2;
        if(item==L[m])
        {
            cout<<m+1;
            return ;
        }
        else if(item>L[m])
           l=m+1;
        else
          u=m-1;
    }
    cout<<"search not found";
}
int main()
{
     int arr[]={1,2,3,4,5,6,7,8,9,10};
     search(arr,9,2);
    return 0;
    
}