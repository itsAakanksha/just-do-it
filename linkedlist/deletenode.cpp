#include <iostream>
using namespace std;

class node{
public:
int data;
node *next;
};

int main(){
    node *newnode,*head=0,*temp;
    int i;
    newnode = new node();

    for(int i =1;i<5;i++)
    {
    newnode ->data =i;
    newnode ->next =0;
 
   if(head ==0)
   {
      head = newnode ;
      temp = newnode;

   }

    else
    {
        temp->next = newnode;
        temp = newnode;
    }
  
    }

    // traverse the linkedlist

    temp = head;
    while(temp!=0)
    {
      cout<<temp->data<<" ";
      temp = temp->next;
  
    }

     
}