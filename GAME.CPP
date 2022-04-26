#include<iostream.h>
#include<conio.h>
void line()
{
  gotoxy(20,4);
  cout<<"\n\t\t\t      |          |";
  gotoxy(20,6);
  cout<<"\t------|----------|------\n";
  cout<<"\t\t\t      |          |";
  cout<<"\n\t\t\t------|----------|------";
  gotoxy(20,9);
  cout<<"\t      |          |";
}
main()
{
 clrscr();
 line();
 getch();
}