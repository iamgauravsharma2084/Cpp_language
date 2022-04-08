#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n,j;
  clrscr();
  cout<<"Enter your number:-";
  cin>>n;
  for(i=1;i<n-1;i++)
  {
   for(j=2;j<i;j++)
    if(i%j==0)
     break;



   if(i==j)
     cout<<i<<" ";
  }
  getch();
}