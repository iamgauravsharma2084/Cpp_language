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
int drow=0;
int secound=0;
int fs=0;
int sf=0;
int sum=0;
void line()
{
  gotoxy(20,4);
  cout<<"\n\n\n\n\t\t\t      |          |";
  cout<<"\n\t\t\t   "<<a[0]<<"  |     "<<a[1]<<"    |  "<<a[2];
 // gotoxy(20,6);
  cout<<"\n\t\t\t------|----------|------\n";
  cout<<"\t\t\t      |          |";
  cout<<"\n\t\t\t   "<<a[3]<<"  |     "<<a[4]<<"    |  "<<a[5];
  cout<<"\n\t\t\t------|----------|------";
 // gotoxy(20,9);
  cout<<"\n\t\t\t      |          |";
   cout<<"\n\t\t\t   "<<a[6]<<"  |     "<<a[7]<<"    |  "<<a[8];
}
void Name()
{
  xxx:
  int len;
  gotoxy(25,8);
  cout<<"Enter Player 1 Name:-";
  gotoxy(47,8);
  gets(play1);
  len=strlen(play1);
  if(len>6)
  { }
  else
  {
   goto xxx;
  }
  xxx1:
  len=0;
  gotoxy(25,9);
  cout<<"Enter Player 2 Name:-";
  gotoxy(47,9);
  gets(play2);
  len=strlen(play2);
  if(len>6)
  { }
  else
  {
   goto xxx1;
  }
}
void input()
{

  clrscr();
  line();
  char ch,c;
  int i;
  int yy=16;
  sum=(first+sf+secound+fs)/2;
  gotoxy(10,1);
  cout<<"Player  | Enter | Win | Won | Drow | Total Game | Progarm Exit e/E!";
  gotoxy(1,4);
 cout<<"----------------------------------------------------------------------------";
 gotoxy(30,5);
 cout<<"Tic Tac Toe Game";
  gotoxy(5,2);
  cout<<play1<<"\t   "<<first<<"\t "<<fs<<"\t "<<drow<<"\t "<<sum;
  gotoxy(5,3);
  cout<<play2<<"\t   "<<secound<<"\t "<<sf<<endl;
 if(s==0)
 {
  gotoxy(2,2);
  cout<<(char)yy;
  gotoxy(20,2);
  cin>>ch;
 if(ch=='e'||ch=='E')
 {
   cout<<"Please Enter the ";
   getch();
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
void report()
{
   int rr=0;
  // textbackground(9);
   clrscr();
   gotoxy(27,4);
   cprintf("How is this recommendation?");
   gotoxy(27,6);
   cprintf("1.Excellent   2.Great   3.Good");
   gotoxy(27,8);
   cprintf("4.Ok   5.Bad");
   gotoxy(27,10);
   cprintf("Enter Tha Reference:-");
   gotoxy(27,11);
   cout<<"                         ";
   gotoxy(35,11);
   cin>>rr;
   if(1==rr||2==rr||3==rr||4==rr||5==rr)
   {
      gotoxy(27,11);
      textcolor(YELLOW);
      cout<<"Thanks For your feedback";
   }
}
main()
{
  textbackground(0);
 system("cls");
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
if(count<9)
{
  if(num==100)
  {
   gotoxy(38,3);
    cout<<"Player "<<play1<<" Win";
    first++;
    sf++;
    line();
  }
  else if(num==200)
  {
   gotoxy(38,3);
    cout<<"Player "<<play2<<" Win";
    secound++;
    fs++;
    line();
  }
 else
   goto lable;
 }
 else
 {
  gotoxy(2,10);
  cout<<"Game Draw";
  drow++;
  line();
 }
 char choice;
 gotoxy(2,11);
 cout<<"Once more or:yes:y/no:n";
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
   s=0;
   goto lable2;
 }
 else
 {
    report();
 }
 getch();
}