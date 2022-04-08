#include<iostream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,a[20],c[20],b[20],l=0,k=0;
 clrscr();
 cout<<"Enter your number:-";
 cin>>n;
 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }
 for(i=0;i<n;i++)
 {
  if(a[i]%2==0)
  {
     b[l]=a[i];
     l++;
  }
  else
  {
     c[k]=a[i];
     k++;
  }
 }
 cout<<"\nEven Number\n";
 for(i=0;i<l;i++)
 {
  cout<<" "<<b[i];
 }
 cout<<"\nOdd Number\n";
 for(i=0;i<k;i++)
 {
  cout<<" "<<c[i];
 }
 getch();
}
