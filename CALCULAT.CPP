#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<stdio.h>
int d;
void Clear();
class Calculator
{
    private:
       int a;
       int b;
       int c;
 public:
   void Add();
   void Subtraction();
   void Multiplication();
   void Division();
   void prime();
   void Positive();
   void Ascending();
   void Cube();
   void Average();
   void Greatest();
   void HCF();
   void Even();


}c1;
//*********************** Add FUNCTiON************************
void Calculator::Add()
{
   if(d==0)
   {
     cout<<"Enter your Two Number:-";
     cin>>a>>b;
     c=a+b;
     cout<<"Add "<<a<<" And "<<b<<":-"<<c;
     d=c;
   }
   else
   {
      cout<<"Enter your Two Number:-";
     cin>>a;
     c=a+d;
     cout<<"Add "<<a<<" And "<<d<<":-"<<c;
     d=c;
   }
}
//***********************Subtraction**************************
void Calculator::Subtraction()
{
    if(d==0)
    {
     cout<<"Enter your Two Number:-";
     cin>>a>>b;
     c=a-b;
     d=c;
     cout<<"Subtraction "<<a<<" And "<<b<<":-"<<c;
    }
    else
    {
       cout<<"Enter your Two Number:-";
       cin>>b;
       c=d-b;
       cout<<"Subtraction "<<d<<" And "<<b<<":-"<<c;
       d=c;
    }
}
//**********************Multiplcation*************************
void Calculator:: Multiplication()
{
    if(d==0)
    {
     cout<<"Enter your Two Number:-";
     cin>>a>>b;
     c=a*b;
     cout<<"Multiplication "<<a<<" And "<<b<<":-"<<c;
     d=c;
    }
    else
    {
      cout<<"Enter your one Number:-";
      cin>>a;
      c=d*a;
      cout<<"Multiplication "<<d<<" And "<<a<<":-"<<c;
      d=c;

    }
}
//**********************Division******************************
void Calculator:: Division()
{
    if(d==0)
    {
     cout<<"Enter your Two Number:-";
     cin>>a>>b;
     c=a/b;
     cout<<"Division "<<a<<" And "<<b<<":-"<<c;
     d=c;
    }
    else
    {
      cout<<"Enter your One Number:-";
      cin>>b;
      c=d/b;
      cout<<"Division "<<d<<" And "<<b<<":-"<<c;
      d=c;
    }
}

//****************************Prime********************
void Calculator::prime()
{
    if(d==0)
    {
	int j;
	cout<<"Enter your Number:-";
	cin>>a;
	d=a;
       for(j=2;j<a-1;j++)
       {
	if(a%j==0)
	 break;
       }
       if(j==a)
       {
	 cout<<"This is Prime Number";
       }
       else
       {
	 cout<<"This is Prime Number";
	}
     }
    else
    {
       int j;
       for(j=2;j<d;j++)
     {
      if(d%j==0)
       break;
     }
     if(j==d)
     {
       cout<<"This is Prime Number";
     }
     else
     {
       cout<<"This is not Prime Number";
     }
  }
}

