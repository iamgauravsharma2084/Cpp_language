#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdio.h>
#include<fstream.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
int s=0,rr=0,mq=0,kp=0,mk=0,io=0,rat=0,df,mh=0,dd=0,o=0,bb=0,tr[]={60},mx=0,str=0,b=0,ett=0;
long int xx=0,wo=0,rg=0;
char i,x;
long int lo,m=0,mak=0,mlo=0,mn=0,nn=0;
void time3();
void  libline();
void report();
void help();
void main2();
void chech();
void function();
void libinfo();
void pawoed();
void time2();
void sound();
void loding1();
void about();
void data1();
void timee();
void main1();
void loding();
void line();
void timee1();
void basic();
void schll();
void school();
void mainuu();
void  prepro();
void phone();
void reld();
void check();
void phread();
class A
{
  private:
     int t;
     static int b;
    long int sno;
    int cla;
    char name[20];
    char Father[20];
    char village[20];
    char phone[20];
    int pf,tf;
    char a[20][20];
    int ab[20];
    int to;
    char g[5];
    char c[50];
    char cphone[20];
    char pass[1];
    char ccp[20];
    int room;
    char classro[20];
    public:
    void data()
   {
     struct date today;
     int dat,m,y;
     getdate(&today);
     textcolor(9);
     textbackground(8);
     cprintf("%d/%d/%d",today.da_day,today.da_mon,today.da_year);
   }
 void setdata()
   {
     textbackground(9);
    clrscr();
     gotoxy(1,2);
     textcolor(4);
    data();
    gotoxy(61,2);
    textcolor(WHITE);
    cprintf("Student Data Insert");
    gotoxy(1,3);
    textcolor(9);
    cprintf("--------------------------------------------------------------------------------");
    if(t==0)
    {
     cout<<"t=0 is found";
     main1();
    }
    cout<<"\nstudent Sno numbar:-"<<t;
    cout<<"\nStudent Name:-";
    fflush(stdin);
    gets(name);
    cout<<"\nEnter student class:-";
    fflush(stdin);
    cin>>cla;
    fflush(stdin);
    cout<<"\nStudent Father Name:-";
    gets(Father);
    cout<<"\nStudent Village Name:-";
    gets(village);
    fd:
    cout<<"\nStudent Phone Numbar:-";
    gets(phone);
    df=strlen(phone);
    if(df<=9||df>=11)
    {
      textcolor(RED);
      cprintf("%d How many Phone numbers can't be saved",df);
      getch();
      goto fd;
    }
    xo:
    cout<<"\nStudent acc p:-";
    cin>>pf;
    if(pf<0)
    {
     cout<<"This is not possible:-"<<"("<<pf<<")";
     goto xo;
    }
    if(8000<pf)
    {
      cout<<"This fee cannot be Entered:-"<<"("<<pf<<")";
      goto xo;
    }
    tf=8000-pf;
    mq=mq+1;
  }
void showdata()
{
 cout<<"sno\tName\t    Father\t village    class   Phone\tPF\t  TF    ";
  cout<<"\n"<<t<<"   "<<name<<"  "<<Father<<"  "<<village<<"    "<<cla<<"   "<<phone<<"    "<<pf<<"\t "<<tf<<"   ";
// sound();
}
void filedata()
{
   ofstream fout;
   fout.open("filey.txt",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   showdata();
    t=t+1;
   cout<<"\nRecord File successful insate\n\n";
   getch();
 }
void fileshow()
{

   int uo=0;
   textbackground(9);
     clrscr();
      gotoxy(12,2);
      cprintf("Last Serial numbar:-%d",t-1);
      gotoxy(68,2);
      textcolor(WHITE);
      cprintf("Student View");
       gotoxy(1,2);
      textcolor(3);
      data();
      ifstream fin;
      fin.open("filey.txt",ios::in|ios::binary);
	if(!fin)
	 {
	  cout<<"file A not found";
	 }
	 else
	  {
	    cout<<"\nsno\tName\t    Father\t village    class   Phone\tPF\t  TF    ";
	    fin.read((char*)this,sizeof(*this));
	    while(!fin.eof())
	    {
	     cout<<"\n"<<t<<"   "<<name<<"  "<<Father<<"  "<<village<<"    "<<cla<<"   "<<phone<<"    "<<pf<<"\t "<<tf<<"      ";
	     textcolor(YELLOW);
	     uo=1;
	     delay(600);
	     fin.read((char*)this,sizeof(*this));
	    }
      }
	 if(uo==0)
	 {
	    cout<<"data not found";
	 }
	 else
	 {
	 //sound();
	 t++;
	 }
	 fin.close();
   }

 void total()
{
 bb=0;
 o=0;
   textbackground(9);
	clrscr();
	ifstream fin;
       fin.open("filey.txt",ios::in|ios::binary);
      if(!fin)
	 {
	//  t=0;
	 }
	 else
	 {
	    fin.read((char*)this,sizeof(*this));
	    textcolor(YELLOW);
	    gotoxy(1,2);
	     cout<<"  Whose total fee is deposited                       |  Class            student"<<endl;
	     cout<<"sno\tName\t    Father\t  class \tPF ";
	    while(!fin.eof())
	    {
	      if(pf==0)
	      {
		nn++;
	      }
	      if(pf==8000)
	      {
		cout<<"\n\n"<<t<<"   "<<name<<"  "<<Father<<"    "<<cla<<"          "<<pf;
	      }
	      if(pf>=1)
	      {
	       kp++;
	      }
	      if(cla==12)
	      {
	       rr=rr+1;
	      }
	      else if(cla==11)
	      {
	       s=s+1;
	      }
	      else if(cla==10)
	      {
	       o=o+1;
	      }
	      else if(cla==9)
	      {
	       io=io+1;
	      }
	      else if(cla==8)
	      {
	       mk=mk+1;
	      }
	      else if(cla==7)
	      {
	       rat=rat+1;
	      }
	       else if(cla==6)
	      {
	       mh=mh+1;
	      }
	      else if(cla==5)
	      {
	       mx=mx+1;
	      }
	      else if(cla==4)
	      {
	       df=df+1;
	      }
	       else if(cla==3)
	      {
	       bb=bb+1;
	      }
	       else if(cla==2)
	      {
	       str=str+1;
	      }
	      else if(cla==1)
	      {
	       ett=ett+1;
	      }
	      mn=mn+tf;
	      mlo=mlo+pf;
	      mq++;
	     fin.read((char*)this,sizeof(*this));
	    }
	  }
	  textcolor(RED);
	  cout<<endl<<endl;
	  cprintf("Total Student:-%d",mq);
	  mq=0;
	  cout<<endl;
	   textcolor(YELLOW);
	  cprintf("Total Fee Deposited:-%d",mlo);
	  mlo=0;
	  textcolor(3);
	  cout<<endl;
	  cprintf("There is so much more fee to be deposited:-%d",mn);
	  mn=0;
	  textcolor(8);
	  cout<<endl;
	  cprintf("Whose fee is not Deposited:-%d",nn);
	  nn=0;
	  textcolor(5);
	  cout<<endl;
	  cprintf("Whose fee hava been Paid:-%d",kp);
	  kp=0;
	  cout<<endl;

	  gotoxy(54,3);
	  cout<<"  1                  "<<ett<<"   ";
	  ett=0;
	  gotoxy(54,4);
	  cout<<"|";
	  gotoxy(54,5);
	  cout<<"  2                  "<<str<<"   ";
	  str=0;
	   gotoxy(54,6);
	  cout<<"|";
	  gotoxy(54,7);
	  cout<<"  3                  "<<bb<<"   ";
	  bb=0;
	   gotoxy(54,8);
	  cout<<"|";
	  gotoxy(54,9);
	  cout<<"  4                  "<<df<<"   ";
	  df=0;
	   gotoxy(54,10);
	  cout<<"|";
	  gotoxy(54,11);
	  cout<<"  5                  "<<mx<<"   ";
	  mx=0;
	   gotoxy(54,12);
	  cout<<"|";
	  gotoxy(54,13);
	  cout<<"  6                  "<<mh<<"   ";
	  mh=0;
	   gotoxy(54,14);
	  cout<<"|";
	  gotoxy(54,15);
	  cout<<"  7                  "<<rat<<"   ";
	  rat=0;
	   gotoxy(54,16);
	  cout<<"|";
	  gotoxy(54,17);
	  cout<<"  8                  "<<mk<<"   ";
	  mk=0;
	  gotoxy(54,18);
	  cout<<"|";
	  gotoxy(54,19);
	  cout<<"  9                  "<<io<<"   ";
	  io=0;
	   gotoxy(54,20);
	  cout<<"|";
	  gotoxy(54,21);
	  cout<<"  10                  "<<o<<"  ";
	  o=0;
	   gotoxy(54,22);
	  cout<<"|";
	  gotoxy(54,23);
	  cout<<"  11                  "<<s<<"  ";
	  s=0;
	   gotoxy(54,24);
	  cout<<"|";
	  gotoxy(54,25);
	  cout<<"  12                  "<<rr<<"  ";
	  rr=0;
	  textcolor(BLACK);
	  fin.close();
   }


void com()
{
  clrscr();
     int ml=0;
       ifstream fin;
       fin.open("filey.txt",ios::in|ios::binary);
      if(!fin)
	 {
	//  t=0;
	 }
	 else
	 {
	    fin.read((char*)this,sizeof(*this));
	    t=t+1;
	    while(!fin.eof())
	    {
	     t=t-1;
	     ml++;
	     ett++;
	     fin.read((char*)this,sizeof(*this));
	     t++;
	     }
	  }
	 mq=ml;
	  fin.close();
   }
void searchdata()
{
 dl:
   textbackground(9);
   clrscr();
   long int g=0,no=0;
   gotoxy(61,2);
   textcolor(WHITE);
   cprintf("Student Data Search");
   gotoxy(1,2);
   textcolor(YELLOW);
   data();
       ifstream fin;
       fin.open("filey.txt",ios::in|ios::binary);
       if(!fin)
       {
	cout<<"File not found";
       }
       else
       {
	cout<<"\nEnter your numbar:-";
	fflush(stdin);
	no=0;
	cin>>no;
	kp=no;
	if(no<0)
	{
	 cout<<"Plesec do not enter this"<<"("<<no<<")";
	 getch();

	  goto dl;
	}
	while(!fin.eof())
	{
	 if(t==no)
	 {
	   g=1;
	   showdata();
	   mk=pf;
	   mh=t;
	   rat=tf;
	   cout<<"\nData Suceessfull Read\n";
	   no=0;
	   break;
	 }
	 fin.read((char*)this,sizeof(*this));
	 }
	if(g==0)
	 {
	   cout<<"No mach this data:-"<<no;
	   no=0;
	   sound();
	   }
	   t++;
	   fin.close();
	 }
   }
void upsetdata()
{
    gotoxy(41,3);
    cprintf("Student updata Data");
    int dog=0;
    gotoxy(1,13);
    cout<<"student Sno numbar:-"<<t;
    cout<<"\nStudent Name:-";
    fflush(stdin);
    gets(name);
    cout<<"\nEnter student class:-";
    cin.ignore();
    cin>>cla;
    cout<<"\nStudent Father Name:-";
    gets(Father);
    cout<<"\nStudent Village Name:-";
    gets(village);
    cout<<"\nStudent Phone Numbar:-";
    gets(phone);
    fflush(stdin);
    hl:
    fflush(stdin);
    cout<<"\nStudent acc p:-";
    cin>>pf;
    if(pf<0)
    {
     cout<<"This is not Possblic:-"<<"("<<pf<<")";
     goto hl;
    }
    tf=8000-pf;
}
void uupdata()
{
    int dog=0;
    cout<<"student Sno numbar:-"<<t;
    fflush(stdin);
    hl:
    fflush(stdin);
    cout<<"\nStudent acc p:-";
    cin>>dog;
    if(dog<0)
    {
     cout<<"This is not Possblic:-"<<"("<<pf<<")";
     goto hl;
    }
    if(8000<pf)
    {
     cout<<"your fee has been deposited Please Zero"<<"("<<pf<<")";
     goto hl;
    }
   if(tf==tf)
   {
    cprintf("Data Succeesfull Updata");
    pf=mk+dog;
    tf=8000-pf;
   }
   else
   {
    cout<<"fees ary";
    getch();
     goto hl;
   }
}
void fun()
{
  int dogg;
  cout<<"Fess:-";
  cin>>dogg;
  pf=mk-dogg;
  tf=tf+dogg;
}
void delet()
{
    int no,flog=0;
    ifstream fin;
    ofstream fout;
    fin.open("filey.txt",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(t==kp)
	{
	  flog =1;
	  t=t-1;
	  mq=mq-1;
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
      sound();
      }
      t++;
      fin.close();
      fout.close();
      remove("filey.txt");
      rename("temfile1.txt","filey.txt");
    if(flog==0)
    {
      cout<<"search Record found" ;
      sound();
    }
    }
}
void updata()
{
    int no,jj=0;
    fstream file;
    file.open("filey.txt",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(t==kp)
     {
	 upsetdata();
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
    t++;
    file.close();
}
void fupdata()
{
   char to;
   int no,jj=0;
    cout<<"Fees to deposited 'd/D' or fees to be deducted 'm/M':-";
    fflush(stdin);
    cin>>to;
    fstream file;
    file.open("filey.txt",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(t==kp)
     {
	 if(to=='d'||to=='D')
	 {
	 uupdata();
	 }
	 else if(to=='M'||to=='m')
	 {
	   fun();
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
    t++;
    file.close();
}
void alldel()
{
  ofstream fout;
  fout.open("filey.txt",ios::out|ios::binary);
  t=0;
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
  mq=0;
  fout.close();
}
void re()
{
  sl:
  clrscr();
  cout<<"enter student roll no:-";
  cin>>sno;
  if(sno<0)
  {
  cout<<"Sorry This Roll Numbar is not Possible "<<"("<<sno<<")"<<endl;
  getch();
  goto sl;
  }
  cout<<"Subject"<<endl;
  for(i=0;i<=5;i++)
  {
  gets(a[i]);
  }
}
void maren()
{
  cprintf("-------------------------------------------------------------------");
  cout<<"\nSubject              Marsk                    Enter Roll No:-"<<sno;
  cout<<endl;
  cprintf("-------------------------------------------------------------------");
  cout<<endl;
  //for(i=0;i<=5;i++)
  gotoxy(1,4);
  cout<<a[0]<<"\t\t\t";
  gotoxy(1,6);
  cout<<a[1]<<"\t\t\t";
  gotoxy(1,8);
  cout<<a[2]<<"\t\t\t";
  gotoxy(1,10);
  cout<<a[3]<<"\t\t\t";
  gotoxy(1,12);
  cout<<a[4]<<"\t\t\t";
  gotoxy(1,14);
  cout<<a[5]<<"\t\t\t";
  fflush(stdin);
  gotoxy(22,4);
  cin>>ab[0];
  gotoxy(22,6);
  cin>>ab[1];
  gotoxy(22,8);
  cin>>ab[2];
  gotoxy(22,10);
  cin>>ab[3];
  gotoxy(22,12);
  cin>>ab[4];
  gotoxy(22,14);
  cin>>ab[5];
  to=ab[0]+ab[1]+ab[2]+ab[3]+ab[4]+ab[5];
  gotoxy(30,9);
  cout<<"Total Numbar:-"<<to;
   float p=to/5;
  gotoxy(30,10);
  cprintf("%f",p);
  if(p>=90)
  {
    gotoxy(30,11);
    cout<<"Grade:-A";
    gotoxy(30,12);
    cout<<"Excellent";
  }
  else if(p>=70)
  {
    gotoxy(30,11);
    cout<<"Grade:-B";
    gotoxy(30,12);
    cout<<"To Good";
  }
  else if(p>=60)
  {
    gotoxy(30,11);
    cout<<"Grade:-C";
    gotoxy(30,12);
    cout<<"Only Good";
  }
  else
  {
     gotoxy(30,11);
    cout<<"Grade:-F";
    gotoxy(30,12);
    cout<<"Fail Do hand word";
  }
}
void reshow()
{
  for(i=7;i<=23;i++)
  {
   gotoxy(40,i);
   cout<<" ";
  }
  gotoxy(1,11);
  cout<<"Subject\t\t\t\t  Marsk";
  cout<<endl;
  fflush(stdin);
  gotoxy(1,13);
  cout<<a[0]<<"\t\t\t\t  "<<ab[0]<<"   ";
  gotoxy(1,15);
  cout<<a[1]<<"\t\t\t\t  "<<ab[1]<<"   ";
  gotoxy(1,17);
  cout<<a[2]<<"\t\t\t\t  "<<ab[2]<<"   ";
  gotoxy(1,19);
  cout<<a[3]<<"\t\t\t\t  "<<ab[3]<<"   ";
  gotoxy(1,21);
  cout<<a[4]<<"\t\t\t\t  "<<ab[4]<<"   ";
  gotoxy(1,23);
  cout<<a[5]<<"\t\t\t\t  "<<ab[5]<<"   ";
  gotoxy(45,15);
  cprintf("Total Numbar:-%d",to);cout<<endl;
   float p=to/5;
  gotoxy(45,17);
  cprintf("Percent:-%f",p);
  if(p>=90)
  {
    gotoxy(45,19);
    cprintf("Grade:-A");cout<<endl;
    gotoxy(45,21);
    cprintf("Excellent");cout<<endl;
  }
  else if(p>=70)
  {
    gotoxy(45,19);
    cprintf("Grade:-B");cout<<endl;
    gotoxy(45,21);
    cprintf("To Good");cout<<endl;
  }
  else if(p>=60)
  {
    gotoxy(45,19);
    cprintf("Grade:-C");cout<<endl;
    gotoxy(45,21);
    cprintf("Only Good");cout<<endl;
  }
  else
  {
     gotoxy(45,19);
    cprintf("Grade:-F");cout<<endl;
    gotoxy(45,21);
    cprintf("Fail Do hand word");cout<<endl;
  }
}
void refile1()
{
   ofstream fout;
   fout.open("ZAEy.GAT",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   gotoxy(1,20);
   cout<<"\nRecord File successful insate\n\n";
   getch();
}
void refile()
{

 ofstream fout;
   fout.open("ZAEry.GAT",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   //reshow();
   cout<<"\nRecord File successful insate\n\n";
   getch();
}
void rese()
{
       char rp;
       int no,g=0;
       ifstream fin;
       fin.open("ZAEy.GAT",ios::in|ios::binary);
       if(!fin)
       {
	cout<<"File not found";
       }
       else
       {
	textcolor(YELLOW);
	co:
	fflush(stdin);
	kp=mh;
	if(mk>=1&&mk<=999)
       {
       textcolor(RED);
	  cprintf("your fee is not deposited so your result cannot be opened");
	  cout<<endl;
	  cprintf("At least Rs 1000 should be deposited");
	  getch();
	  remanu();
	}
	else if(mk>=1000&&mk<=8000)
	{
	while(!fin.eof())
	{
	 if(sno==kp)
	 {
	   g=1;
	   reshow();
	   break;
	 }
	 fin.read((char*)this,sizeof(*this));
	 }
       if(g==0)
	 {
	   cout<<"No mach this data:-ssssss"<<kp;
	 //  sound();
	   }
	   fin.close();
	 }
       }
}
void readnumbar()
{
  ifstream fin;
  fin.open("ZAEry.GAT",ios::in|ios::binary);
  if(!fin)
   {
     cout<<"file A not found";
   }
   else
   {
    fin.read((char*)this,sizeof(*this));
    while(!fin.eof())
    {
    tor++;
    fin.read((char*)this,sizeof(*this));
    }
   }
   ett=tor;
   fin.close();
}
void redelet()
{
  int no,flog=0;
    ifstream fin;
    ofstream fout;
    fin.open("ZAEry.GAT",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {

	if(sno==kp)
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
      cout<<"data suceesfull delet";
      }
      fin.close();
      fout.close();
      remove("ZAEry.GAT");
      rename("temfile1.txt","ZAEry.GAT");

    if(flog==0)
    {
      cout<<"search Record found" ;
    }
    }
}
void reupdata()
{
   rese();
   int no;
    cout<<"\nHow to updata record:-";
    cin>>no;
    fstream file;
    file.open("ZAEry.GAT",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(sno==no)
     {
	 //upsetdata();
	 re();
	 file.seekg(file.tellp()-sizeof(*this));
	 file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
    }
}
void numupdata()
{
    int no;
    cout<<"\nHow to updata record:-";
    cin>>no;
    fstream file;
    file.open("ZAEy.GAT",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(sno==no)
     {
	clrscr();
	 maren();
	 file.seekg(file.tellp()-sizeof(*this));
	 file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
    }
}
void realldel()
{
  ofstream fout;
  fout.open("ZAEy.GAT",ios::out|ios::binary);
  fout.open("ZAEry.GAT",ios::out|ios::binary);
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
}
void rrealdee()
{
  ofstream fout;
  fout.open("ZAEry.GAT",ios::out|ios::binary);
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
}
void clg()
{
    cout<<"Enter College Name";
    gets(c);
    cout<<"Enter Principal Name";
    gets(cphone);
    cout<<"\nEnter Principal Phone Number:-";
    gets(ccp);
}
void cshow()
{
   cout<<c<<cphone;
}
void cfile()
{
   ofstream fout;
   fout.open("cfiley.txt",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
}
void cde()
{
   ofstream fin;
  fin.open("cfiley.txt",ios::out|ios::binary);
  fin.close();
}
void cread()
{
  //clrscr();
   ifstream fin;
   fin.open("cfiley.txt",ios::in|ios::binary);
   if(!fin)
   {
     cout<<"file not found";
   }
  else
   {
      fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	textcolor(8);
	gotoxy(36,9);
	cprintf("College Name");
	gotoxy(29,10);
	textcolor(30);
	cprintf("%s",c);
	gotoxy(35,12);
	textcolor(8);
	cprintf("Principal Name");
	gotoxy(33,13);
	textcolor(YELLOW);
	fflush(stdin);
	cprintf("%s",cphone);
	gotoxy(31,15);
	textcolor(8);
	cprintf("Principal Phone Number");
	textcolor(YELLOW);
	gotoxy(37,16);
	cprintf("%s",ccp);
	fin.read((char*)this,sizeof(*this));
      }
   }
   fin.close();
}
void rsetdata()
 {
   cout<<"\nEnter Room Numbar:-"<<room;
   cout<<"\nWho to class:-";
   gets(classro);
 }
void rshow()
{
   cout<<"\nRoom Numbar\t\tClass Name"<<endl;
   //cout<<"------------------------------------------";
   cout<<"\n    "<<room<<"\t\t\t"<<classro;
}
 void rwrite()
 {
   ofstream fout;
   fout.open("rqoomy.txt",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   cout<<"\nRecord File successful insate\n\n";
   getch();
 }
 void rread()
 {
    clrscr();
   ifstream fin;
   fin.open("rqoomy.txt",ios::in|ios::binary);
   if(!fin)
   {
     cout<<"file A not found";
   }
   else
   {
	gotoxy(30,3);
       textcolor(YELLOW);
       cprintf("Room Record");
       cout<<endl;
       textcolor(YELLOW);
       cout<<"\nRoom Numbar\t\tClass Name"<<endl;
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
	cout<<endl<<room<<"\t\t\t"<<classro;
	textcolor(YELLOW);
	delay(600);
	cout<<endl;
	fin.read((char*)this,sizeof(*this));
	cout<<endl;
	}
      }
       fin.close();
   }
void rsearch()
 {
    clrscr();
    long int g=0;
     int no;
    gotoxy(30,3);
    textcolor(YELLOW);
    cprintf("Room Record");
   ifstream fin;
   fin.open("rqoomy.txt",ios::in|ios::binary);
   if(!fin)
   {
    cout<<"File not found";
   }
   else
   {
    cout<<"\nEnter your numbar:-";
    fflush(stdin);
    cin>>no;
    kp=no;
    while(!fin.eof())
    {
    if(room==no)
    {
     g=1;
     rshow();
     cout<<endl;
     cout<<"\n\nData Suceessfull Read\n";
     break;
     }
     fin.read((char*)this,sizeof(*this));
    }

   if(g==0)
     {
       cout<<"No mach this data:-"<<no;
     }
     fin.close();
   }
 }
void rcons()
{
     room=0;

      clrscr();
       ifstream fin;
       fin.open("rqoomy.txt",ios::in|ios::binary);
       if(!fin)
	 {
	   room=0;
	 }
	 else
	 {
	    fin.read((char*)this,sizeof(*this));
	    room=room+1;

	    while(!fin.eof())
	    {
	     room=room-1;
	     fin.read((char*)this,sizeof(*this));
	     room++;
	    }
	    rr=room;
	 }
	  fin.close();
    }
void rupdata()
{
     int no;
    fstream file;
    file.open("rqoomy.txt",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(room==kp)
     {
	clrscr();
	// maren();
	rsetdata();
	 file.seekg(file.tellp()-sizeof(*this));
	 file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
    }
}
void rdelete()
{
   int no,flog=0;
    ifstream fin;
    ofstream fout;
    fin.open("rqoomy.txt",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(room==kp)
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
      cout<<"data suceesfull delet";
      rr-1;
      s+1;
      }
      fin.close();
      fout.close();
      remove("rqoomy.txt");
      rename("temfile1.txt","rqoomy.txt");

    if(flog==0)
    {
      cout<<"search Record found" ;
    }
    }
}
void allrde()
{
  ofstream fout;
  fout.open("rqoomy.txt",ios::out|ios::binary);
  textcolor(RED);
    rr=0;
    s=0;
  cprintf("All Data Succseefull Delete");
}

class B
{
  private:
    int tsno;
    char tname[20];
    char tcourse[20];
    char tphone[20];
    int tc;
    char ct[20];
    char pp[20];
    char tadd[20];
    int fp;
  public:
     void tsetdata()
     {
       cout<<"\nEnter Teacher Sno Numbar:-"<<tsno;
       //cin>>tsno;
       fflush(stdin);
       cout<<"\nEnter Teacher Name:-";
       gets(tname);
       cout<<"\nEnter Teacher Course:-";
       gets(tcourse);
       cout<<"Enter Teacher Address:-";
       gets(tadd);
       fd:
       cout<<"\nEnter Teacher Phone Number:-";
       gets(tphone);
       df=strlen(tphone);
      if(df<=9||df>=11)
       {
       textcolor(RED);
       cprintf("%d How many Phone numbers can't be saved",df);
       getch();
       goto fd;
       }
       cout<<"Enter Teacher Maney:-         ";
       fflush(stdin);
       cin>>fp;
     }
     void tshow()
     {
       cout<<"Sno\t    Name\t\tCourse\t     Phone\t  Adderss\tManey   ";
       cout<<"\n"<<tsno<<"\t  "<<tname<<"\t\t"<<tcourse<<"\t    "<<tphone<<"\t  "<<tadd<<"\t"<<fp<<"    ";
     }
     void tread()
     {
	ofstream fout;
	fout.open("trey.txt",ios::app|ios::binary);
	fout.write((char*)this,sizeof(*this));
	fout.close();
	cout<<endl;
	tshow();
	cout<<endl;
	cout<<"-------------------------------------------------------------------------------";
	cout<<"\nRecord File successful insate\n\n";
	sound();
	getch();
     }
void twrite()
{
  clrscr();
   textcolor(RED);
      textcolor(5);
      ifstream fin;
      fin.open("trey.txt",ios::in|ios::binary);
      if(!fin)
      {
	cout<<"file A not found";
      }
      else
      {
       gotoxy(30,1);
       textcolor(3);
       cprintf("Tearcher Record");
       cout<<endl;
       cout<<"Sno\t    Name\t\tCourse\t     Phone\t  Adderss\tManey   ";
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
	cout<<"\n"<<tsno<<"\t  "<<tname<<"\t\t"<<tcourse<<"\t    "<<tphone<<"\t  "<<tadd<<"\t"<<fp<<"    ";
	delay(600);
	fin.read((char*)this,sizeof(*this));
	}
	//sound();
      }
       cout<<"Data Successfull Read";
       sound();
       fin.close();
    }
void tsearch()
{
    long int g=0, no;
    gotoxy(30,3);
    textcolor(3);
    cprintf("Tearcher Record");
   ifstream fin;
   fin.open("trey.txt",ios::in|ios::binary);
   if(!fin)
   {
    cout<<"File not found";
   }
   else
   {
    cout<<"Enter your numbar:-";
    fflush(stdin);
    cin>>no;
    kp=no;
    while(!fin.eof())
    {
    if(tsno==no)
    {
     g=1;
     tshow();
     cout<<endl;
     mk=fp;
     cout<<"\nData Suceessfull Read\n";
     sound();
     break;
     }
     fin.read((char*)this,sizeof(*this));
     }
     if(g==0)
     {
       cout<<"No mach this data:-"<<no;
       sound();
     }
       fin.close();
     }
    }
void tfeeupdata()
{
   int dogg=0;
     cout<<"How many money to Deposit?:-";
     fflush(stdin);
     cin>>dogg;
     fp=mk+dogg;
}
   void cons()
   {
      clrscr();
       ifstream fin;
       fin.open("trey.txt",ios::in|ios::binary);
       if(!fin)
	 {
	  tsno=1;
	 }
	 else
	 {
	    fin.read((char*)this,sizeof(*this));
	    tsno=tsno+1;
	    while(!fin.eof())
	    {
	     tsno=tsno-1;
	     fin.read((char*)this,sizeof(*this));
	     tsno++;
	    }
	  }
	  fin.close();
    }
void tupdata()
{
   char you;
    int no,mu=0;
    fstream file;
    file.open("trey.txt",ios::in|ios::out|ios::ate|ios::binary);
    cout<<"In you want to update all the data Yes 'Y/y Want to Deposit Monet? Yes 'M/n If you don't want to do anything:-";
    cin>>you;
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(tsno==kp)
     {
	clrscr();
	if(you=='a'||you=='A')
	{
	 tsetdata();
	}
	else if(you=='m'||you=='M')
	{
	 tfeeupdata();
	}
	 file.seekg(file.tellp()-sizeof(*this));
	 mu=1;
	 file.write((char*)this,sizeof(*this));
	 cout<<"Data Successfull Updata";
     }
     file.read((char*)this,sizeof(*this));

    }

    sound();
    if(mu==0)
    {
     cout<<"\nThis Record not al";
    }
}
void tdelete()
{
    int no,flog=0;
    ifstream fin;
    ofstream fout;
    fin.open("trey.txt",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(tsno==kp)
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
      cout<<"data suceesfull delet";
      sound();
      }
      fin.close();
      fout.close();
      remove("trey.txt");
      rename("temfile1.txt","trey.txt");
    if(flog==0)
    {
      cout<<"search Record found" ;
      sound();
    }
    }
}
void tallde()
{
  ofstream fout;
  fout.open("trey.txt",ios::out|ios::binary);
  textcolor(RED);
  tsno=0;
  cprintf("All Data Succseefull Delete");
}
void classt()
{
   cout<<"\nEnter your class:-";
   cin>>tc;
   cout<<"\nEnter your Teacher Name:-";
   gets(ct);
   cout<<"\nEnter Teacher Phone Numbar:-";
   gets(pp);
}
void classrea()
{
  textcolor(YELLOW);
  cout<<"\tclass\t\t"<<"Teacher Name\t\t"<<"Teacher Phone"<<endl;
  cout<<"------------------------------------------------------------------------"<<endl;
  cout<<"\t"<<tc<<"\t\t"<<ct<<"\t\t"<<pp;
}
void classtwrite()
{
  ofstream fout;
  fout.open("trqqqy.txt",ios::app|ios::binary);
  fout.write((char*)this,sizeof(*this));
  fout.close();
}
void classtread()
{
      i=6;
	clrscr();
       textcolor(RED);
      textcolor(5);
      ifstream fin;
      fin.open("trqqqy.txt",ios::in|ios::binary);
      if(!fin)
      {
	cout<<"file A not found";
      }
      else
      {
       gotoxy(30,2);
       textcolor(YELLOW);
      cprintf("Class Teacher Informtion");
       gotoxy(1,4);
       cout<<"class\t\tTeacher Name\t\tphone     "<<endl;
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
	//gotoxy(20,i);
	cout<<"\n"<<tc<<"\t\t"<<ct<<"\t\t"<<pp;
	delay(600);
	cout<<endl;
	fin.read((char*)this,sizeof(*this));
	//i++;
	}
      }
       fin.close();
}
void cnumbarre()
{
   i=6;
	clrscr();
       textcolor(RED);
      textcolor(5);
      ifstream fin;
      fin.open("trqqqy.txt",ios::in|ios::binary);
      if(!fin)
      {
	cout<<"file A not found";
      }
      else
      {
       gotoxy(30,2);
       textcolor(YELLOW);
       cprintf("Class Tracher Informtion");
       gotoxy(13,3);
       cprintf("-------------------------------------------------------------");
       gotoxy(13,5);
       cprintf("-------------------------------------------------------------");
       gotoxy(20,4);
       textcolor(3);
       cprintf("class");
       gotoxy(35,4);
       textcolor(3);
       cprintf("Teacher Name");
       gotoxy(55,4);
       textcolor(3);
       cprintf("Phone Numbar");
       textcolor(YELLOW);
       fin.read((char*)this,sizeof(*this));
       while(!fin.eof())
       {
       gotoxy(20,i);
	cout<<tc<<"              "<<ct<<"       "<<pp;
	delay(600);
	fin.read((char*)this,sizeof(*this));
	i++;
	}
      }
       fin.close();
}
void classdele()
{
    int no,flog=0;
   cout<<"\nHow to Delete Record:-";
   cin>>no;
    ifstream fin;
    ofstream fout;
    fin.open("trqqqy.txt",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(tc==no)
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
      cout<<"data suceesfull delet";
      sound();
      }
      fin.close();
      fout.close();
      remove("trqqqy.txt");
      rename("temfile1.txt","trqqqy.txt");

    if(flog==0)
    {
      cout<<"search Record found" ;
      sound();
    }
    }//elsebody
}
void classallde()
{
 ofstream fout;
  fout.open("trqqqy.txt",ios::out|ios::binary);
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
}
void classup()
{
   int no;
    cout<<"\nHow to updata record:-";
    cin>>no;
    fstream file;
    file.open("trqqqy.txt",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(tc==no)
     {
	 classt();
	 file.seekg(file.tellp()-sizeof(*this));
	 file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
    }
}
}b1;
 void classb()
    {
    while(1)
    {
      int uo;
      textbackground(9);
      clrscr();
      gotoxy(30,5);
      delay(200);
      cout<<"1.Teacher Record Add          ";
       gotoxy(30,7);
      delay(200);
      cout<<"2.Teacher Record View         ";
       gotoxy(30,9);
      delay(200);
      cout<<"3.Teacher Record Search       ";
       gotoxy(30,11);
      delay(200);
      cout<<"4.Teacher Record Updata       ";
       gotoxy(30,13);
      delay(200);
      cout<<"5.Teacher Record Delete       ";
       gotoxy(30,15);
      delay(200);
      cout<<"6.Class Teachar Information   ";
       gotoxy(30,17);
      delay(200);
      cout<<"7.Exit                        ";
       gotoxy(30,19);
      delay(200);
      cout<<"Enter your choice             ";
       gotoxy(30,21);
      delay(200);
      cout<<"                              ";
      gotoxy(35,21);
      delay(200);
      cin>>uo;
      switch(uo)
      {
	  case 1:
	     b1.cons();
	     b1.tsetdata();
	     b1.tread();
	     getch();
	     classb();
	     break;
	 case 2:
	     clrscr();
	     b1.twrite();
	     getch();
	     classb();
	     break;
	 case 3:
	    clrscr();
	     b1.tsearch();
	     getch();
	     classb();
	     break;
	 case 4:
	     char ch;
	     clrscr();
	     b1.tsearch();
	     cout<<"This one:-";
	     cin>>ch;
	     if(ch=='y'|ch=='Y')
	     {
	     b1.tupdata();
	     getch();
	    classb();
	    }
	    else
	    {
	     cout<<"ok";
	     classb();
	    }
	     break;
	  case 5:
	       ba:
	       int ro;
	       clrscr();
	       cout<<"\n1.One Tearcher Record Delete";
	       cout<<"\n2.All Tearchet record Delete";
	       cout<<"\n3.Exit                      ";
	       cout<<"\nEnter your chioce:-";
	       cin>>ro;
	       switch(ro)
	       {
		 case 1:
		   char ch;
		     clrscr();
		     b1.tsearch();
		     cout<<"this one:-";
		     cin>>ch;
		     if(ch=='y'|ch=='Y')
		     {
		     b1.tdelete();
		     getch();
		     goto ba;
		   }
		   else
		   {
		       cout<<"ok";
		       goto ba;
		   }
			  break;
		 case 2:
		   char c;
		     clrscr();
		     cout<<"All Data Delete yes/y||no/n:-";
		     cin>>c;
		     if(c=='y'||c=='Y')
		     {
		     b1.tallde();
		     getch();
		     goto ba;
		     }
		     else
		     {
		       cout<<"ok";
		       goto ba;
		     }
		     break;
		   case 3:
		      classb();
		   break;
		   default:
		{
		   //clrscr();
		   textcolor(RED);
		   cprintf("choice  word");
		   getch();
		   //classb();
		   goto ba;
		   break;
		}
		 }
	       case 6:
		  kl:
		    clrscr();
		    int so;
		    gotoxy(30,4);
		    delay(200);
		    cout<<"1.Enter Class Terchar Add   ";
		    gotoxy(30,6);
		    delay(200);
		    cout<<"2.Enter class Terachar Show ";
		    gotoxy(30,8);
		    delay(200);
		    cout<<"3.Class teracher Delete     ";
		    gotoxy(30,10);
		    delay(200);
		    cout<<"4.All Record Delete         ";
		    gotoxy(30,12);
		    delay(200);
		    cout<<"5.Record Updata             ";
		    gotoxy(30,14);
		    delay(200);
		    cout<<"6.Exit                      ";
		    gotoxy(30,16);
		    delay(200);
		    cout<<"Enter your choice           ";
		    gotoxy(30,18);
		    delay(200);
		    cout<<"                            ";
		    gotoxy(40,18);
		    cin>>so;
		    switch(so)
		    {
		    case 1:
			b1.classt();
			b1.classtwrite();
			b1.classrea();
			getch();
		       goto kl;
		       break;
		    case 2:
			clrscr();
			 b1.classtread();
			 getch();
			goto kl;
			break;
		    case 3:
			 clrscr();
			 b1.classdele();
			 getch();
			 goto kl;
			 break;
		    case 4:
			  clrscr();
			  b1.classallde();
			  getch();
			  goto kl;
			  break;
		    case 5:
			  clrscr();
			   b1.classup();
			   getch();
			   goto kl;
			   break;
		     case 6:
			 clrscr();
			  classb();
			  getch();
			  break;
		     default:
			{
			 clrscr();
			 cout<<"choice  word";
			 classb();
			 break;
		       }
		     }
		    case 7:
		     //clrscr();
		     main1();
		     exit(0);
		     break;
		default:
		{
		   clrscr();
		   cout<<"choice  word";
		   classb();
		   break;
		}
	      }
	   }
       }
};
class DE:public A
{
   private:
     int NUM;
     char CT[20];
     char CLASST[20];
     char well[20];
     char subj[20];
     char PAS[5000];
     int NUM1;
     int CL;
     char ponit[100];
     char nnnn[200];
     int z,q,w;
   public:
    void SETDATA()
    {
      cout<<"\nEnter Teacher Sno numbar:-";
      cin>>NUM;
      fflush(stdin);
      cout<<"\nEnter class:-";
      gets(CT);
      cout<<"\nEnter class teacher:-";
      gets(CLASST);
      cout<<"\nEnter Well:-";
      gets(well);
      cout<<"\nHow to sub:-";
      gets(subj);
    }
    void SHOW()
    {
     gotoxy(3,3);
     cout<<"Sno\t\tclass\t\tWell\t\tSubject\t\t  Teacher\n";
     gotoxy(1,4);
     cprintf("--------------------------------------------------------------------------------");
     cout<<endl;
     cout<<""<<NUM<<"\t\t"<<CT<<"\t\t "<<well<<"\t\t"<<subj<<"\t\t"<<CLASST;
     cout<<endl<<endl;
    }

   void WRITE()
    {
      ofstream fout;
      fout.open("FILE3Y.TXT",ios::app|ios::binary);
      fout.write((char*)this,sizeof(*this));
      fout.close();
      cout<<"Informatin succfull write";
   }
   void READ()
   {
     ifstream fin;
     fin.open("FILE3Y.TXT",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file is not found";
     }
   else
   {

     gotoxy(3,3);
     cout<<"Sno\t\tclass\t\tWell\t\tSubject\t\t  Teacher\n";
     gotoxy(1,4);
     cprintf("--------------------------------------------------------------------------------");
     cout<<endl;
     fin.read((char*)this,sizeof(*this));
     while(!fin.eof())
     {
      cout<<"  "<<NUM<<"\t\t"<<CT<<"\t\t "<<well<<"\t\t"<<subj<<"\t\t"<<CLASST;
      cout<<endl<<endl;
     fin.read((char*)this,sizeof(*this));
     }
   }
  fin.close();
}
void SEARCH()
{
     int bo;
     int fg=0;
     ifstream fin;
     fin.open("FILE3Y.TXT",ios::in|ios::binary);
     if(!fin)
     {
      cout<<"file is not found";
     }
     else
     {
      cout<<"Enter your Search numbar:-";
      cin>>bo;
      //kp=bo;
      cout<<endl;

      while(!fin.eof())
      {
	if(NUM==bo)
	{
	 fg=1;
	 SHOW();
	 break;
	}
      }
     fin.read((char*)this,sizeof(this));
      }
if(fg==0)
    {
     cout<<"File not data";
    }
}
void sku()
{
   cout<<"The serial number of the one to whom the complaint is to be made:-";
   cin>>NUM1;
   cout<<"Enter student name:-";
   gets(nnnn);
   cout<<"Write in the complaint\n";
   textcolor(YELLOW);
   cprintf("--------------------------------------------------------------------------------");
   textcolor(YELLOW);
   gets(PAS);
   sdata();
}
void sdata()
   {
	struct date today;
     int dat,m,y;
     getdate(&today);
     textcolor(9);
     textbackground(8);
     cprintf("%d/%d/%d",z=today.da_day,q=today.da_mon,w=today.da_year);
   }
void swrite()
{
   ofstream fout;
   fout.open("fileY.sku",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   cout<<"\nRecord File successful insate\n\n";
   getch();
}
void sshow()
{
 cout<<NUM1<<"\t     |Student name:-"<<nnnn<<"\t\tDate:-"<<z<<"/"<<q<<"/"<<w<<endl;
 textcolor(YELLOW);
 cprintf("--------------------------------------------------------------------------------");
 cout<<"\n"<<PAS;
}
void ssearch()
{
    int no,os=0,km;
    ifstream fin;
    fin.open("fileY.sku",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file found";
    }
    else
    {
      cout<<"Enter sno:-";
      cin>>no;
      kp=no;
      textcolor(YELLOW);
      cprintf("--------------------------------------------------------------------------------");
      if(no<0)
      {
       cout<<"this is not possible";
      }
    while(!fin.eof())
    {
     if(NUM1==no)
     {
       os=1;
	sshow();
	break;
     }
     fin.read((char*)this,sizeof(*this));
     delay(200);
     }
   if(os==0)
   {
    cout<<"Record Not found";
   }
   }
}
void sdelet()
{
    int no,flog=0;
    char o;
    ifstream fin;
    ofstream fout;
    fin.open("fileY.sku",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(NUM1==kp)
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
      cout<<"data suceesfull delet";
      sound();
      }
      fin.close();
      fout.close();
      remove("fileY.sku");
      rename("temfile1.txt","fileY.sku");

    if(flog==0)
    {
      cout<<"search Record found" ;
      sound();
    }
    }
   }
void sall()
{
  ofstream fout;
  fout.open("fileY.sku",ios::out|ios::binary);
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
}
void pointenter()
{
   cout<<"Enter ponit Numbar:-"<<CL;
   cout<<"\nEnter ponit:-";
   gets(ponit);
}
void ponitwrite()
{
   ofstream fout;
   fout.open("fileY.pont",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   cout<<"\nRecord File successful insate\n\n";
   getch();
}
void pointnum()
{
 clrscr();
       int ml=0;
       ifstream fin;
       fin.open("fileY.pont",ios::in|ios::binary);
       if(!fin)
	 {
	  CL=1;
	 }
	 else
	 {
	    fin.read((char*)this,sizeof(*this));
	    CL=CL+1;
	    while(!fin.eof())
	    {
	     CL=CL-1;
	     fin.read((char*)this,sizeof(*this));
	     CL++;
	    }

	 }
	  fin.close();
}
void ponitshow()
{
  clrscr();
    int to=0;
   textcolor(RED);
   gotoxy(30,1);
    cprintf("College Rules");
      textcolor(5);
      gotoxy(1,2);
      cprintf("-------------------------------------------------------------------------------");
	 ifstream fin;
	 fin.open("fileY.pont",ios::in|ios::binary);
	if(!fin)
	 {
	  cout<<"file A not found";
	 }
	 else
	  {
	    fin.read((char*)this,sizeof(*this));
	    while(!fin.eof())
	    {
	     cout<<endl;
	     cout<<CL<<"."<<ponit<<endl;
	     to=1;
	     delay(600);
	     fin.read((char*)this,sizeof(*this));
	    }
      }
      if(to==0)
      {
	gotoxy(30,10);
	cout<<"No Record";
      }
	 sound();
	fin.close();
}
void pointupdata()
{
  int no,jj=0;
    hll:
    cout<<"\nHow to updata record:-";
    cin>>no;
    if(no<0)
    {
     cout<<"This Record not updata"<<no;
     goto hll;
    }
    fstream file;
    file.open("fileY.pont",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(CL==no)
     {
	 pointenter();
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
    file.close();
}
void ponitall()
{
  ofstream fout;
  fout.open("fileY.pont",ios::out|ios::binary);
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
  CL=0;
}
void ruleenter()
{
   cout<<"Rules Numbar:-"<<CL;
  // cin>>CL;
   cout<<"\nEnter Rules:-";
   gets(ponit);
}
void rulewrite()
{
   ofstream fout;
   fout.open("fileY.rule",ios::app|ios::binary);
   fout.write((char*)this,sizeof(*this));
   fout.close();
   cout<<"\nRecord File successful insate\n\n";
   getch();
}
void rulenum()
{
 clrscr();
       int ml=0;
       ifstream fin;
       fin.open("fileY.rule",ios::in|ios::binary);
       if(!fin)
	 {
	  CL=1;
	 }
	 else
	 {
	    fin.read((char*)this,sizeof(*this));
	    CL=CL+1;
	    while(!fin.eof())
	    {
	     CL=CL-1;
	     //ml++;
	     fin.read((char*)this,sizeof(*this));
	     CL++;
	    }

	 }
	  fin.close();
}
void ruleshow()
{
  clrscr();
    int to=0;
   textcolor(YELLOW);
   gotoxy(30,1);
    cprintf("College Amenities");
      textcolor(5);
      gotoxy(1,2);
      cprintf("-------------------------------------------------------------------------------");
	 ifstream fin;
	 fin.open("fileY.rule",ios::in|ios::binary);
	if(!fin)
	 {
	  cout<<"file A not found";
	 }
	 else
	  {
	    fin.read((char*)this,sizeof(*this));
	    while(!fin.eof())
	    {
	     cout<<endl;
	     cout<<CL<<"."<<ponit<<endl;
	     to=1;
	     delay(600);
	     fin.read((char*)this,sizeof(*this));
	    }
	}
      if(to==0)
      {
	gotoxy(30,10);
	cout<<"No Record";
      }
	 sound();
	fin.close();
}
void ruleupdata()
{
  int no,jj=0;
    hll:
    cout<<"\nHow to updata record:-";
    cin>>no;
    if(no<0)
    {
     cout<<"This Record not updata"<<no;
     goto hll;
    }
    fstream file;
    file.open("fileY.rule",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(CL==no)
     {
	 pointenter();
	 file.seekg(file.tellp()-sizeof(*this));
	 jj=1;
	 file.write((char*)this,sizeof(*this));
     }
     file.read((char*)this,sizeof(*this));
     cout<<"Rules Succesful updata";
    }
    if(jj==0)
    {
     cout<<"This Data Not al";
     getch();
    }
    file.close();
}
void ruleall()
{
  ofstream fout;
  fout.open("fileY.rule",ios::out|ios::binary);
  textcolor(RED);
  CL=0;
  cprintf("All Data Succseefull Delete");
}
}a1,a2;
void troom()
{
   gotoxy(45,1);
   cprintf("Basic Room Information");
   gotoxy(31,2);
   textcolor(YELLOW);
   cprintf("--------------------------------------------------");
   int s=0;
   gotoxy(35,3);
   cout<<"P Room\t     Empty Room\t     Total Room";
    s=tr[0]-rr;
   gotoxy(36,5);
   cout<<" "<<rr-1<<"\t\t\t"<<s+1<<"\t\t "<<tr[0];
   for(i=1;i<=25;i++)
   {
    gotoxy(30,i);
    cprintf("|");
   }
  gotoxy(31,6);
  cprintf("--------------------------------------------------");
}

void sound()
{
 sound(100);
 delay(500);
 nosound();
}
//Student info
void manu()
{
  while(1)
  {
  int m;
  textbackground(9);
  clrscr();
  gotoxy(30,3);
  cout<<"1.Baics Info           ";
  delay(200);
  gotoxy(30,5);
  cout<<"2.view infor           ";
  gotoxy(30,7);
  delay(200);
  cout<<"3.Record search        ";
  gotoxy(30,9);
  delay(200);
  cout<<"4.Record Delete        ";
  gotoxy(30,11);
  delay(200);
  cout<<"5.Record Updata        ";
  gotoxy(30,13);
  delay(200);
  cout<<"6.Student Fee          ";
  gotoxy(30,15);
  delay(200);
  cout<<"7.Inportant Informatin ";
  gotoxy(30,17);
  delay(200);
  cout<<"8.Exit                 ";
  gotoxy(30,19);
  delay(200);
  cout<<"Enter the choice       ";
  gotoxy(30,21);
  delay(200);
  cout<<"                       ";
  gotoxy(37,21);
  cin>>m;
  textbackground(8);
  switch(m)
  {
    case 1:
       clrscr();
       a1.com();
       a1.setdata();
       a1.filedata();
       getch();
       break;
    case 2:
	clrscr();
	 a1.fileshow();
	 getch();
	 manu();
	 break;
    case 3:
      clrscr();
	a1.searchdata();
	getch();
	manu();
	break;
    case 4:
    tu:
     while(1)
     {
       textbackground(9);
       clrscr();
       int yo;
       gotoxy(30,5);
       delay(200);
       cout<<"1.Delete          ";
       gotoxy(30,7);
       delay(200);
       cout<<"2.All data Delete ";
       gotoxy(30,9);
       delay(200);
       cout<<"3.Exit            ";
       gotoxy(30,11);
       delay(200);
       cout<<"Enter your choice ";
       gotoxy(30,13);
       delay(200);
       cout<<"                  ";
       gotoxy(38,13);
       cin>>yo;
       switch(yo)
       {
	case 1:
	 char ch;
	  clrscr();
	   a1.searchdata();
	   cout<<"This data is yo be Deleted y/ No n:-";
	   cin>>ch;
	   if(ch=='Y'||ch=='y')
	   {
	    a1.delet();
	    getch();
	    manu();
	   }
	   else
	   {
	      manu();
	   }
	    break;
	case 2:
	  char c;
	  clrscr();
	  cout<<"All data delete yes y /No n:-";
	  cin>>c;
	  if(c=='y'||c=='Y')
	  {
	   a1.alldel();
	   getch();
	   manu();
	 }
	 else
	 {
	  manu();
	 }
	  break;
	case 3:
	    clrscr();
	    manu();
	    break;
	default:
	 {
	  clrscr();
	  cout<<"choice  word";
	   goto tu;
	  break;
	 }
       }
     }
    case 5:
       clrscr();
       char a;
	 a1.searchdata();
	 bk:
	 cout<<"This one:-";
	 cin>>a;
	 if(a=='Y'||a=='y')
	 {
	  a1.updata();
	  getch();
	 manu();
	}
	else if(a=='n'||a=='N')
	{
	 cout<<"ok";
	 getch();
	 clrscr();
	 manu();
	}
	else
	{
	   cprintf("It cannot enter.only Y/y and N/n can enter:\r\n");
	   getch();
	   goto bk;
	}
	 break ;
    case 6:
       char r;
	clrscr();
	a1.searchdata();
	dk:
	cprintf("This one yes y/No n:-");
	cin>>r;
	if(r=='y'||r=='Y')
	{
	a1.fupdata();
	getch();
	}
	else if(r=='n'||r=='N')
	{
	 manu();
	}
	else
	{
	   cprintf("It cannot enter.only Y/y and N/n can enter:\r\n");
	   getch();
	   goto dk;
	}
	break;
    case 7:
	     clrscr();
	    a1.total();
	    getch();
	    manu();
	    break;
   case 8:
	clrscr();
       main1();
	exit(0);
	break;
  default:
     {
	clrscr();
	cout<<"choice  word";
	 manu();
	break;
     }
     }
  }
}
//Result
void remanu()
{
  while(1)
  {
    textbackground(9);
    clrscr();
    vmn:
    gotoxy(30,5);
    delay(200);
    cout<<"1.New result      ";
    gotoxy(30,7);
    delay(200);
    cout<<"2.Result search   ";
    gotoxy(30,9);
    delay(200);
    cout<<"3.Delete          ";
    gotoxy(30,11);
    delay(200);
    cout<<"4.Updata          ";
    gotoxy(30,13);
    delay(200);
    cout<<"5.Exit            ";
    int po;
    gotoxy(30,15);
    delay(200);
    cout<<"Enter your choice ";
    gotoxy(30,17);
    delay(200);
    cout<<"                  ";
    gotoxy(38,17);
    cin>>po;
    switch(po)
    {
      case 1:
       a1.re();
       a1.refile();
       getch();
       clrscr();
       a1.maren();
       a1.refile1();
       getch();
      break;
    case 2:
	char rop;
	 clrscr();
	 a1.searchdata();
	 gotoxy(1,9);
	 cout<<"This one yes y/Y no n/n:-";
	 cin>>rop;
	 if(rop=='y'||rop=='Y')
	 {
	 a1.rese();
	 getch();
	 }
	 else
	 {
	   clrscr();
	   goto vmn;
	 }
	 break;
    case 3:
	gh:
	  while(1)
	  {
	  clrscr();
	  int yo;
	  gotoxy(30,5);
	  delay(200);
	  cout<<"1.Record Delete     ";
	  gotoxy(30,7);
	  delay(200);
	  cout<<"2.All Record Delete ";
	  gotoxy(30,9);
	  delay(200);
	  cout<<"3.Exit              ";
	  gotoxy(30,11);
	  delay(200);
	  cout<<"Enter your Choice   ";
	  gotoxy(30,13);
	  delay(200);
	  cout<<"                    ";
	  gotoxy(35,13);
	  cin>>yo;
	  switch(yo)
	  {
	   case 1:
	   char z;
	      clrscr();
		a1.searchdata();
	      a1. rese();
	     // getch();
	      gotoxy(45,8);
	      textcolor(RED);
	       cprintf("This one y/n:-");cout<<endl;
	       gotoxy(45,9);
	       cout<<"                  ";
	       gotoxy(50,11);
	       cin>>z;
	       if(z=='y'||z=='Y')
	       {
	      a1.redelet();
	      getch();
	      remanu();
	     }
	     else
	     {
	      remanu();
	      }
	      break;
	   case 2:
	     clrscr();
	     char c;

	     cout<<"All data delete y/n:-";
	     cin>>c;
	     if(c=='y'|c=='Y')
	     {
	     a1.realldel();
	     a1.rrealdee();
	     getch();
	     remanu() ;
	     }
	     else
	     {
	      remanu();
	     }
	     break;
	   case 3:
	     clrscr();
	     remanu();
	     break;
	   default:
	    {
	     clrscr();
	     cout<<"choice  word";
	     getch();
	     goto gh;
	     break;
	    }
	 }
       }
    case 4:
      while(1)
      {
	gk:
	  clrscr();
	  int yo;
	  cout<<"\n1.Subject Updata";
	  cout<<"\n2.Numbar Updata ";
	  cout<<"\n3.Exit          ";
	  cout<<"\nEnter your choice:-";
	  cin>>yo;
	  switch(yo)
	  {
	  case 1:
	    clrscr();
	    a1.reupdata();
	    remanu();
	    getch();
	    break;
	  case 2:
	     clrscr();
	      a1.numupdata();
	      remanu();
	      getch();
	      break;
	  case 3:
		clrscr();
		 remanu();
		 break;

	      default:
	    {
	     clrscr();
	     cout<<"choice  word";
	     getch();
	     goto gk;
	     break;
	    }
	  }
	  }
	  case 5:
	   main1();
	  exit(0);
	  break;
    }
  }
}
void croom()
 {
 ng:
   int no;
   textbackground(9);
   clrscr();
   a1.rcons();
   troom();
   gotoxy(2,2);
   delay(200);
   cout<<"1.Room Information Add    ";
    gotoxy(2,4);
   delay(200);
   cout<<"2.Room Information View   ";
    gotoxy(2,6);
   delay(200);
   cout<<"3.Room Information Search ";
    gotoxy(2,8);
   delay(200);
   cout<<"4.Room Information Updata ";
    gotoxy(2,10);
   delay(200);
   cout<<"5.Room Information Delete ";
    gotoxy(2,12);
   delay(200);
   cout<<"6.Exit                   ";
    gotoxy(2,14);
   delay(200);
   cout<<"Enter your choice         ";
   gotoxy(2,16);
   delay(200);
   cout<<"                          ";
    gotoxy(30,16);
   cin>>no;
   switch(no)
   {
    case 1:
       a1.rcons();
       a1.rsetdata();
       a1.rwrite();
       getch();
       croom();
       break;
    case 2:
	a1.rread();
	getch();
	croom();
	break;
    case 3:
	a1.rsearch();
	getch();
	croom();
	break;
    case 4:
      char ch;
	clrscr();
	a1.rsearch();
	cout<<"this one:-yes y/No n";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
	a1.rupdata();
	getch();
	croom();
	}
	else
	{
	 croom();
	}
       break;
    case 5:
      ak:
	int yo;
	clrscr();
	cout<<"\n1.One data Delete";
	cout<<"\n2.All Data Delete";
	cout<<"\n3.Exit           ";
	cout<<"\nEnter your choice:-";
	cin>>yo;
	switch(yo)
	{
	 case 1:
	   char c;
	   clrscr();
	   a1.rsearch();
	   cout<<"\nThis one:-y/n";
	   cin>>c;
	   if(c=='y'||c=='Y')
	   {
	   a1.rdelete();
	   croom();
	   goto ak;
	   }
	   else
	   {
	    cout<<"ok";
	    goto ak;
	   }

	   break;
	 case 2:
	     char ch;
	     clrscr();
	     cout<<"All data delete yes y/ No n:-";
	     cin>>ch;
	     if(ch=='y'||ch=='Y')
	     {
	     a1.allrde();
	     croom();
	     }
	     else
	     {
	      croom();
	     }
	     break;
	 case 3:
	    clrscr();
	      croom();
	     getch();
	 default:
	 {
	  clrscr();
	  cout<<"choice  word";
	   goto ak;
	  break;
	 }
	    }
	case 6:
	     main1();
	   break;
	   default:
	  {
	  clrscr();
	  cout<<"choice  word";
	   goto ng;
	  break;
	 }
      }
 }

void main1()
{
 HK:
  char x;
   while(1)
{
  clrscr();
  char jo;
   clrscr();
  system("cls");
  line();
  a1.cread();
  gotoxy(2,2);
  cout<<"\n1.Student Information ";
  gotoxy(2,3);
  cout<<"\n2.Teacher Information";
  gotoxy(2,4);
  cout<<"\n3.Room Information    ";
  gotoxy(2,5);
  cout<<"\n4.School Name choice  ";
  gotoxy(2,6);
  cout<<"\n5.Paper information   ";
  gotoxy(2,7);
  cout<<"\n6.Complaints Department";
  gotoxy(2,8);
  cout<<"\n7.College Rules";
  gotoxy(2,9);
  cout<<"\n8.College Facilities";
  gotoxy(2,10);
  cout<<"\n9.folder Password";
  gotoxy(2,11);
  cout<<"\n0.Exit                ";
  gotoxy(6,19);
  a1.data();
  gotoxy(6,17);
  timee1();
  gotoxy(2,12);
  hj:
  fflush(stdin);
  cout<<"\nEnter your chioce:-";
  cin>>x;
  if(x>='a'&&x<='z'||x>='A'&&x<='Z'||x=='+'||x=='-'||x=='_'||x=='{'||x=='}'||x=='<'||x==' '||x=='('||x==')'||x=='!'||x=='~'||x=='@'||x=='#'||x=='$'||x=='%'||x=='^'||x=='&'||x=='*'||x==':'||x==';'||x=='"'||x=='<'||x=='>'||x=='?'||x=='/'||x=='\\'||x=='`')
  {
	cout<<"You can not enter this only form 1 to 0";
	getch();
	clrscr();
	fflush(stdin);
	goto HK;
  }
  else
 {
   switch(x)
   {
   case '1':
     lable:
       int wo;
       textbackground(9);
       clrscr();
       gotoxy(30,4);
       cout<<"1.Student Record  ";
       gotoxy(30,6);
       cout<<"2.Student Result  ";
       gotoxy(30,8);
       cout<<"3.Exit            ";
       gotoxy(30,10);
       cout<<"Enter your chioce ";
       gotoxy(30,12);
       cout<<"                  ";
       gotoxy(35,12);
       cin>>wo;
       switch(wo)
       {
       case 1:
	  reld();
	  clrscr();
	  manu();
	  getch();
	  break;
      case 2:
	  reld();
	  clrscr();
	  remanu();
	  getch();
	  break;

      case 3:
	   clrscr();
	    main1();
	   break;
     default:
       {
	  cout<<"choice  word";
	   getch();
	   clrscr();
	  goto lable;
	   break;
	}
     }
   case '2':
	reld();
	clrscr();
	a1.classb();
	getch();
	break;
   case '3':
	reld();
	clrscr();
	croom();
	getch();
	break;
   case '4':
      reld();
      clrscr();
       a1.cde();
       a1.clg();
       a1.cfile();
       break;
   case '5':
	reld();
	clrscr();
	 prepro();
	 break;
   case '6':
	  reld();
     ck:
	 int no;
	 clrscr();
	 cout<<"\n1.Complaints Add";
	 cout<<"\n2.Complaints Search";
	 cout<<"\n3.Complaints Delete";
	 cout<<"\n4.Exit";
	 cout<<"\nEnterr your choice:-";
	 cin>>no;
	 if(no<0)
	 {
	  cout<<"This is not possbile";
	  goto ck;
	 }
	 switch(no)
	 {
	   case 1:
	       clrscr();
	       a1.sku();
	       a1.swrite();
	       getch();
	       goto ck;
	       break;
	   case 2:
	       clrscr();
	       a1.ssearch();
	       getch();
	       goto ck;
	       break;
	   case 3:
	       vo:
	       clrscr();
	       int ma;
	       cout<<"\n1.One Data Delete";
	       cout<<"\n2.All Data Delete";
	       cout<<"\n3.Exit";
	       cout<<"\nEnter your choice:-";
	       cin>>ma;
	       if(ma<0)
	       {
		cout<<"this is not possible:";
	       }
	       switch(ma)
	       {
	       case 1:
		  char ch;
		   clrscr();
		    a1.ssearch();
		    cout<<"\n\nthis data delete yrs y/ no n:-";
		    cin>>ch;
		    if(ch=='y'||ch=='Y')
		    {
		     a1.sdelet();
		     getch();
		     goto vo;
		    }
		    else
		    {
		     goto vo;
		    }
	       case 2:
		    char c;
		   clrscr();
		   cout<<"\n\nAll Data Delete:-y/n";
		   cin>>c;
		   if(c=='y'||c=='Y')
		   {
		   a1.sall();
		   getch();
		   goto vo;
		   }
		   else
		   {
		    goto vo;
		   }
		   break;
	       case 3:
		  clrscr();
		  goto ck;
		  break;
	       default:
		 {
		  cout<<"choice  word";
		  goto vo;
		  getch();
		  break;
		}
	       }
	       getch();
	   case 4:
		clrscr();
		 main1();
		 break;
	   default:
	      {
	       cout<<"choice  word";
	       goto ck;
	       getch();
		break;
	      }
	 }
     case '7':
	     reld();
	  jl:
	 int mo;
	 clrscr();
	  cout<<"\n1.Rules Add";
	  cout<<"\n2.Rules show";
	  cout<<"\n3.Rules Updata";
	  cout<<"\n4.All Delelet";
	  cout<<"\n5.Exit";
	  cout<<"\nEnter your choice:-";
	  cin>>mo;
	  if(mo<0)
	  {
	    cout<<"this is not possible";
	    goto jl;

	  }
	  switch(mo)
	  {
	    case 1:
	       clrscr();
	       a1.pointnum();
	       a1.pointenter();
	       a1.ponitwrite();
	       getch();
	       goto jl;
	       break;
	    case 2:
	       clrscr();
	       a1.ponitshow();
	       getch();
	       goto jl;
	       break;
	    case 3:
		clrscr();
		 a1.pointupdata();
		 getch();
		 goto jl;
		 break;
	    case 4:
		clrscr();
		a1.ponitall();
		getch();
		goto jl;
		break;
	    case 5:
		  clrscr();
		  main1();
		  break;
	   default:
	    {
	     cout<<"choice  word";
	     getch();
	      goto jl;
	   break;
	 }
     }
   case '8':
	   reld();
	  lk:
	 int mi;
	 clrscr();
	 cout<<"\n1.Facilities Add";
	 cout<<"\n2.Facilities View";
	 cout<<"\n3.Facilities Updata";
	 cout<<"\n4.All Facilities Delelet";
	 cout<<"\n5.Exit";
	 cout<<"\nEnter your choice:-";
	 cin>>mi;
	 if(mi<0)
	 {
	  cout<<"This is not possible";
	  goto lk;
	 }
	 switch(mi)
	 {
	 case 1:
	     clrscr();
	     a1.rulenum();
	      a1.ruleenter();
	     a1.rulewrite();
	     getch();
	     goto lk;
	     break;
	 case 2:
	     clrscr();
	     a1.ruleshow();
	     getch();
	     goto lk;
	     break;
	 case 3:
	     clrscr();
	    a1.ruleupdata();
	    getch();
	    goto lk;
	    break;
	 case 4:
	    clrscr();
	    a1.ruleall();
	    getch();
	    goto lk;
	    break;
	 case 5:
	    clrscr();
	    main1();
	    break;
	default:
       {
	cout<<"choice  word";
	getch();
	goto lk;
	break;
      }
      }
   case '9':
	   clrscr();
	   phone();
	   getch();
	   break;
  case  '0':
	clrscr();
	 main2();
	break;
   default:
     {
	cout<<"You can not enter this only form 1 to 2 ";
	getch();
	clrscr();
	main1();
	break;
     }
    }
   }
  }
  getch();
}
void line()
{
   int a;
   window(60,40,100,5);
   textbackground(15);
   system("cls");
   a1.cread();
   for(a=1;a<=25;a++)
   {
    gotoxy(25,a);
    cprintf("||                               ||");
   }
    gotoxy(1,15);
  cprintf("========================");
}
void timee1()
{
  time_t now;
  struct tm *tm_now;
  int hours,min;
  now=time(NULL);
  tm_now=localtime(&now);
  hours=tm_now->tm_hour;
  min=tm_now->tm_min;
  hours=hours%12;
  if(hours==0)
  {
     hours=12;
  }
  textcolor(9);
  cprintf(" %d:%d",hours,min);
  if(hours<=12)
  {
    gotoxy(12,17);
    cprintf("PM ");
  }
  else
  {
     gotoxy(11,17);
    cprintf("AM ");
  }
   if(hours>=12)
  {
     gotoxy(4,21);
    cprintf("Good Monning");
  }
  else if(hours>=12)
  {
     gotoxy(4,21);
    cprintf("Good Afteroon");
  }
  else if(hours>=5)
  {
    gotoxy(4,21);
    cprintf("Good Evening");
  }
}
 void data1()
{
  struct date today;
  getdate(&today);
  getdate(&today);
  gotoxy(2,3);
  textcolor(8);
  cprintf("%d|         |%d",today.da_day,today.da_year);
  textcolor(3);
  cprintf("%d",o=today.da_mon);
  //cout<<o;
  switch(o)
  {
   case 1:
	textcolor(0);
	 gotoxy(6,3);
      cprintf("January");
      break;
   case 2:
	textcolor(0);
	 gotoxy(6,3);
       cprintf("February");
       break;
   case 3:
	textcolor(0);
	 gotoxy(6,3);
       cprintf("March");
       break;
   case 4:
	textcolor(0);
	 gotoxy(6,3);
	cprintf("April");
	break;
   case 5:
	textcolor(0);
	 gotoxy(6,3);
	cprintf("May");
	break;
   case 6:
	textcolor(0);
	 gotoxy(6,3);
	cprintf("June");
	break;
   case 7:
	textcolor(0);
	 gotoxy(6,3);
	cprintf("July");
	break;
   case 8:
	textcolor(0);
	gotoxy(6,3);
	cprintf("August");
	break;
   case 9:
	textcolor(0);
	 gotoxy(5,3);
	cprintf("September");
	break;
   case 10:
	  textcolor(0);
	   gotoxy(6,3);
	  cprintf("October");
	  break;
   case 11:
	textcolor(0);
	 gotoxy(6,3);
	cprintf("November");
	break;
   case 12:
	 textcolor(0);
	 gotoxy(6,3);
	 cprintf("December");
	 break;
     }
}
void timee()
{
  time_t now;
  struct tm *tm_now;
  int hours,min;
  now=time(NULL);
  tm_now=localtime(&now);
  hours=tm_now->tm_hour;
  min=tm_now->tm_min;
  hours=hours%12;
  if(hours==0)
  {
     hours=12;
  }
  gotoxy(4,2);
  cprintf("%d:%d",hours,min);
  if(hours<=12)
  {
    cprintf(" PM");
  }
  else
  {
    cprintf(" AM");
  }
   if(hours>=12)
  {
     gotoxy(37,18);
   cprintf("Good Monning");
  }
  else if(hours>=12)
  {
    gotoxy(37,18);
    cprintf("Good Afteroon");
  }
  else if(hours>=5)
  {
    gotoxy(37,18);
    cprintf("Good Evening");
  }
 getch();
}
void ver()
{
  clrscr();
  int a,b=0;
   a=sizeof(a1);
   a=sizeof(a2);
   b=b+a+a;
   dd=b;
}
void welcome()
{
 window(1,1,80,25);
  textbackground(3);
 clrscr();
  cout<<"\n\n"<<endl;
  cout<<"\t  \\ \\ /\\ / /  / _ \\ | |  / __|  / _ \\  | '_ ` _ \\   / _ \\               ";
  cout<<"\t   \\ V  V /  |  __/ | | | (__  | (_) | | | | | | | |  __/                 ";
  cout<<"\t    \\_/\\_/    \\___| |_|  \\___|  \\___/  |_| |_| |_|  \\___|               "<<endl;
  gotoxy(30,8);
  a1.cread();
  textcolor(RED);
  data1();
  gotoxy(66,3);
  textcolor(16);
  cprintf("version:-%d",dd);
  gotoxy(34,12);
 timee();
}
void about()
{
   clrscr();
   int a,no,b=100;
   cout<<"\n\nCollege Management Moblie App Pvt Ltp";
   cout<<"\nIf you wish to write to us,please do at\nsupport@nautilusmobile.com\n";
   textcolor(YELLOW);
   cprintf("Director");
   cout<<endl;
   cout<<"Mr.Manish Ranjan Pandey\n";
   cout<<"Mr.Lalit Johri\n";
   cout<<"Mis.Ritu Upadhyay\n";
   cprintf("Programming Team");
   cout<<endl;
   cout<<"Nidhi Sharma\n";
   cout<<"Gaurav Sharma\n";
   cout<<"Jitu Rajput\n";
   cout<<"Shaban Choudhary\n";
   cout<<"Aman Pratap\n";
   cout<<"Himanshu Chanhan\n";
   cprintf("Programmer's College");
   cout<<endl;
   cout<<"IFTM University Moradabad";
   gotoxy(52,6);
   cprintf("Best Programmer Team");
   gotoxy(52,7);
   cout<<"Our Team has worked on 10";
   gotoxy(52,8);
   cout<<"projects.";
   textcolor(6);
    for(a=5;a<=18;a++)
   {
    gotoxy(28,a);
    textcolor(a);
    cprintf("||                   ||");
    delay(50);
   }
   gotoxy(36,11);
    textcolor(YELLOW);
    cprintf("Form");
   while(!kbhit())
    {
    for(a=5;a<=15;a++)
   {
     gotoxy(33,12);
     textcolor(a);
    delay(100);
    cprintf(" Microsoft");
    }
   }
}
void time2()
{
  time_t now;
  struct tm *tm_now;
  int hours,min;
  now=time(NULL);
  tm_now=localtime(&now);
  hours=tm_now->tm_hour;
  min=tm_now->tm_min;
  hours=hours%12;
  if(hours==0)
  {
     hours=12;
  }
  textcolor(5);
  cprintf(" %d:%d",hours,min);
  if(hours<=12)
  {
    gotoxy(44,7);
    cprintf("PM ");
  }
  else
  {
     gotoxy(44,7);
    cprintf("AM ");
  }
}
void loding1()
 {
   system("cls");
   clrscr();
   int j;
    gotoxy(38,8);
    a1.data();
    gotoxy(38,7);
    time2();
   a1.cread();
   gotoxy(1,3);
   for(i=1;i<=90;i++)
   {
     gotoxy(1+bb,3);
     textcolor(1);
    cprintf("%c",196);
    bb=bb+1;
    textcolor(i);
    gotoxy(40,3);
   cprintf("[%d]",i+10);
   cout<<endl;
   cprintf("please wait");
   gotoxy(40,20);
   cprintf("Form");
   gotoxy(38,21);
   cprintf("Microsoft ");
   delay(100);
   textcolor(YELLOW);
   }
   gotoxy(1,5);
   textcolor(18+3);
   cprintf("Please Enter pressurs");
   sound();
}
void password()
{
	char name[20];
	 int i,a;
	 char ch,pass[30];
	 ifstream fin;
	char ck[20];
dk:
	system("cls");
	fin.open("my.fileq");
	fin>>ck;
	while(!fin.eof())
	{
	   cout<<ck;
	   fin>>ck;

	}
	fin.close();
	textcolor(YELLOW);
	gotoxy(20,4);
	cprintf("=========================================");
	gotoxy(20,12);
	cprintf("=========================================");
	for(i=5;i<=11;i++)
	{
	gotoxy(20,i);
	cprintf("||                                     ||");
	}
	gotoxy(23,5);
	textcolor(BLUE);
	cprintf("Enter your password:-");
	i=0;
	while(1)
	{
	  ch=getch();
	  //cout<<ch;
	  if(ch==13)
	  {
	    pass[i]='\0';
	    break;
	  }
	    pass[i++]=ch;
	    cout<<"*";
	}
	if(!strcmp(pass,ck)==0)
	{
	  loding();
	  gotoxy(24,8);
	  cprintf("Hava you entered this:-%s",pass);
	  strnset(ck,'x',3);
	  gotoxy(30,9);
	  cout<<"Password Hind:-"<<ck;
	  gotoxy(30,10);
	  cout<<"Incorrect";
	  b++;
	  gotoxy(30,11);
	  cout<<"Enter any key";
	  getch();
	  time3();
	  goto dk;
	}
	else
	{
	   loding();
	   gotoxy(33,8);
	   cout<<"correct";
	   gotoxy(28,10);
	   cprintf("Please Enter Pressure ");
	   getch();
	   system("cls");
	   mainuu();
	}
}
 void time3()
{
   clrscr();
   int bb=2,i,bfg=60,c=0;
   gotoxy(20,4);
   textcolor(YELLOW);
   cprintf("=========================================");
   gotoxy(20,12);
   cprintf("=========================================");
   for(i=5;i<=11;i++)
   {
    gotoxy(20,i);
    cprintf("||                                     ||");
   }
   if(b>=4)
  {
   for(i=1;i<=60;i++)
   {
    textcolor(i);
    gotoxy(28,6);
    cprintf("Try again in %d seconds ",bfg-i);
    delay(500);
  }
  gotoxy(28,9);
  textcolor(RED);
  cprintf("Please Enter Pressure ");
  getch();
}
}
void mainuu()
{
   clrscr();
  loding1();
  getch();
  ver();
  system("cls");
  welcome();
  getch();
  main1();
}
void loding()
{
  gotoxy(25,6);
  for(i=1;i<=10;i++)
  {
    textcolor(9);
    cprintf("%c",220);
    delay(100);
  }
   gotoxy(35,6);
   for(i=1;i<=10;i++)
   {
     textcolor(4);
     cprintf("%c",220);
     delay(100);
   }
}
//perpor info
void prepro()
{
  class pr
  {
   int num;
   char ques[200];
   char subj[20];
  public:
   void prset()
   {
     int fd,j=0;
     char cj;
     cout<<"How toSubject:-";
     gets(subj);
     cv:
     fflush(stdin);
     cout<<"How to Question Inster:-";
     cin>>fd;
     cout<<"Question & Numbar";
     for(j=1;j<=fd;j++)
    {
     cout<<j<<":-";
     num=j;
     textcolor(YELLOW);
     fflush(stdin);
     gets(ques);
     prfile();
   }
    cprintf("Do you want to put Questions Aside Yes Y/y  NO N/n");
    cin>>cj;
    if(cj=='Y'||cj=='y')
    {
     goto cv;
    }
  }
   void prfile()
   {
    ofstream fin;
    fin.open("quesf.dat",ios::app|ios::binary);
    fin.write((char*)this,sizeof(*this));
    fin.close();
   }
  void prread()
  {
      int g=0;
      ifstream fout;
      fout.open("quesf.dat",ios::in|ios::binary);
      if(!fout)
      {
       cout<<"file not found";
      }
      else
      {
	fout.read((char*)this,sizeof(*this));
	while(!fout.eof())
	{
	  textcolor(YELLOW);
	  cout<<"\n";
	  cprintf("%s",subj);
	   cout<<"\n";
	  cout<<num<<":-"<<ques<<endl;
	  cout<<"----------------------------------------------------------------------";
	  g=1;
	  fout.read((char*)this,sizeof(*this));
	}
      }
      if(g==0)
      {
       cout<<"Infor not found";
      }
   }
    void prdele()
    {
      ofstream fout;
      fout.open("quesf.dat",ios::out|ios::binary);
      textcolor(RED);
      cprintf("All Data Succseefull Delete");
      fout.close();
    }

  }p1;
    int nu;
    vk:
    cout<<"1.New Paper Add\n";
    cout<<"2.Paper View\n";
    cout<<"3.Paper all delete\n";
    cout<<"4.Exit\n";
    cout<<"Enter your choice:-";
    cin>>nu;
    switch(nu)
    {
    case 1:
	clrscr();
	p1.prset();
	getch();
	clrscr();
	goto vk;
	break;
    case 2:
	clrscr();
	p1.prread();
	getch();
	clrscr();
	goto vk;
	break;
  case 3:
	clrscr();
	p1.prdele();
	getch();
	clrscr();
	goto vk;
	break;
  case 4:
       main1();
       break;
   }
}

void pawoed()
{
class Time
{
    int a;
  public:
     void time2()
    {
      time_t now;
      struct tm *tm_now;
      int hours,min;
      now=time(NULL);
      tm_now=localtime(&now);
      hours=tm_now->tm_hour;
      min=tm_now->tm_min;
      hours=hours%12;
      if(hours==0)
     {
       hours=12;
     }
       textcolor(5);
       cprintf(" %d:%d",hours,min);
       a=hours+min;
      // cout<<a;
   }
   void filepass()
   {
      ofstream fin;
      fin.open("pas1.dat",ios::out|ios::binary);
      fin.write((char*)this,sizeof(*this));
      fin.close();
   }
   void pasread()
   {
     xk:
      int c,f=0;
     ifstream fin;
     textbackground(9);
     clrscr();
     time2();
      gotoxy(30,8);
     cout<<"Enter your passwoed";
     gotoxy(30,10);
     cout<<"                   ";
     gotoxy(38,10);
     cin>>c;
     fin.open("pas1.dat",ios::in|ios::binary);
     if(!fin)
     {
	cout<<"File not found";
     }
     else
     {
       while(!fin.eof())
       {
	if(a==c)
	{
	 f=1;
	 break;
	}
	 fin.read((char*)this,sizeof(*this));
       }
     }
   if(f==0)
   {
    cout<<"This password is wrong!!Sorry"<<endl<<endl;
    cout<<"What comes after adding the hour and minute is the password!";
    getch();
    clrscr();
    time2();
    filepass();
    goto xk;
   }
   }
}t1;
     t1.time2();
     t1.filepass();
     t1.pasread();
}
void phone()
{
   char s;
   ofstream fout;
   fout.open("myfile.dat",ios::out);
   cout<<"You hava to put a passowrd on the folder yes Y/y on N\n?";
   cin>>s;
   if(s=='y'||s=='Y')
   {
    fout<<"1";
    cout<<"What comes after adding the hour and minute is the password!";
   }
   else
   {
    fout<<"0";
   }
}
void phread()
{
  char ch;
 ifstream fin;
 fin.open("myfile.dat",ios::in);
ch=fin.get();
x=ch;
while(!fin.eof())
{
 break;
}
fin.close();
}
void check()
{
   if(x=='1')
   pawoed();
}
void reld()
{
  phread();
  clrscr();
  check();
  textbackground(8);
  clrscr();
}
void libaray()
{
   class LIBARAY
   {
      long int bookid1;
      long int bookid2;
      long int bookid3;
      long int bookid;
      char name[20];
      char course[20];
       long int ruumbar;
      char phonenu[20];
      char bookname1[20];
      char bookname2[20];
      char bookname3[20];
      int a,b,c,x,ad,da,ac,dae,as,aq;
    public:
       void data()
       {
       struct date today;
       getdate(&today);
       gotoxy(1,2);
       printf("%d/%d/%d",o=today.da_day,rr=today.da_mon,mq=today.da_year);
       }
      void setdata()
      {
	clrscr();
	for(i=1;i<=15;i++)
       {
	textcolor(2);
	gotoxy(43,i);
	cprintf("||");
       }
	gotoxy(1,15);
       for(i=1;i<=80;i++)
       {
	cprintf("%c",223);
       }
	bookid=0;
       gotoxy(2,3);
       cout<<"Enter Student name:-";
       gets(name);
	gotoxy(2,5);
       cout<<"Enter Course Name:-";
       gets(course);
       gotoxy(2,7);
       cout<<"Enter Registration numbar:-";
       fflush(stdin);
       cin>>ruumbar;
       cj:
       gotoxy(26,9);
       cprintf("         ");
       gotoxy(20,18);
       textcolor(9);
       cprintf("                                  ");
       gotoxy(2,9);
       cout<<"Enter your phone Numbar:-";
       fflush(stdin);
       gotoxy(27,9);
       gets(phonenu);
       int z;
       z=strlen(phonenu);
       if(z>=11||z<10)
       {
	 gotoxy(20,18);
	cout<<"You are entering the wrong number"<<phonenu<<"\t\t\t\t\t\t\t";
	getch();
	goto cj;
       }
       df:
       gotoxy(31,11);
       cprintf("    ");
       gotoxy(20,17);
       cprintf("                              ");
       gotoxy(2,11);
       cout<<"How Much do you hava to book?";
       gotoxy(31,11);
       cin>>kp;
	x=kp;
       if(kp==0)
       {
	 strcpy(bookname1,"No book");
	 strcpy(bookname2,"No book");
	 strcpy(bookname3,"No book");
	 bookid2=0;
	 bookid3=0;
	 bookid1=0;
	 a=0;
	 b=0;
	 c=0;
	 ad=0,da=0,ac=0;
	 dae=0,as=0,aq=0;
	 rr=0;
	 ett=0;
       }
       if(x>=4)
       {
	gotoxy(20,17);
	cout<<"Can you just take book three";
	getch();
	goto df;
       }
       for(i=1;i<=kp;i++)
       {
       if(i==1)
       {
	 strcpy(bookname1,"No book");
	 strcpy(bookname2,"No book");
	 strcpy(bookname3,"No book");
	 bookid1=0;
	 bookid2=0;
	 bookid3=0;
	 gotoxy(45,3);
	 textcolor(RED);
	 cprintf("First Book ID:-");
	 fflush(stdin);
	 cin>>bookid1;
	 gotoxy(45,4);
	 textcolor(YELLOW);
	 cprintf("Book Name:-");
	 fflush(stdin);
	 gets(bookname1);
	  struct date today;
	  getdate(&today);
	  cprintf("%d/%d/%d",a=today.da_day,b=today.da_mon,c=today.da_year);
       }
       else if(i==2)
       {
	 fflush(stdin);
	  gotoxy(45,6);
	  textcolor(RED);
	 cprintf("second Book id:-");
	 cin>>bookid2;
	 fflush(stdin);
	 gotoxy(45,7);
	 textcolor(YELLOW);
	 cprintf("Book name:-");
	gets(bookname2);
	fflush(stdin);
	 struct date today;
	getdate(&today);
	cprintf("%d/%d/%d",ad=today.da_day,da=today.da_mon,ac=today.da_year);
       }
       else if(i==3)
       {
	fflush(stdin);
	gotoxy(45,9);
	textcolor(RED);
	cprintf("Third Book id:-");
	cin>>bookid3;
	fflush(stdin);
	gotoxy(45,10);
	textcolor(YELLOW);
	cprintf("Book Name:-");
	gets(bookname3);
	 struct date today;
	getdate(&today);
	cprintf("%d/%d/%d",dae=today.da_day,as=today.da_mon,aq=today.da_year);

       }
       }
    }
     void showdata()
     {
       cout<<"\nName\t\tCourse\t Bookid\t G book  Reg no\t   P numbar\tShow date       ";
       cout<<"\n"<<name<<"\t "<<course<<"\t "<<bookid1<<"\t   "<<x<<"\t "<<ruumbar<<"\t " <<phonenu<<"\t"<<a<<"/"<<b<<"/"<<c<<"\t";
     }
     void fileset()
     {
       int fl=0;
      ofstream fin;
      fin.open("lib.txa",ios::app|ios::binary);
      fin.write((char*)this,sizeof(*this));
      fin.close();
      cout<<"\nSucessful data";
     }
     void raedfile()
     {
      int fl;
      ifstream fout;
      fout.open("lib.txa",ios::in|ios::binary);
      if(!fout)
      {
       cout<<"File not found";
      }
      else
      {
	textbackground(9);
	clrscr();
	cout<<"\nName\t\tCourse\t Bookid\t G book  Reg no\t   P numbar\tShow date       ";
	fout.read((char*)this,sizeof(*this));
	while(!fout.eof())
	{
	  cout<<"\n"<<name<<"\t "<<course<<"\t "<<bookid1<<"\t   "<<x<<"\t "<<ruumbar<<"\t " <<phonenu<<"\t"<<a<<"/"<<b<<"/"<<c<<"\t";
	  fl=1;
	  fout.read((char*)this,sizeof(*this));
	}
      }
      if(fl==0)
      {
       cout<<"Date not Read";
      }
     }
    void libsearch()
    {
      textbackground(9);
      clrscr();
       long int s=0;
       m=0;
      ifstream fin;
      cout<<"how to Registration numbar:-";
      cin>>s;
      xx=s;
      fin.open("lib.txa",ios::in|ios::binary);
      if(!fin)
      {
	cout<<"file not found";
      }
      else
      {
       while(!fin.eof())
       {
	if(s==ruumbar)
	{
	  showdata();
	  cout<<endl;
	  gotoxy(1,7);
	  cout<<"Book name\t\tBook Id\t\tData\t\tDay\t\tFine    "<<endl;
	  gotoxy(1,9);
	  cout<<bookname1<<"\t\t\t   "<<bookid1<<"\t\t"<<a<<"/"<<b<<"/"<<c<<"\t\t\t\t";
	  gotoxy(1,11);
	  cout<<bookname2<<"\t\t\t   "<<bookid2<<"\t\t"<<ad<<"/"<<da<<"/"<<ac<<"\t\t\t\t";
	  gotoxy(1,13);
	  cout<<bookname3<<"\t\t\t   "<<bookid3<<"\t\t"<<dae<<"/"<<as<<"/"<<aq<<"\t\t\t\t";
	  mlo=bookid1;
	  mn=bookid2;
	  nn=bookid3;
	  kp=x;
	  m=1;
	  break;
	}
	fin.read((char*)this,sizeof(*this));
       }
      }
      if(m==0)
      {
       cout<<"Date not found";
      }
      ett=0;
      int sd;
      data();
      rr=0;
      for(sd=a;sd<=o;sd++)
      {
	rr++;
      }
      if(mlo==0)
      {
       rr=0;
      }
      gotoxy(57,9);
      cout<<rr;
   //fine codeing
      if(rr<=28)
      {
	gotoxy(72,9);
	cout<<"No Fine";
      }
      wo=0;
      if(rr>=28)
      {
	for(i=28;i<=o;i++)
	{
	 wo=wo+5;
	}
	gotoxy(72,9);
	cout<<wo<<" R   ";
      }

      data();
      rr=0;
      for(sd=ad;sd<=o;sd++)
      {
	rr++;
      }
      if(mn==0)
      {
       rr=0;
      }
      gotoxy(57,11);
      cout<<rr;
// fine codeing
      if(rr<=28)
      {
	gotoxy(72,11);
	cout<<"No Fine";
      }
	wo=0;
      if(rr>=28)
      {
	for(i=28;i<=o;i++)
	{
	 wo=wo+5;
	}
	gotoxy(72,11);
	cout<<wo<<" R   ";
      }

      data();
      rr=0;
      for(sd=dae;sd<=o;sd++)
      {
	rr++;
      }
      if(nn==0)
      {
       rr=0;
      }
      gotoxy(57,13);
      cout<<rr;

      if(rr<=28)
      {
	gotoxy(72,13);
	cout<<"No Fine";
      }
	wo=0;
      if(rr>=28)
      {
	for(i=28;i<=o;i++)
	{
	 wo=wo+5;
	}
	gotoxy(72,12);
	cout<<wo<<" R   ";
      }

      }
// fine codeing

   void liup()
   {
       long int no;
       int jj=0;
       char ch;
    fstream file;
    file.open("lib.txa",ios::in|ios::out|ios::ate|ios::binary);
    file.seekg(0);
    file.read((char*)this,sizeof(*this));
    while(!file.eof())
    {
     if(xx==ruumbar)
     {
	  gotoxy(38,16);
	  fflush(stdin);
	  textcolor(9);
	  cprintf("                                     ");
	  textcolor(YELLOW);
	  gotoxy(2,16);
	  cprintf("Do you hava to return r/R?");
	  gotoxy(2,18);
	  cprintf("Take the book D/d");
	  gotoxy(2,20);
	  cprintf("All updata A/a?");
	  gotoxy(2,22);
	  cprintf("Back B/b");
	  gotoxy(2,24);
	  cout<<"                              ";
	  fflush(stdin);
	  gotoxy(15,24);
	  cin>>ch;
	  if(ch=='R'||ch=='r')
	  {
	  bookupdata();
	  }
	  if(ch=='d'||ch=='D')
	  {
	    bookup();
	  }
	  if(ch=='a'||ch=='A')
	  {
	   setdata();
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
    file.close();
   }
void bookupdata()
{
   io=0;
   bb=0;
   ett=0;
  int g=0;
  if(mlo>0)
  {
    io++;
  }
  if(mn>0)
  {
     bb++;
  }
  if(nn>0)
  {
   ett++;
  }
  az:
  gotoxy(38,17);
  cprintf("                       ");
  gotoxy(38,16);
  cprintf("                              ");
  mx=0;
  mx=io+bb+ett;
  gotoxy(38,16);
  cout<<"How Much book to return?:-";
  cin>>g;
  if(g>mx)
  {
   gotoxy(38,17);
   cout<<"Only one:-"<<mx;
   getch();
   mx=0;
   goto az;
  }
  x=kp-g;
  for(i=1;i<=g;i++)
  {
    gotoxy(37,18);
    cprintf("Enter your book id:-");
    cin>>m;
    if(m==mlo)
    {
      strcpy(bookname1,"No Book");
      bookid1=0;
      a=0,b=0,c=0;
    }
    else if(m==mn)
    {
     strcpy(bookname2,"No Book");
     bookid2=0;
     ad=0,da=0,ac=0;
    }
    else if(m==nn)
    {
      strcpy(bookname3,"No Book");
      bookid3=0;
      dae=0,as=0,aq=0;
    }
    else
    {
     gotoxy(38,20);
     cprintf("This data not alwo");

    }
  }
}
void bookup()
{
  int g=0;
  op:
  gotoxy(38,16);
  cout<<"Need a kidney book?:-";
  cin>>g;
  if(g>=4)
  {
  gotoxy(38,18);
  cout<<"Can you just get three books";
  g=0;
  g=kp+g;
  goto op;
  }
  if(g>=4)
  {
   gotoxy(38,18);
    cout<<"Can you just get three books";
     goto op;
  }
  if(kp==3)
  {
    gotoxy(38,18);
     cout<<"Can you just get three books";
  }
  else
  {
  x=kp+g;
 }
    kp=kp+1;
   for(i=kp;i<=x;i++)
   {
       if(i==1)
       {
	strcpy(bookname1,"No book");
	 strcpy(bookname2,"No book");
	 strcpy(bookname3,"No book");
	 bookid1=0;
	 bookid2=0;
	 bookid3=0;
	 ad=0;
	 da=0;
	 ac=0;
	 dae=0;
	 as=0;
	 aq=0;
	 gotoxy(37,16);
	 textcolor(RED);
	 cprintf("First Book ID f:-");
	 fflush(stdin);
	 cin>>bookid1;
	 gotoxy(37,17);
	 textcolor(YELLOW);
	 cprintf("Book Name:-");
	 fflush(stdin);
	 gets(bookname1);
	  struct date today;
	getdate(&today);
	cprintf("%d/%d/%d",a=today.da_day,b=today.da_mon,c=today.da_year);
	}
       else if(i==2)
       {
	 fflush(stdin);
	  gotoxy(37,19);
	  textcolor(RED);
	 cprintf("second Book id s:-");
	 cin>>bookid2;
	 fflush(stdin);
	 gotoxy(37,20);
	 textcolor(YELLOW);
	 cprintf("Book name:-");
	gets(bookname2);
	fflush(stdin);
	 struct date today;
	getdate(&today);
	cprintf("%d/%d/%d",ad=today.da_day,da=today.da_mon,ac=today.da_year);
       }
       else if(i==3)
       {
	fflush(stdin);
	gotoxy(37,22);
	textcolor(RED);
	cprintf("Third Book id t:-");
	cin>>bookid3;
	fflush(stdin);
	gotoxy(37,23);
	textcolor(YELLOW);
	cprintf("Book Name:-");
	gets(bookname3);
	 struct date today;
	getdate(&today);
	cprintf("%d/%d/%d",dae=today.da_day,as=today.da_mon,aq=today.da_year);
       }
      }
 }
void lidelete()
{
  int no,flog=0;
    ifstream fin;
    ofstream fout;
    fin.open("lib.txa",ios::in|ios::binary);
    if(!fin)
    {
     cout<<"file not found";
    }
    else
    {
       fout.open("temfile1.txt",ios::out|ios::binary);
       fin.read((char*)this,sizeof(*this));
      while(!fin.eof())
      {
	if(xx==ruumbar)
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
      cout<<"data suceesfull delet";
      }
      fin.close();
      fout.close();
      remove("lib.txa");
      rename("temfile1.txt","lib.txa");
    if(flog==0)
    {
      cout<<"search Record found" ;
      sound();
    }
    }
}
void Allupdat()
{
  ofstream fout;
  fout.open("lib.txa",ios::out|ios::binary);
  textcolor(RED);
  cprintf("All Data Succseefull Delete");
}
}l1,l2;
while(1)
{
 bh:
 textbackground(9);
 clrscr();
 int ko;
 gotoxy(30,3);
 cout<<"1.Add New Id       ";
 delay(100);
 gotoxy(30,5);
 cout<<"2.Book View        ";
 delay(100);
 gotoxy(30,7);
 cout<<"3.Book Search      ";
 delay(100);
 gotoxy(30,9);
 cout<<"4.Updata           ";
 delay(100);
 gotoxy(30,11);
 cout<<"5.Delete           ";
 delay(100);
 gotoxy(30,13);
 cout<<"6.All Delete       ";
 delay(100);
 gotoxy(30,15);
 cout<<"7.Exit             ";
 delay(100);
 gotoxy(30,17);
 cout<<"Enter your choice  ";
 gotoxy(30,19);
 cout<<"                   ";
 gotoxy(38,19);
 cin>>ko;
 switch(ko)
 {
  case 1:
      char chx;
      bho:
      clrscr();
      cout<<"Do you  want to keep data? Yes Y/y back B";
      cin>>chx;
      if(chx=='y'||chx=='Y')
      {
       clrscr();
       l1.data();
       l1.setdata();
       l1.fileset();
       getch();
       }
       else if(chx=='B'||chx=='b')
       {
	 goto bh;
       }
       else
       {
	cout<<"plz Only Y/B";
	getch();
	goto bho;
       }
     break;
  case 2:
   clrscr();
   l1.raedfile();
   getch();
   break;
  case 3:
      clrscr();
      l1.data();
      l1.libsearch();
      getch();
      break;
  case 4:
       char chh;
       hj:
       clrscr();
	l1.data();
	l1.libsearch();
	gotoxy(1,15);
	for(i=1;i<=80;i++)
       {
	cprintf("%c",223);
       }
       for(i=15;i<=25;i++)
       {
	gotoxy(34,i);
	cprintf("||");
       }
	gotoxy(38,16);
	fflush(stdin);
	cout<<" This is Data Updata? yes y/Y No n/N";
	cin>>chh;
	if(chh=='y'||chh=='Y')
	{
	l1.liup();
	}
	else
	{
	  goto bh;
	}
	getch();
	break;
  case 5:
       char ch;
	clrscr();
	l1.libsearch();
	cout<<"\n\nThis is Data Deletion? yes y/Y No n/N";
	cin>>ch;
	if(ch=='y'||ch=='Y')
	{
	l1.lidelete();
	}
	else
	{
	  goto bh;
	}
	getch();
	break;
  case 6:
	clrscr();
	l1.Allupdat();
	getch();
	break;
  case 7:
	main2();
       //exit(0);
  default:
     {
	gotoxy(30,19);
	cout<<"plz only 1 to 7 ";
	getch();
	clrscr();
	goto bh;
	break;
     }
    }
 }
}
void onlinetext()
{
  dk:
 char kj;
 clrscr();
  libline();
   gotoxy(2,1);
 cout<<"Q 1.What is the full form of opp?\n";
 gotoxy(2,3);
 cout<<"A.Object oriented programming.";
  gotoxy(2,4);
 cout<<"B.Oriented object prgramming.";
 gotoxy(2,5);
 cout<<"C.office oriented progarmming.";
 gotoxy(2,6);
 cout<<"D.office objective programming.";
 gotoxy(2,7);
 cout<<"Enter your choice:-";
 fflush(stdin);
 cin>>kj;
 switch(kj)
 {
    case 'A':
    case 'a':
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.Object oriented programming.");
	  chech();
	  textcolor(BLUE);
	  gotoxy(2,3);
	  cprintf("A.Object oriented programming.");
	  rg++;
	  libline();
	  getch();
	  break;
    case 'B':
    case 'b':
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.Oriented object prgramming.");
       chech();
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.Oriented object prgramming.");
       wo++;
       libline();
       getch();
       break;
    case 'C':
    case 'c':
       textcolor(RED);
	gotoxy(2,5);
	cprintf("C.office oriented progarmming.");
	chech();
	textcolor(RED);
	gotoxy(2,5);
       cprintf("C.office oriented progarmming.");
	wo++;
       libline();
       getch();
       break;
    case 'D':
    case 'd':
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.office objective programming.");
	chech();
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.office objective programming.");
	 wo++;
	 libline();
	getch();
	break;
    default:
       goto dk;
 }
  clrscr();
    libline();
     gotoxy(2,1);
  cout<<"Q 2.Which operator has highest precedence?\n";
 gotoxy(2,3);
 cout<<"A.()";
  gotoxy(2,4);
 cout<<"B.=";
 gotoxy(2,5);
 cout<<"C.*";
 gotoxy(2,6);
 cout<<"D.++";
 gotoxy(2,7);
 cout<<"Enter thr correct answer?";
 fflush(stdin);
 cin>>kj;
 switch(kj)
 {
    case 'A':
    case 'a':
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.()");
	  chech();
	  textcolor(BLUE);
	  gotoxy(2,3);
	  cprintf("A.()");
	   rg++;
	   libline();
	  getch();
	  break;
    case 'B':
    case 'b':
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.=");
       chech();
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.=");
       wo++;
       libline();
       getch();
       break;
    case 'C':
    case 'c':
       textcolor(RED);
	gotoxy(2,5);
	cprintf("C.*");
       chech();
       textcolor(RED);
	gotoxy(2,5);
       cprintf("C.*");
	wo++;
	 libline();
       getch();
       break;
    case 'D':
    case 'd':
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.++");
	chech();
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.++");
	wo++;
	libline();
	getch();
	break;
    default:
       goto dk;
    }
    clrscr();
     libline();
      gotoxy(2,1);
  cout<<"Q 3.Which operator has highest precedence in * / % ?";
  gotoxy(2,3);
  cout<<"A.*";
  gotoxy(2,4);
  cout<<"B./";
  gotoxy(2,5);
  cout<<"C.%";
  gotoxy(2,6);
  cout<<"D.All hava same precedence.";
  gotoxy(2,7);
  cout<<"Enter thr correct answer?";
  fflush(stdin);
  cin>>kj;
  switch(kj)
  {
    case 'A':
    case 'a':
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.*");
	  chech();
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.*");
	   wo++;
	   libline();
	  getch();
	  break;
    case 'B':
    case 'b':
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B./");
       chech();
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B./");
	wo++;
	libline();
       getch();
       break;
    case 'C':
    case 'c':
       textcolor(RED);
	gotoxy(2,5);
	cprintf("C.%");
	chech();
	textcolor(RED);
	gotoxy(2,5);
       cprintf("C.%");
	wo++;
	libline();
       getch();
       break;
    case 'D':
    case 'd':
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.All hava same precedence");
	chech();
	gotoxy(2,6);
	textcolor(BLUE);
	cprintf("D.All hava same precedence");
	 rg++;
	 libline();
	getch();
	break;
    default:
       goto dk;
    }
     clrscr();
     libline();
      gotoxy(2,1);
  cout<<"Q 4.How to access and edit data in data file handling using.";
  gotoxy(2,3);
  cout<<"A.read";
  gotoxy(2,4);
  cout<<"B.write";
  gotoxy(2,5);
  cout<<"C.both A and B";
  gotoxy(2,6);
  cout<<"D.without read()";
  gotoxy(2,7);
  cout<<"Enter thr correct answer?";
  fflush(stdin);
  cin>>kj;
  switch(kj)
  {
    case 'A':
    case 'a':
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.read");
	  chech();
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.read");
	  wo++;
	  libline();
	  getch();
	  break;
    case 'B':
    case 'b':
	textcolor(RED);
       gotoxy(2,4);
       cprintf("B.write");
       chech();
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.write");
	wo++;
	 libline();
       getch();
       break;
    case 'C':
    case 'c':
       textcolor(RED);
	gotoxy(2,5);
	cprintf("C.both A and B");
	chech();
	textcolor(BLUE);
	gotoxy(2,5);
       cprintf("C.both A and B");
	rg++;
	 libline();
       getch();
       break;
    case 'D':
    case 'd':
	chech();
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.without read()");
	chech();
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.without read");
	wo++;
	libline();
	getch();
	break;
    default:
       goto dk;
    }
  clrscr();
   libline();
   gotoxy(2,1);
  cout<<"Q 5.Can we overload functions in c++?";
  mak=1;
  gotoxy(2,3);
  cout<<"A.Yes";
  gotoxy(2,4);
  cout<<"B.No";
  gotoxy(2,5);
  cout<<"C.Compilation Error";
  gotoxy(2,6);
  cout<<"D.Runtime Error";
  gotoxy(2,7);
  cout<<"Enter thr correct answer?";
  fflush(stdin);
  cin>>kj;
  switch(kj)
  {
    case 'A':
    case 'a':
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.Yes");
	  chech();
	  textcolor(RED);
	  gotoxy(2,3);
	  cprintf("A.Yes");
	   rg++;
	  libline();
	  getch();
	  break;
    case 'B':
    case 'b':
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.No");
       chech();
       textcolor(RED);
       gotoxy(2,4);
       cprintf("B.No");
	wo++;
	 libline();
       getch();
       break;
    case 'C':
    case 'c':
       textcolor(RED);
	gotoxy(2,5);
	cprintf("C.Compilation Error");
	chech();
	textcolor(BLUE);
	gotoxy(2,5);
       cprintf("C.Compilation Error");
	wo++;
	 libline();
       getch();
       break;
    case 'D':
    case 'd':

	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.Runtime Error");
	chech();
	textcolor(RED);
	gotoxy(2,6);
	cprintf("D.Runtime Error");
	 wo++;
	 libline();
	getch();
	break;
    default:
       goto dk;
    }
}
void libline()
{
 libinfo();
 gotoxy(1,10);
 for(i=1;i<=80;i++)
 {
   textcolor(BLUE);
   cprintf("%c",220);
 }
  gotoxy(1,12);
 for(i=1;i<=80;i++)
 {
   textcolor(BLUE);
   cprintf("%c",220);
 }
  for(i=1;i<=10;i++)
 {
   textcolor(BLUE);
   cprintf("                   ||");
   cout<<endl;
 }
  gotoxy(2,11);
  cout<<"Result                   Infor";
  textcolor(YELLOW);
  gotoxy(2,13);
 cprintf("Right Question:-%ld",rg);
 gotoxy(2,14);
 cprintf("Wrong Question:-%ld",wo);
  gotoxy(1,22);
 for(i=1;i<=80;i++)
 {
   textcolor(BLUE);
   cprintf("%c",220);
 }
    if(mak==1)
    {
     if(rg==5||rg==4)
     {
      gotoxy(3,17);
      cout<<"Excellent";
     }
     else if(rg==3)
     {
       gotoxy(3,17);
      cout<<"Good";
       getch();
     }
     else
     {
      gotoxy(3,17);
      cout<<"Fail";
     }
    }
}
void libinfo()
{
 class LN
 {
   int a;
   char namee[20];
   char phone[20];
   char co[20];
   char college[20];
   long int paq;
 public:
 inline void set()
 {
     m++;
    cout<<"Enter Student Roll numbar:-";
    cin>>a;
    fflush(stdin);
   cout<<"Enter Student Name:-";
   gets(namee);
   nds:
   cout<<"\nEnter student Course name:-";
   gets(co);
   cout<<"Enter your phone numbar:-";
   gets(phone);
   cout<<"Enter your College Name:-";
   gets(college);
   ofstream fin;
   fin.open("lib.gh",ios::out|ios::binary);
   fin.write((char*)this,sizeof(*this));
   fin.close();
   clrscr();
 }
inline void shownfo()
 {
  ifstream fin;
  fin.open("lib.gh",ios::in|ios::binary);
  if(!fin)
  {
   cout<<"not found";
  }
  else
  {
   fin.read((char*)this,sizeof(*this));
   while(!fin.eof())
   {
     gotoxy(26,13);
     cout<<"Roll No:-"<<a;
     gotoxy(26,14);
      cout<<"Name:-"<<namee<<"\t\t\t\t\t\t\t";
      gotoxy(26,15);
     cout<<"Course:-"<<co<<"\t\t\t\t\t\t";
     gotoxy(26,16);
     cout<<"College Name:-"<<college<<"\t\t\t\t";
     gotoxy(26,17);
    cout<<"Phone Numbar:-"<<phone;
    fin.read((char*)this,sizeof(*this));
  }
 }
 }
 }l1;
 if(m==0)
 {
 l1.set();
 }
 if(m==1)
 {
   l1.shownfo();
   }
 }
inline void main2()
{
  while(1)
  {
   gk:
   int yu;
   clrscr();
   textbackground(9);
   system("cls");
   clrscr();
  gotoxy(30,4);
  cout<<"1.Student Information";
  delay(200);
  gotoxy(30,6);
  cout<<"2.Library Management ";
  delay(200);
  gotoxy(30,8);
  cout<<"3.Online text        ";
  delay(200);
  gotoxy(30,10);
  cout<<"4.App Help           ";
  delay(200);
  gotoxy(30,12);
  cout<<"5.About us           ";
  delay(200);
  gotoxy(30,14);
  cout<<"6.Exit               ";
  delay(200);
  gotoxy(30,16);
  cout<<"Enter your choice    ";
  delay(200);
  gotoxy(30,18);
  cout<<"                     ";
  gotoxy(40,18);
  cin>>yu;
  textbackground(8);
  switch(yu)
  {
    case 1:
       clrscr();
       password();
       getch();
       break;
   case 2:
     clrscr();
     reld();
     libaray();
     getch();
   case 3:
       clrscr();
       onlinetext();
       getch();
       goto gk;
   case 4:
	 clrscr();
	 help();
	 getch();
	 break;
   case 5:
	clrscr();
	 about();
	 getch();
	 break;
   case 6:
       clrscr();
       report();
       getch();
       exit(0);
   default:
      gotoxy(30,14);
      cout<<"Plz Enter 1,2,3,4 Only";
      getch();
      goto gk;
   }
  }
}
void help()
{
   textbackground(WHITE);
   clrscr();
   //system("cls");
   textcolor(RED);
   gotoxy(3,1);
   cprintf("1.Student Information Help.\r\n  Teacher Information,Room Information,Class Teacher information,Add Complant,    Rules,Feature,Folder Password,Paper information,etc");
   gotoxy(3,4);
   cprintf("Can you bring the name of your college on the home screen.");
   textcolor(8);
   gotoxy(3,5);
   cprintf("First it will ask you to enter the password whose password id 'nidhi'.");
   gotoxy(3,6);
   cprintf("Whose password cannot be changed.");
   textcolor(8);
   gotoxy(3,8);
   cprintf("Add a New Record,View,Search,Delete,All Delete,Updata,Fee Information");
   gotoxy(3,9);
   cprintf("Important Information,etc");
   gotoxy(3,10);
   cprintf("And we can also put passwords on these which are time password.");
   gotoxy(3,11);
   cprintf("In that we can keep the information of the Result");
   gotoxy(3,12);
   cprintf("And we can also put passwords on these which are time password.");
   gotoxy(3,13);
   cprintf("Add Hours and Minutes,Hours+Minutes");
   gotoxy(25,14);
   textcolor(RED);
   cprintf("2.Library Management");
   gotoxy(3,15);
   textcolor(8);
   cprintf("And we can also put passwords on these which are time password.");
   gotoxy(3,16);
   cprintf("Add Hours and Minutes,Hours+Minutes");
   gotoxy(3,17);
   cprintf("Add a New Record,View,Search,Delete,All Delete,Updata");
   gotoxy(25,18);
   textcolor(RED);
   cprintf("3.Online text");
   gotoxy(3,19);
   textcolor(8);
   cprintf("You Wll be given five question.");
   gotoxy(3,20);
   cprintf("In which you hava to correct 3 Questions.");
   gotoxy(25,21);
   textcolor(RED);
   cprintf("4.About some Application");
   gotoxy(3,22);
   textcolor(8);
   cprintf("Programmer Gaurav sharma");
}
void chech()
{
  gotoxy(2,9);
  for(i=1;i<=20;i++)
  {
    textcolor(9);
    cprintf("%c",220);
    delay(100);
  }
  sound();
}

void report()
{
   rr=0;
   textbackground(9);
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
   if(1==rr||2==rr||3==rr||4==rr)
   {
      gotoxy(27,11);
      textcolor(YELLOW);
      cout<<"Thanks For your feedback";
   }
}

void main()
{
   clrscr();
   main2();
   getch();
}