#include<iostream.h>
#include<string.h>
#include<fstream.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
long int n;
 char ch;
long long int se;
void Rend();
void Manu();
class Ban
{
   private:
     char BName[20];
     char Aadhar[20];
     char Phone[20];
     char bbname[20];
     long long int Amount;
     long long int AmountNumbar;
     long long int PN;
  public:
     void Bsetdata();
     void BBsetdata();
     void Bshowdata();
     int  Bsearch();
     void ATM();
     void Bdel();
     void Bdell();
     void AATM();
     void Badd();
     void BBname();
     void BBshow();

};
class Reg:public Ban
{
   private:
	  char Name[20];
	  char Emali[20];
	  char phone_no[20];
	  long int  password;
   public:
	  void setdata();
	  void fliedata();
	  void display();
	  void readf2();

};
void Reg::setdata()
{
	       long int	pass;
		cout<<"Enter your Name:-";
		gets(Name);
		cout<<"Enter your Emali id:-";
		gets(Emali);
		phone:
		cout<<"Enter your Phone Numbar:-";
		gets(phone_no);
		if(strlen(phone_no)!=10)
		{
		 cout<<endl;
		 goto phone;
		}
		lable:
		cout<<"Enter your Password:-";
		cin>>password;
		cout<<"Enter your Re-Password:-";
		cin>>pass;
		if(password!=pass)
		{
		 goto lable;
		}
}
void Reg::fliedata()
{
   ofstream fout;
   fout.open("fls.tt",ios::out|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
 }
 void Reg::display()
 {
   //cout<<"Name"<<"\t\t"<<"Emali"<<"\t\t"<<"Phone no"<<"\t "<<"password\n";
   cout<<"\n"<<Name<<"\t"<<Emali<<"\t"<<phone_no<<"\t"<<password<<endl;
  }
void Reg::readf2()
{
       clrscr();
       int uo=0;
       int  fo=0;
       long int pass;
	char use[20];
       ifstream fin;
       fin.open("fls.tt",ios::in|ios::binary);
       if(!fin)
       {
	    cout<<"file A not found";
       }
       else
	{
	    cout<<"Enter your use:-";
	    gets(use);
	    cout<<"Enter your pass:-";
	    cin>>pass;
	    while(!fin.eof())
	    {
		if(strcmp(Name,use)==0)
		{
		  if(password==pass)
		  {
		   Manu();
		   uo=1;
		   break;
		  }
		}
		fin.read((char*)this,sizeof(*this));
	      }
	   if(uo==0)
	   {
	     cout<<"no match Password";
	   }
	   if(fo==0)
	   {
	    cout<<"no match Nmae";
	   }
	  fin.close();
	}
}
void Rend()
{
 cs:
  long int y;
  n=(99*rand())%9900;
  if(n<0)
  {
   n=-n;
  }
  cout<<"Enter This "<<n<<" OTP :-";
  cin>>y;
  if(n==y)
  { }
  else
  {
    goto cs;
  }
}
//*************************************************Ban*******************************
void Ban::Badd()
{
  clrscr();
    long long int no,sss;
    int jj=0;
    char sd;
    fstream file;
    file.open("Ban1.txt",ios::in|ios::out|ios::ate|ios::binary);
    cout<<"Enter the PN Number:-";
    cin>>no;
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(PN==no)
     {

	cx:
	cout<<"Enter the money:-";
	cin>>sss;
	if(sss<0&&Amount<sss)
	{
	  //sss=-sss;
	  cout<<"Don't have that much money in your Account!\n";
	  goto cx;
	}
	cout<<"Do you want to withdraw W/w or deposit D/d money from the bank?";
	cin>>sd;
	if(sd=='d'||sd=='D')
	{
	  Amount=Amount+sss;
	}
	else if(sd=='W'||sd=='w')
	{
	  if(Amount<=sss)
	  {
	    cout<<"\nYo have less money in ypur account then the money you entered";
	  }
	  else
	  {
	  Amount=Amount-sss;
	   }
	}
	file.seekg(file.tellp()-sizeof(*this));
	jj=1;
	file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
    }
    if(jj==0)
    {
     cout<<"This Data Not al";
     getch();
    }
    //t++;
    file.close();
}
void Ban::Bsetdata()
{
  AmountNumbar=0;
  int i;
 clrscr();
  cout<<"\nEnter your Name:-";
  gets(BName);
  labn:
  cout<<"\nEnter your Aadhar:-";
  gets(Aadhar);
  if(strlen(Aadhar)!=12)
  {
   cout<<"Your Aadhar Card Number is not Correct\n";
   goto labn;
  }
  lab:
  cout<<"\nEnter your Phone:-";
  gets(Phone);
  if(strlen(Phone)!=10)
  {
   cout<<"Your Phone Number is not Correct\n";
   goto lab;
  }
  fflush(stdin);
  cx:
  cout<<"\nEnter your Amount:-";
  cin>>Amount;
  if(Amount>=1000)
  {}
  else
  {
   cout<<"Your Account will be opened with 1000 Only\n";
   goto cx;
  }
  time_t t;
  srand((unsigned) time(&t));
  AmountNumbar=rand()%1234567890*1234567890;
  if(AmountNumbar<0)
  {
   AmountNumbar=-AmountNumbar;
  }
  cout<<"Your Account Number:-"<<AmountNumbar;
  xa:
   fflush(stdin);
  cout<<"\nDo you want to get an ATM Card?";
  cin>>ch;
  if(ch=='Y'||ch=='y')
  {
    PN=(99*rand())%9900;
     if(PN<0)
     {
      PN=-PN;
     }
    cout<<"Your ATM Card Number:-"<<PN;
  }
  else if(ch=='N'||ch=='n')
  {

  }
  else
  {
   cout<<"Just type Y/y or N/n";
   goto xa;
  }
  BBsetdata();
}
void Ban::BBsetdata()
{
  ofstream fot;
  fot.open("Ban1.txt",ios::app|ios::binary);
  fot.write((char*)this,sizeof(*this));
  cout<<"\nData Successful Save";
  fot.close();
}
//******************************Ban Nshowdata*******************************
void Ban::Bshowdata()
{
  clrscr();
  int x=0;
  int so=0;
  ifstream fout;
  fout.open("Ban1.txt",ios::in|ios::binary);
  if(!fout)
  {
   cout<<"File Not Found";
  }
  else
  {
     cout<<"Name"<<"\t\t"<<"Aadhar"<<"\t\t"<<"Phone"<<"\t\t"<<"Amount"<<"\t   "<<"Account"<<"\t"<<"ATM Pin ";
     fout.read((char*)this,sizeof(*this));
     while(!fout.eof())
     {
	x++;
	so=so+Amount;
	cout<<"\n"<<BName<<"\t"<<Aadhar<<"\t"<<Phone<<"\t"<<Amount<<"\t   "<<AmountNumbar<<"\t"<<PN<<endl;
	fout.read((char*)this,sizeof(*this));
     }
  }
  cout<<"\nTotal Account:-"<<x<<"\n";
  cout<<"\nTotal Amount:-"<<so;

}
int Ban::Bsearch()
{
   long long int se;
   int flog=0;
   ifstream fout;
   fout.open("Ban1.txt",ios::in|ios::binary);
   if(!fout)
   {
     cout<<"File not found";
   }
   else
   {
     cout<<"Enter search Am:-";
     cin>>se;
     while(!fout.eof())
     {
       if(AmountNumbar==se)
       {
       cout<<BName<<"\t"<< Aadhar<<"\t"<<Phone<<"\t"<<Amount<<"\t"<<AmountNumbar;
       flog=1;
       break;
       }
       fout.read((char*)this,sizeof(*this));
     }
   }
   if(flog==0)
   {
    cout<<"Record Not Fount";
   }
   else
   {
    return 100;
   }
}

void Ban::Bdel()
{
    long long int no;
     int flog=0;
    ifstream fin;
    ofstream fout;
    fin.open("Ban1.txt",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       cout<<"Enter your account number:-";
       cin>>no;
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(AmountNumbar==no)
	{
	  flog =1;
	}
      else
      {
      fout.write((char*)this,sizeof(*this));
      }
      fin.read((char*)this,sizeof(*this));
      }
      if(flog==1)
      {
      cout<<"\nData suceesfull delet";
      }
      fin.close();
      fout.close();
      remove("Ban1.txt");
      rename("temfile1.txt","Ban1.txt");
    if(flog==0)
    {
      cout<<"search Record found" ;
    }
    }
}
void Ban::Bdell()
{
  ofstream fout;
  fout.open("Ban1.txt",ios::out|ios::binary);
  cprintf("All Data Succseefull Delete");
  fout.close();
}
void Ban::ATM()
{
    clrscr();
    long long int no,sss;
    int jj=0;
    char sd;
    int flog=0;
    fstream file;
    file.open("Ban1.txt",ios::in|ios::out|ios::ate|ios::binary);
    cout<<"Enter the PN Number:-";
    cin>>no;
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(PN==no)
     {
       while(!file.eof())
      {
       if(PN==no)
       {
       cout<<BName<<"\t"<< Aadhar<<"\t"<<Phone<<"\t"<<Amount<<"\t"<<AmountNumbar;
       flog=1;
       break;
       }
       file.read((char*)this,sizeof(*this));
     }
	cx:
	cout<<"\nHow much money to withdraw:-";
	cin>>sss;
	if(sss<0&&Amount<sss)
	{
	  //sss=-sss;
	  cout<<"Don't have that much money in your Account!\n";
	  goto cx;
	}
	else
	{
	  Amount=Amount-sss;
	}
	file.seekg(file.tellp()-sizeof(*this));
	jj=1;
	file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
    }
    if(jj==0)
    {
     cout<<"This Data Not al";
     getch();
    }
    //t++;
    file.close();
}
//******************************Reg Manu************************************

