#include<conio.h>
#include<stdio.h>
void main()
{
int  name,user,mob;
int pswd,cpswd,lpass;
int  luser;
clrscr();
printf("Enter Your Name  : -  ");
scanf("%d",&name);
printf("Enter Your UserName : - ");
scanf("%d",&user);
printf("Enter Your  Mobile : - ");
scanf("%d",&mob);
printf("Create Your Password : -");
scanf("%d",&pswd);
printf("Re-Enter Your Password : - ");
scanf("%d",&cpswd);
if(pswd==cpswd)
		{
			clrscr();
			printf("Your Account Create Successfully \n\n");
			printf("Please Login\n\nEnter Username or Mobile ");
			scanf("%d",&luser);


			if(luser==user||luser==mob)
			{   	printf("Enter Your Password ") ;
			scanf("%d",&lpass);
				if(lpass==pswd)
				{
				clrscr();
				printf("Welcome %d ",name);
				}
				else
				printf("Invalid Password ");
			}
			else
			printf("Username or Mobile Does Not Match ");


		}
else{
		printf("Try Agin");
		}

getch();}