#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,del,a[20],b[20],l=0,check=0;
  clrscr();
  cout<<"Enter your number:-";
  cin>>n;
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
  cout<<"Enter your Delete:-";
  cin>>del;
  for(i=0;i<n;i++)
  {
    if(a[i]==del)
    {
     cout<<"Delete "<<a[i]<<endl;
     check=1;
    }
    else
    {
      b[l]=a[i];
      l++;
    }
  }
  if(check==0)
  {
    cout<<"Number no Match";
  }
  else
  {
  for(i=0;i<l;i++)
  {
    cout<<" "<<b[i]<<endl;
  }
  }
  getch();
}