//*****************************************Ben Manu*****************************
void Ban::BBname()
{
     ofstream fout;
     clrscr();
    cout<<"Enter Back Name:-";
    gets(bbname);
    fout.open("bank.tt",ios::out|ios::binary);
    fout.write((char*)this,sizeof(*this));
    fout.close();
}
void welcome()
{
  textbackground(3);
  clrscr();
  cout<<""<endl;
  cout<<"\t    \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\             ";
  cout<<"\t     \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/                ";
  cout<<"\t      \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|             "<<endl;
}
void Ban::BBshow()
{
  clrscr();
  ifstream fout;
  int j;
  fout.open("bank.tt",ios::in|ios::binary);
  if(!fout)
  {
   cout<<"File Not Found";
  }
  else
  {
     fout.read((char*)this,sizeof(*this));
     while(!fout.eof())
     {
	welcome();
	gotoxy(1,6);
	cout<<"\t\t\t    "<<strupr(bbname)<<"\t\t\t\t\t\t";
	fout.read((char*)this,sizeof(*this));
     }
  }
}
void Ban_manu()
{
while(1)
{
  clrscr();
  char cho;
  Ban obj;
  gotoxy(25,5);
   cout<<"No 1.Open An Account in the Bank  ";
  gotoxy(25,7);
   cout<<"No 2.Maney Add                    ";
     gotoxy(25,9);
   cout<<"No 3.All Bank Account             ";
     gotoxy(25,11);
   cout<<"No 4. Delete                      ";
     gotoxy(25,13);
   cout<<"No 5.Search Account               ";
     gotoxy(25,15);
   cout<<"No 6.All Data Delete              ";
     gotoxy(25,17);
   cout<<"No 7.Exit                         ";
     gotoxy(25,19);
   cout<<"Enter your Choice:-               ";
     gotoxy(44,19);
   cin>>cho;
   switch(cho)
   {
    case '1':
      obj.Bsetdata();
      getch();
      break;
   case '2':
	obj.Badd();
	getch();
       break;
    case '3':
	obj.Bshowdata();
	getch();
       break;
    case '4':
	obj.Bdel();
	getch();
       break;
    case '5':
	obj.Bsearch();
	getch();
	 break;
    case '6':
	obj.Bdell();
	getch();
	 break;
    case '7':
	Manu();
    }
  }
}
//***************************college*******************************
void Manu()
{
  textbackground(YELLOW);
  clrscr();
   Reg obj;
    obj.BBshow();
  char cho;
  gotoxy(29,9);
  cout<<"No.1 Open the Account ";
  gotoxy(29,11);
  cout<<"No.2 ATM              ";
  gotoxy(29,13);
  cout<<"No.3 Settings         ";
  gotoxy(29,15);
  cout<<"No.4 Exit             ";
  gotoxy(29,17);
  cout<<"Enter your choice:-   ";
  gotoxy(49,17);
  cin>>cho;
  switch(cho)
  {
   case '1':
       Ban_manu();//Reg
       getch();
       Manu();
       break;
   case '2':
	obj.ATM();
	getch();
	Manu();
	break;
   case '3':
	   clrscr();
	 gotoxy(25,9);
	cout<<"No.1 Bank Name Change";
	 gotoxy(25,11);
	cout<<"No.2 Password Change ";
	gotoxy(25,13);
	cout<<"No.3 Exit            ";
	 gotoxy(25,15);
	cout<<"Enter your Ch:-      ";
	cin>>ch;
	switch(ch)
	{
	case '1':
	   obj.BBname();
	   getch();
	   Manu();
	   break;
	case '2':
	     obj.setdata();
	      obj.fliedata();
	      getch();
	     break;
	case '3':
	     Manu();
	     break;
	}
   case '4':
	 exit(0);
  }
}
int main()
{
      clrscr();
       Reg obj;

       obj.readf2();
      getch();
   return 0;
}
