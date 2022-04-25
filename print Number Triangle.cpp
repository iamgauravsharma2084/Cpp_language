#include<iostream>
using namespace std;
int main()
{
    int i,j,l;
    char k,n;
    for(i=1;i<=5;i++)
    {
         l=1;
         for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                cout<<l;
               j<=4?l++:l--;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}