//***************Positive Number************
void Calculator::Positive()
{
  if(d==0)
  {
   cout<<"Enter The number:-";
    cin>>a;
    d=a;
    if(a>0)
    {
     cout<<a<<"is a Positive Number";
    }
    else
    {
     cout<<a<<"is a not Positive Number";
    }
   }
   else
   {
    if(d>0)
    {
     cout<<d<<" is a Positive Number";
    }
    else
    {
     cout<<d<<" is a not Positive Number";
    }
   }
}
//************************************Ascending and Desending order***********************
void Calculator::Ascending()
{
    int arr[50];
    int j;
    int i;
    int temp;
    cout<<"Enter your number:-";
    cin>>a;
    for(j=1;j<=a;j++)
    {
      cin>>arr[j];
    }
     for(j=1;j<=a;j++)
     {
      for(i=j+1;i<=a;i++)
      {
       if(arr[j]>arr[i])
       {
	 temp=arr[j];
	 arr[j]=arr[i];
	 arr[i]=temp;
       }
     }
    }
    cout<<"Ascending order\n";
    for(j=1;j<=a;j++)
    {
      cout<<arr[j]<<" ";
    }
    for(j=1;j<=a;j++)
     {
      for(i=j+1;i<=a;i++)
      {
       if(arr[j]<arr[i])
       {
	 temp=arr[j];
	 arr[j]=arr[i];
	 arr[i]=temp;
       }
     }
    }

   cout<<"\nDesending order\n";
    for(j=1;j<=a;j++)
    {
      cout<<arr[j]<<" ";
    }
}
//*************************Cube*******************************
void Calculator::Cube()
{
  int j;
   cout<<"Enter your number:-";
   cin>>a;
   cout<<"How Much Power:-";
   cin>>b;
   c=pow(a,b);
   cout<<a<<" ^ "<<b<<":-" <<c;
}
//*************************Average ***********************
void Calculator::Average()
{
  int j;
  float arr[50];
  float sum;
  float average;
  cout<<"Enter the number of data:-";
  cin>>a;
  for(j=0;j<a;j++)
  {
    cin>>arr[j];
  }
  for(j=0;j<a;j++)
  {
    sum=sum+arr[j];
  }
  average=sum/a;
  cout<<"Average:-"<<average;
}
//*************************Greatest value ***************
void Calculator::Greatest()
{
  a=0;
  int arr[50];
  int sum=0;
  int j;
  cout<<"Enter the number of data:-";
  cin>>a;
  for(j=0;j<a;j++)
  {
    cin>>arr[j];
  }
   //sum=arr[0];
    //cout<<sum;
  for(j=0;j<a;j++)
  {
     if(sum<arr[j])
     {
	sum=arr[j];
     }
  }
   cout<<"Greatest value:-"<<sum;

   for(j=0;j<a;j++)
  {
     if(sum>arr[j])
     {
	sum=arr[j];
     }
  }

  cout<<"\nSmall value:-"<<sum;
}
//*********************************HCF &LCM***************************
void Calculator::HCF()
{
 int l;
  cout<<"Enter your number:-";
  cin>>a;
  cout<<"Enter your number:-";
  cin>>b;
  for(l=a<b?a:b;l>=1;l--)

   if(a%l==0 &&b%l==0)
    break;
  cout<<"HCF:-"<<l;


  for(l=a>b?a:b;l<=a*b;l++)

   if(l%a==0 &&l%b==0)
    break;
  cout<<"\nLCM:-"<<l;


}
//****************************Even & Odd******************
void Calculator::Even()
{
   cout<<"Enter your number:-";
   cin>>a;
   if(a%2==0)
   {
      cout<<"Even Number";
   }
   else
   {
     cout<<"Odd Number";
   }
}
void  manu()
{
  while(1)
  {
  aq:
    clrscr();
    int j;
    for(j=4;j<10;j++)
    {
     gotoxy(25,j);
     cout<<(char)222;
    }
    for(j=4;j<10;j++)
    {
     gotoxy(50,j);
     cout<<(char)222;
    }
    int n;
    if(d!=0)
    {
    gotoxy(1,2);
    cout<<"Some other operation has to be performed on this:-"<<d;
    gotoxy(1,3);
    cprintf("*********************************************************************");
    }
    gotoxy(1,10);
    textcolor(YELLOW);
    cprintf("*******************************************************************************");
    gotoxy(1,12);
    cprintf("*******************************************************************************");

    gotoxy(1,4);
    cout<<"No 1:-Addition";
    gotoxy(1,5);
    cout<<"No 2:-Subtraction";
    gotoxy(1,6);
    cout<<"No 3:-Multiplication";
    gotoxy(1,7);
    cout<<"No 4:-Division";
    gotoxy(1,8);
    cout<<"No 5:-Check Prime Number";
    gotoxy(1,9);
    cout<<"No 6:-Positive Number";
    gotoxy(27,4);
    cout<<"No 7:-Ascending";
    gotoxy(27,5);
    cout<<"No 8:-Compute Power";
    gotoxy(27,6);
    cout<<"No 9:-Calculate Average";
    gotoxy(27,7);
    cout<<"No 10:-Greatest Number";
    gotoxy(27,8);
    cout<<"No 11:-HCF & LCM";
     gotoxy(27,9);
    cout<<"No 12:-Even & Odd";
    gotoxy(52,4);
    cout<<"No 13:-Clear";
    gotoxy(52,5);
    cout<<"No 14:-Exit\n";
    gotoxy(27,11);
    cout<<"Enter the Number:-";
    cin>>n;
    switch(n)
    {
     case 1:
	 clrscr();
	 c1.Add();
	 getch();
	 break;
     case 2:

	 clrscr();
	 c1.Subtraction();
	 getch();
	  break;
     case 3:
	 clrscr();
	 c1.Multiplication();
	 getch();
	  break;
     case 4:
	 clrscr();
	 c1.Division();
	 getch();
	  break;
     case 5:
	 clrscr();
	 c1.prime();
	 getch();
	  break;
     case 6:
	 clrscr();
	 c1.Positive();
	 getch();
	  break;
    case 7:
	 clrscr();
	 c1.Ascending();
	 getch();
	  break;
    case 8:
	 clrscr();
	 c1.Cube();
	 getch();
	  break;
    case 9:
	  clrscr();
	  c1.Average();
	  getch();
	  break;
    case 10:
	  clrscr();
	  c1.Greatest();
	  getch();
	  break;
    case 11:
	  clrscr();
	  c1.HCF();
	  getch();
	  break;
    case 12:
	  clrscr();
	  c1.Even();
	  getch();
	  break;


    case 13:
	 clrscr();
	  d=0;
	  break;
     case 14:
	  exit(0);
	  break;
     default:
	gotoxy(2,11);
	cout<<"invalid Choice";
	getch();
	 break;
     }
     }

}

void main()
{
 Calculator c1;
  clrscr();
  manu();
  getch();
}