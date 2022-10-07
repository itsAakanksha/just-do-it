#include <iostream>
using namespace std;

// 01 october 2022
// insertion in circular linked list

class node {
    public:
int data;
node *next;
};

void createcircularlist(node *&tail,int n)
{   node *newnode;
   newnode =  new node();
    newnode->data = n;
    newnode->next = 0;

    if(tail==0){
        tail = newnode;
        tail->next = newnode;
    }

    else{
        newnode ->next = tail->next ;
        tail->next = newnode;
        tail = newnode;
    }

}


 void display(node *tail)
 { 
    node *temp = tail->next;
    while(temp->next != tail->next){
      cout<<temp->data <<"->";
      temp = temp->next;
    }
    cout<<temp->data;
  
 }

void insertatpos(node *tail,int pos)
{      
     node * temp = tail->next;
        int i=0;
        while(i<3){
            temp = temp->next;
            i++;
        }
      node  *newnode;
      newnode  = new node();
      newnode->data = 34;
      newnode ->next=0;

      newnode->next = temp->next;
      temp ->next = newnode;
}

void insertatbegin(node *tail)
{ node  *newnode;
      newnode  = new node();
      newnode->data = 90;
      newnode ->next=0;
      newnode->next =tail->next;
      tail->next = newnode;
      tail = newnode;
}

void deletefrompos(node *tail)
{
  node *temp,*nodes;

  temp = tail->next;
  for(int i=1;i<3;i++){
    temp = temp->next;
  }
  
  
   nodes = temp->next;
   temp = tail->next;
  for(int i=1;i<2;i++){
    temp = temp->next;
  }

  temp ->next = nodes;

}

void deletefrombegin(node *tail)
{
  node *temp ;
  temp = tail->next;
  tail->next = temp->next;
}

void reversecircularlinkedlist(node *tail)
{
  node *nextnode,*temp,*prev;
  temp = tail->next;
  prev = tail;
  while(temp!=tail){
  nextnode = temp ->next;
  temp->next = prev;
  prev = temp ;
  temp =nextnode;
  }
  temp->next = prev;
}
int main()
{
   node * tail = 0;
 createcircularlist(tail,8);
 createcircularlist(tail,2);
 createcircularlist(tail,9);
  display(tail);
  cout<<"\n AFTER INSERTION AT POSITION\n";
  insertatpos(tail,2);
  display(tail);
  cout<<"\n AFTER INSERTION AT beginnig\n";
  insertatbegin(tail);
  display(tail);
  cout<<"\nAFTER DELETION at any position\n";
  deletefrompos(tail);
  display(tail);

  cout<<"\nAFTER DELETION from beginning\n";
  deletefrombegin(tail);
  display(tail);

cout<<"after reversing\n:";
reversecircularlinkedlist(tail);
display(tail);

}



