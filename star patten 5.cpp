#include<iostream>
using namespace std;
int main()
{
    int i,j,l;
    for(i=1;i<=5;i++)
    {
        l=1;
        for(j=0;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i&&l==1)
            {
              cout<<"*";
              l=0;
            }
            else
            {
              cout<<" ";
              l=1;
            }
        }
        cout<<endl;
    }
}