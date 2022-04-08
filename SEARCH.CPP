#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,a[20],search,count=0;
  clrscr();
  cout<<"Enter your number:-";
  cin>>n;
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout<<"Enter search Number:-";
  cin>>search;
  for(i=0;i<=n;i++)
  {
   if(a[i]==search)
   {
     count=1;
   }
  }
  if(count==1)
  {
   cout<<"This number match";
  }
  else
  {
   cout<<"This Number No match";
  }
  getch();
}