#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;
    node *prev;
};


void createdoublycircular(node * &head, node  * &tail,int n){
      
       node *newnode = new node();

       newnode->data = n;
       newnode->next = 0;
       newnode ->prev = 0;

       if(head == 0)
       {
          head = newnode;
          tail = newnode;
          newnode  ->next =tail;
          newnode->prev = head;
       }

       else{
          tail->next = newnode;
          newnode->prev = tail;
          newnode ->next = head;
          head ->prev= newnode;
          tail = newnode;
          
       }
}


  void display(node *head,node *tail)
  {
   node * temp = head;
    if(head ==0)
    {
        cout<<"list is empty\n";
    }
    else{
        while(temp !=tail)
        {
          cout<<temp->data<<"->";
          temp = temp->next;
        }
        cout<<temp->data<<endl;
    }
  }


 void insertionatbegin(node * &head,node *tail,int n)
 {
     node *newnode = new node();
     newnode->data = n;
     newnode->next = 0;
     newnode->prev =0;



  if(head==0)
  {
      head = newnode;
      newnode->next = newnode;
      newnode ->prev = newnode;

  }

  else{
    newnode->prev =head ->prev ;
    newnode->next= head;
    head ->prev = newnode;
    tail->next = newnode;
    head = newnode;
  }
 }
 
 void insertatend(node *&head,node *&tail,int n)
 { 

   node *newnode = new node();
   node *temp  =head;
     newnode->data = n;
     newnode->next = 0;
     newnode->prev =0;

     if(head==0)
  {
      head = newnode;
      newnode->next = newnode;
      newnode ->prev = newnode;
     tail = newnode;
  }
  else{
      while(temp!=tail)
      {
        temp = temp->next;
      }

      newnode ->prev = temp;
     newnode->next =  temp ->next ;
     temp ->next = newnode;
     tail = newnode;
      head ->prev = newnode;
  }
 }

 void insertatpos(node *&head,node *&tail,int n,int pos)
 {
        
  node *newnode = new node();
   node *temp  =head;
     newnode->data = n;
     newnode->next = 0;
     newnode->prev =0;

     if(head==0)
  {
      head = newnode;
      newnode->next = newnode;
      newnode ->prev = newnode;
     tail = newnode;
  }

  else{

    for(int i =1;i<pos-1;i++)
    {
      temp = temp->next;

    }
     newnode->prev = temp;
     newnode->next = temp->next;
     temp->next->prev = newnode;
      temp->next = newnode;

  }

 }

 void deletionatpos(node *head,node*tail,int pos)
 {

   node *temp  =head;

      for(int i =1;i<pos-1;i++)
    {
      temp = temp->next;

    }
  
    temp->next= temp->next ->next;
    temp->next ->prev = temp;
 }

 void deleteatbegin(node *&head,node *&tail)
 {
  
 }

int main(){

  node *head =0,*tail = 0;

  createdoublycircular(head,tail,4);
  createdoublycircular(head,tail,24);
  createdoublycircular(head,tail,9);
  display(head,tail);
  cout<<"\nAFTER INSERTION AT BEGINNING\n";
  insertionatbegin(head,tail,89);
  display(head,tail);
  cout<<"\nAFTER INSERTION AT end\n";
  insertatend(head,tail,23);
  display(head,tail);
  cout<<"\nAFTER INSERTION AT any position\n";
  insertatpos(head,tail,35,3);
  display(head,tail);
  cout<<"\nAFTER DELETION AT any position\n";
  deletionatpos(head,tail,5);
  display(head,tail);

}