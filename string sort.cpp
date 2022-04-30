#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char a[5][10],s[10],b;
    int i;
    cout<<"Enter your string:-";
    for(i=0;i<5;i++)
    {
       gets(a[i]);
    }
    
    for (int r = 0; r <5; r++) {
       
    
    for(i=0;i<5-r;i++)
    {
      b=strcmp(a[i],a[i+1]);
      if(b>0)
      {
         strcpy(s,a[i]);
         strcpy(a[i],a[i+1]);
         strcpy(a[i+1],s);
      }
    }
    }
    for(i=0;i<5;i++)
    {
        puts(a[i]);
    }
    
    
    
    
    
}