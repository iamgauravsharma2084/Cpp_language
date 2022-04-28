#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
char a[]={'1','2','3','4','5','6','7','8','9'};
int count=0,s=0;
char play1[20];
char play2[20];
char sy='0';
char syy='x';
int first=0;
int secound=0;
void line()
{
  gotoxy(20,4);
  cout<<"\n\t\t\t   "<<a[0]<<"  |     "<<a[1]<<"    |  "<<a[2];
  gotoxy(20,6);
  cout<<"\t------|----------|------\n";
  cout<<"\t\t\t   "<<a[3]<<"  |     "<<a[4]<<"    |  "<<a[5];
  cout<<"\n\t\t\t------|----------|------";
  gotoxy(20,9);
   cout<<"\t   "<<a[6]<<"  |     "<<a[7]<<"    |  "<<a[8];
}
void Name()
{
  gotoxy(25,8);
  cout<<"Enter Player 1 Name:-";
  gotoxy(47,8);
  gets(play1);
  gotoxy(25,9);
  cout<<"Enter Player 2 Name:-";
  gotoxy(47,9);
  gets(play2);
}
void input()
{

  clrscr();
  line();
  char ch,c;
  int i;
  int yy=16;
  gotoxy(10,1);
  cout<<"Player    Enter  Win  Won         !Tic Tac Game!";
  gotoxy(1,4);
 cout<<"----------------------------------------------------------------------------";
  gotoxy(5,5);
  cout<<"Progarm Exit e/E";
  gotoxy(5,2);
  cout<<play1<<"          "<<first<<"   ";
  gotoxy(5,3);
  cout<<play2<<"          "<<secound<<"     "<<endl;
 if(s==0)
 {
  gotoxy(2,2);
  cout<<(char)yy;
  gotoxy(20,2);
  cin>>ch;
 if(ch=='e'||ch=='E')
 {
   exit(0);
 }
else
{
  for(i=0;i<=8;i++)
  {
   if(a[i]==ch)
   {
     lable3:
     a[i]=syy;
     count++;
     s=1;
   }
  }//loop Body;
}
 }
 else
 {
   gotoxy(2,3);
  cout<<(char)yy;
  gotoxy(20,3);
  cin>>ch;
 if(ch=='e'||ch=='E')
 {
  exit(0);
 }
else
{
  for(i=0;i<=8;i++)
  {
   if(a[i]==ch)
   {
     lable4:
      a[i]=sy;
      count++;
      s=0;
     }

  }//loop Body;
 }
}
}
int check()
{
  if(a[0]=='X'&&a[1]=='X'&&a[2]=='X'||a[0]=='x'&&a[1]=='x'&&a[2]=='x')
      return 100;
  else if(a[3]=='X'&&a[4]=='X'&&a[5]=='X'||a[3]=='x'&&a[4]=='x'&&a[5]=='x')
      return 100;
  else if(a[6]=='X'&&a[7]=='X'&&a[8]=='X'||a[6]=='x'&&a[7]=='x'&&a[8]=='x')
      return 100;
  else if(a[0]=='X'&&a[3]=='X'&&a[6]=='X'||a[0]=='x'&&a[3]=='x'&&a[6]=='x')
       return 100;
  else if(a[1]=='X'&&a[4]=='X'&&a[7]=='X'||a[1]=='x'&&a[4]=='x'&&a[7]=='x')
	return 100;
  else if(a[2]=='X'&&a[5]=='X'&&a[8]=='X'||a[2]=='x'&&a[5]=='x'&&a[8]=='x')
       return 100;
  else if(a[0]=='X'&&a[4]=='X'&&a[8]=='X'||a[0]=='x'&&a[4]=='x'&&a[8]=='x')
       return 100;
  else if(a[0]=='X'&&a[3]=='X'&&a[6]=='X'||a[0]=='x'&&a[3]=='x'&&a[6]=='x')
       return 100;
  else if(a[2]=='X'&&a[4]=='X'&&a[6]=='X'||a[2]=='x'&&a[4]=='x'&&a[6]=='x')
       return 100;
//******************************0000**********************
  else if(a[0]=='0'&&a[1]=='0'&&a[2]=='0')
      return 200;
  else if(a[3]=='0'&&a[4]=='0'&&a[5]=='0')
      return 200;
  else if(a[6]=='0'&&a[7]=='0'&&a[8]=='0')
      return 200;
  else if(a[0]=='0'&&a[3]=='0'&&a[6]=='0')
       return 200;
  else if(a[1]=='0'&&a[4]=='0'&&a[7]=='0')
	return 200;
  else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
       return 200;
  else if(a[0]=='0'&&a[4]=='0'&&a[8]=='0')
       return 200;
  else if(a[2]=='0'&&a[5]=='0'&&a[8]=='0')
       return 200;
}
main()
{
 textbackground(YELLOW);
 clrscr();
 int num=0,i;
 Name();
 lable2:
 line();
 input();
lable:
    line();
   input();
   num=check();
   cout<<count;
if(count<9)
{
  if(num==100)
  {
   gotoxy(44,2);
    cout<<"Player "<<play1<<" Win";
    first++;
    line();
  }
  else if(num==200)
  {
   gotoxy(44,3);
    cout<<"Player "<<play2<<" Win";
    secound++;
    line();
  }
 else
   goto lable;
 }
 else
 {
  gotoxy(2,10);
  cout<<"Game Draw";
  line();
 }
 char choice;
 gotoxy(2,11);
 cout<<"\nOnce more or:yes:y/no:n";
 cin>>choice;
 if(choice=='y'||choice=='Y')
 {
   a[0]='1';
   a[1]='2';
   a[2]='3';
   a[3]='4';
   a[4]='5';
   a[5]='6';
   a[6]='7';
   a[7]='8';
   a[8]='9';
   count=0;
   goto lable2;
 }
 getch();
}