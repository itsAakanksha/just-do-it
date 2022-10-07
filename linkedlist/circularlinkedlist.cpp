#include <iostream>
using namespace std;



// class node
// {
// public:
//     int data;
//     node *next;
// };

// void createlinkedlist(node *&head, int n)
// {

//     int x;
//     node *newnode, *temp;
//     for (int i = 0; i < n; i++)
//     {
//         newnode = new node();
//         cout << "enter data : ";
//         cin >> x;
//         newnode->data = x;
//         newnode->next = 0;
//         if (head == 0)
//         {
//             head = newnode;
//             temp = newnode; 
//         }
//         else
//         {

//             temp->next = newnode;
//             temp = newnode;
//         }
//     }
//             temp->next = head;

// }

// void display(node *head,int n)
// {
//     node *temp;
//     temp = head;

//     for(int i=0;i<n;i++)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     // cout << "NULL" << endl;
// }

// int main()
// {
//     node *head = 0;
//     createlinkedlist(head, 4);
  
//     display(head,4);
// }


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
int main()
{
   node * tail = 0;
 createcircularlist(tail,8);
 createcircularlist(tail,2);
 createcircularlist(tail,9);
  display(tail);
 
}


