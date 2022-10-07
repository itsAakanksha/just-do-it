#include <stdio.h>
#include <stdlib.h>

    struct node
    {
        int data;
        struct node *next;
    };

int main()
{

  struct node *newnode,*head=0,*temp; 
  
   //newnode is a pointer object of datatype node which stores  address and object contains data and next pointer.
   int choice=1;
   printf("Enter 1 to create a new node and enter 0  to discontinue:\n");

  while(choice ==1){
  scanf("%d",&choice);
  

  newnode = (struct node *) malloc(sizeof(struct node ));

    if(choice == 0)
   {
    break;
   }


    printf("your newnode created, enter data  : ");
    scanf("%d",&newnode->data);
     newnode ->next =0;



   if(head==0)
   {
   head = newnode;
   temp = newnode;
  }


  else
  {
  temp->next = newnode;
  temp = newnode;
  }
    
  }
  temp = head;
  int i =1;
  while(temp!=0)
  { 
    printf("data in node %d are %d \n",i,temp->data);
    temp = temp->next;
    i++;
  }
  

   



  


    return 0;
}