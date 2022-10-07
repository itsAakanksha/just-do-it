#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;
  node *prev;
};

void insertdata(node *&head, int n)
{
  node *newnode = new node();
  newnode->data = n;
  newnode->next = 0;

  if (head == 0)
  {
    head = newnode;
    head->prev = 0;
    return;
  }

  node *temp = head;
  while (temp->next != 0)
  {

    temp = temp->next;
  }
  newnode->prev = temp;
  temp->next = newnode;
}

void insertion(node *head, int n, int pos)
{
  node *newnode = new node();
  newnode->data = n;
  newnode->next = 0;
  int i = 1;
  node *temp = head;
  while (i < (3 - 1))
  {
    temp = temp->next;
    i++;
  }

  newnode->next = temp->next;
  temp->next = newnode;
  newnode->prev = temp;
  temp = temp->next;
  node *fornext = temp->next;
  fornext->prev = temp;
}

void reverselinkedlist(node *&head)
{
  node *temp, *newnodes, *tail;

  temp = head;
  while (temp != 0)
  {
    tail = temp;
    newnodes = temp->next;
    temp->next = temp->prev;
    temp->prev = newnodes;
    temp = newnodes;
  }
  //   cout<<"tail data is "<<tail->data<<endl;

  temp = head;
  head = tail;
  tail = temp;
}

void display(node *head)
{
  node *temp = head;
  while (temp != 0)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
void redisplay(node *head)
{
  node *temp = head;

  while (temp->next != 0)
  {
    temp = temp->next;
  }
  while (temp != 0)
  {
    cout << temp->data << "->";
    temp = temp->prev;
  }
  cout << "NULL";
}

void deletenode(node *head, int pos)
{
  int i = 1;
  node *temp = head;
  while (i <= (3 - 1))
  {
    temp = temp->next;
    i++;
  }

  node *newn;
  newn = temp->prev;
  newn->next = temp->next;
  newn = temp->next;
  newn->prev = temp->prev;
}

int main()
{
  node *head = 0;
  int pos = 3;
  insertdata(head, 8);
  insertdata(head, 5);
  insertdata(head, 1);
  display(head);
  redisplay(head);
  insertion(head, 34, pos);

  cout << "\n AFTER INSERTION AT POSITION 3 \n";
  display(head);
  redisplay(head);

  cout << "\n AFTER DELETION AT POSITION 3 \n";
  deletenode(head, pos);
  display(head);
  redisplay(head);

  cout << "AFTER REVERSING LINKED LIST: \n";
  reverselinkedlist(head);
  display(head);
  redisplay(head);
}
