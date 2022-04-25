#include<iostream>
using namespace std;
int main()
{
    int i,j,l;
    char k;
    for(i=1;i<=5;i++)
    {
       k='A';
         for(j=1;j<=9;j++)
        {
            if(j>=6-i&&j<=4+i)
            {
                cout<<k;
                j<=4?k++:k--;
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}