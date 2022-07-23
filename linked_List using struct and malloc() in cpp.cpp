#include<iostream>
using namespace std;
int c=0;
struct node
{
    int data;
    struct node* like;
};

struct node *start=NULL;

struct node *creareNode()
{
    struct node *n;
    n=(struct node*)malloc(sizeof(struct node));
    return (n);
    //cout<<n;
}

void insertL()
{
    struct node *temp;
    struct node *t;
    temp=creareNode();
    cout<<"Enter the number:-";
    cin>>temp->data;
    temp->like=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
       t=start;
       while(t->like!=NULL)
       {
           t=t->like;
       }
       t->like=temp;
    }
}


void insertH()
{
    struct node *temp;
    struct node *t;
    temp=creareNode();
    cout<<"Enter the number:-";
    cin>>temp->data;
    temp->like=NULL;
    if(start==NULL)
    {
        start=temp;
    }
    else
    {
       temp->like=start;
       start=temp;
    }
}


void deleteH()
{
    struct node* t;
    if(start==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        t=start;
        start=t->like;
        cout<<start;
      //  cout<<endl<<t->like;
        free(t);
       // cout<<endl<<t->like;
        
    }
}

void deleteL()
{
    struct node *temp;
    struct node *t=start;
    if(start==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
       //t=start;
       while(t->like!=NULL)
       {
           temp=t;
           t=t->like;
       }
       temp->like=NULL;
       free(t);
    }
}
void insertM()
{
    int count=0,info,pos;
    struct node *temp=start;
    struct node *temp1=creareNode();
    
    cout<<"Enter the Data:-";
    cin>>temp1->data;
    temp1->like=NULL;
    cout<<"Enter the pos:-";
    cin>>pos;
    while(count<pos-1)
    {
      temp=temp->like;
      count++;
    }
    //temp1=creareNode();
    temp1->like=temp->like;
    temp->like=temp1;
}
void reverse()
{
    cout<<"Reverse Data:-"<<endl;
    struct node* t=start;
    while(t!=NULL)
    {
        cout<<t->data<<" ";
        t=t->like;
    }
}
void DeleteM()
{
    int n,i=1;
   
    struct node* temp1;
    struct node* temp=start;
    cout<<"Enter the Pos:-";
    cin>>n;
    if(start==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
       while(i<=n-1)
       {
           temp=temp->like;
           i++;
       }
       temp1=temp->like;
       temp->like=temp1->like;
       temp1->like=NULL;
       free(temp1);
    }
}
int main()
{
  while(1)
  {
  // system ("clear");
    int n;
  cout<<endl<<"No 1:- insert H ";
  cout<<endl<<"No 2:- insert L ";
  cout<<endl<<"No 3:- insert M ";
  cout<<endl<<"No 4:- Delete H ";
  cout<<endl<<"No 5:- Delete L ";
  cout<<endl<<"No 6:- Delete M ";
  cout<<endl<<"No 7:- Reverse  ";
  cout<<endl<<"Enter the Choice";
  cin>>n;
  switch(n)
  {
    case 1:
          insertH();
          break;
    case 2:
          insertL();
          break;
    case 4:
         deleteH();
         break;
    case 5:
         deleteL();
         break;
    case 7:
          reverse();
         break;
    case 3:
         insertM();
         break;
    case 6:
        DeleteM();
      break;
    default:
       exit(0);
  }
  }
}